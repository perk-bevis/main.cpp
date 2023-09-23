size(): trả về kích thước hiện tại của set
empty(): true nếu set rỗng và ngược lại
insert(): thêm(chèn) một phần tử vào trong set
find(): trả về interator trỏ đến phần tử cần tìm kiếm nếu không tìm thấy interator trỏ về end của set
count(): trả về số lần xuất hiện của khoá trong container . nhưng trong set các phần tử chỉ xuất hiện 1 lần nên hàm này có ý nghĩa là sẽ return 1 nếu khoá có trong container và 0 nếu không có 

🔴 find()
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>s;
    for(int i=0;i<10;i++){
        s.insert(i);
    }
    cout << s.size()<<endl;
    if(s.find(5) != s.end()){
        cout << "found !\n";
    }else{
        cout << "not found !\n";
    }
    return 0;
}
