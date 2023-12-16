Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int i, n;
    float S;

    do {
        printf("\nNhap n (n >= 2): ");
        scanf("%d", &n);
        if (n < 2) {
            printf("\nn phai >= 2. Xin nhap lai !");
        }
    } while (n < 2);

    i = 3;
    S = pow(2.0, 1.0/2);

    while (i <= n) {
        S = pow((i + S) * 1.0, 1.0/i);
        i++;
    }

    printf("\nTong la %f", S);
    getch();
    return 0;
}

