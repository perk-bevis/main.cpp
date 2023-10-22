🔴NGÔN NGỮ LẬP TRÌNH C:CHUỖI KÍ TỰ🔴
#include<stdio.h>

int main(){
  char hoten[30];
  int namsinh;
  cout<=>printf("\n nhap ho ten sinh viên ");
  cin<==>fgets(hoten,30,stdin);
  printf("\n nhap vao nam sinh");
  scanf("%d", &namsinh);
  printf("\nho ten sinh viên: %s", hoten);
  printf("\nnam sinh: %d", namsinh);
  getch();
  return 0;
}
-----------------------------
#include<stdio.h>
#include<conio.h>

int main(){
  char hoten[30];
  int namsinh;
  printf("\n nhap vao nam sinh: ");
  scanf("%d", &namsinh);
  fflush(stdin);// xoa bộ nhớ đệm
  printf("\n nhap ho ten sinh viên ");
  fgets(hoten,30,stdin);
  printf("\nho ten sinh viên: %s", hoten);
  printf("\nnam sinh: %d", namsinh);
  getch();
  return 0;
}
----------------------------------------------------
▶️ ĐỘ DÀI CHUỖI strlen(<chuỗi cần lấy độ dài>)
🎗️⭕Cách 1:
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
  char hoten[30];
  fflush(stdin); //xoá bộ nhớ đệm
  printf("\n nhap ho va ten: ");
  fgets(hoten,30,stdin);
  //%d là bởi vì hàm này xuất ra độ dài chuỗi mà độ dài chuỗi là sn =%d
  printf("\ndo dai chuoi: %d", strlen(hoten));
  getch();
  return 0;
}
▶️cách 2: tự xây dựng hàm strlen() 
🔴dùng while lặp vo tận vì ko biết điểm dừng

#include<stdio.h>
#include<conio.h>
#include<string.h>
int tinh_do_dai_chuoi(char s[]){
  int i= 0;
  while(true){
    if(s[i]== '\0'){
      return i;
    }
    i++;
  }
}
int main(){
  char hoten[30];
  fflush(stdin); //xoá bộ nhớ đệm
  printf("\n nhap ho va ten: ");
  fgets(hoten,30,stdin);
  printf("\ndo dai chuoi: %d", tinh_do_dai_chuoi(hoten));
  getch();
  return 0;
}

🔴dùng for
#include<stdio.h>
#include<conio.h>
#include<string.h>
int tinh_do_dai_chuoi(char s[]){
  for(int i=0; ;i++){
    if(s[i]== '\0'){
      return i;
    }
  }
}
int main(){
  char hoten[30];
  fflush(stdin); //xoá bộ nhớ đệm
  printf("\n nhap ho va ten: ");
  fgets(hoten,30,stdin);
  printf("\ndo dai chuoi: %d", tinh_do_dai_chuoi(hoten));
  getch();
  return 0;
}
=========================================================
▶️hàm sao chép chuỗi strcpy()
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
  char s1[30];
  char s2[30];
  fflush(stdin); //xoá bộ nhớ đệm
  printf("\nnhap chuoi s1: ");
  fgets(s1,30,stdin);
  printf("\n chuoi s1 sau khi nhap la: %s", s1);
  strcpy(s2,s1);
  printf("\n chuoi s2 sau khi sao chep la: %s", s2);
  getch();
  return 0;
}
____________tự xây dựng lại hàm strcpy()_______________
kích thước chuỗi chứa kí tự \0
độ dài chuỗi ko chứa kí tự \0

#include<stdio.h>
#include<conio.h>
#include<string.h>

void sao_chep_chuoi(char s2[], char s1[]){
  for(int i = 0; i< strlen(s1);i++){
    s2[i]= s1[i];
  }
  s2[strlen(s1)] = '\0';// thêm kí tự \0 vào cuối chuỗi
}
int main(){
  char s1[30];
  char s2[30];
  fflush(stdin); //xoá bộ nhớ đệm
  printf("\nnhap chuoi s1: ");
  fgets(s1,30,stdin);
  printf("\n chuoi s1 sau khi nhap la: %s", s1);
  sao_chep_chuoi(s2,s1);
  printf("\n chuoi s2 sau khi sao chep la: %s", s2);
  getch();
  return 0;
}
----------
🔴hàm xoá tại vị trí bất kì trong chuỗi
#include<stdio.h>
#include<conio.h>
#include<string.h>

void xoa(char s[], int vt) {
  //b1 dời
  int n = strlen(s);
  for (int i = vt; i < n - 1; i++) {
    s[i] = s[i + 1];
  }
  s[strlen(s)-1]= '\0';
}
int main(){
  char str1[30];
  fflush(stdin); //xoá bộ nhớ đệm
  printf("\nnhap chuoi str1: ");
  fgets(str1,30,stdin);
  printf("\n chuoi s1 sau khi nhap la: %s", str1);
  xoa(str1, 2);
  printf("\n chuoi sau khi xoa: %s", str1);
  getch();
  return 0;
}
---------------------------------
🩸🩸🩸
#include<stdio.h>
#include<conio.h>
#include<string.h>

void xoa(char s[], int vitrixoa) {
  //b1 dời
  int n = strlen(s);
  for (int i = vitrixoa + 1; i<n ; i++) {
    s[i-1] = s[i];
  }
  s[strlen(s)-1]= '\0';
}
int main(){
  char str1[30];
  fflush(stdin); //xoá bộ nhớ đệm
  printf("\nnhap chuoi str1: ");
  fgets(str1,30,stdin);
  printf("\n chuoi s1 sau khi nhap la: %s", str1);
  xoa(str1, 2);
  printf("\n chuoi sau khi xoa: %s", str1);
  getch();
  return 0;
  }
-----------------------------------------------------
hàm thêm vào vị trí bất kì trong chuỗi kí tự
#include<stdio.h>
#include<conio.h>
#include<string.h>

void them(char s[], int vt ,int x){
  //b1 dời 
  int n = strlen(s);
  for (int i = n; i > vt; i--) {
    s[i] = s[i - 1];
  }
    //b2: chèn
  s[vt] = x;
  //b3 tăng  
  s[n+1];
}
int main(){
  char str1[30];
  printf("\nnhap chuoi str1: ");
  fgets(str1,30,stdin);
  printf("\n chuoi s1 sau khi nhap la: %s", str1);
  them(str1, 2 ,'t');
  printf("\n chuoi sau khi xoa: %s", str1);
  getch();
  return 0;
}
------------------
🩸🩸🩸🩸🩸
#include<stdio.h>
#include<conio.h>
#include<string.h>

void them(char s[], int vitrithem ,char kituthem){
  int n = strlen(s);
  for(int i = n -1;i >= vitrithem;i--){
    s[i+1]=s[i];
  }
  s[vitrithem] = kituthem;
  s[n+1] = '\0';//xác định lại kí tự \0
}
int main(){
  char str1[30];
  printf("\nnhap chuoi str1: ");
  fgets(str1,30,stdin);
  printf("\n chuoi s1 sau khi nhap la: %s", str1);
  them(str1, 2 ,'t');
  printf("\n chuoi sau khi xoa: %s", str1);
  getch();
  return 0;
  }
==============
▶️strdup()
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char str1[30];
  printf("\nnhap chuoi str1: ");
  fgets(str1,30,stdin);
  printf("\n chuoi s1 sau khi nhap la: %s", str1);
  char *str2 = strdup(str1);
  printf("\n chuoi s2 sau khi nhap la: %s", str2);
  getch();
  return 0;
}
