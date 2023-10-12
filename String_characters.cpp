#include<stdio.h>

int main(){
  char hoten[30];
  int namsinh;
  printf("\n nhap ho ten sinh viên ");
  fgets(hoten,30,stdin);
  printf("\n nhap vao nam sinh");
  scanf("%d", &namsinh);
  printf("\nho ten sinh viên: %s", hoten);
  printf("\nnam sinh: %d", namsinh);
  getch();
  return 0;
}
