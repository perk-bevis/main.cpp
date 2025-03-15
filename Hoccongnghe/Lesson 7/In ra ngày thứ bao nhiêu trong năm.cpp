#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30; 
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

int dayOfYear(int day, int month, int year) {
    int totalDays = day;
    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth(i, year);
    }
    return totalDays;
}

int main() {
    int day, month, year;
    cin >> day >> month >> year;
    
    int result = dayOfYear(day, month, year);
    cout << result << endl;

    return 0;
}
