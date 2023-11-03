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
  free(str2);
  getch();
  return 0;
}
🚩🔴 tự xây lại hàm strdup() 🔴🚩
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char *strdup(char str1[]){
  // cấp phát 1 vùng nhớ cho chuỗi str2 sao chép các kí tự của chuỗi str1 sang
  char *str2 = (char *)malloc(strlen(str1)+1);
  for(int i = 0;i < strlen(str1);i++){
    str2[i]=str1[i];
  }
  str2[strlen(str1)] = '\0';
  return str2;
  free(str2);
}
int main(){
  char str1[30];
  printf("\nnhap chuoi str1: ");
  fgets(str1,30,stdin);
  printf("\n chuoi s1 sau khi nhap la: %s", str1);
  char *str2= strdup(str1);
  printf("\n chuoi s2 sau khi nhap la: %s", str2);
  getch();
  return 0;
}
🔴🔴🔴hàm chuyển kí tự in hoa thành in thường 🔴🔴🔴
#include<stdio.h>
#include<conio.h>
#include<string.h>

void strlwr(char str1[]){
  for(int i = 0; i<strlen(str1);i++){
    if(str1[i] >= 65 && str1[i] <= 90){
      str1[i] += 32;
    }
  }
}
int main(){
  char str1[30];
  printf("\nnhap str1: ");
  fgets(str1,30,stdin);
  printf("\n  sau khi nhap la: %s", str1);
  strlwr(str1);
  printf("\n chuoi in thuong: %s",str1);
  getch();
  return 0;
}
🔴🔴🔴hàm chuyển kí tự in thường thành in hoa🔴🔴🔴
#include<stdio.h>
#include<conio.h>
#include<string.h>

void strlwr(char str1[]){
  for(int i = 0; i<strlen(str1);i++){
    if(str1[i] >= 97 && str1[i] <= 122){
      str1[i] -= 32;
    }
  }
}
int main(){
  char str1[30];
  printf("\nnhap str1: ");
  fgets(str1,30,stdin);
  printf("\n  sau khi nhap la: %s", str1);
  strlwr(str1);
  printf("\n chuoi in thuong: %s",str1);
  getch();
  return 0;
}
▶️ strrev() hàm đảo chuỗi
🔴code
#include<stdio.h>
#include<conio.h>
#include<string.h>

void hoan_vi(char &x,char &y){
  char temp = x;
  x = y;
  y = temp;
}
void strrev(char str1[]){
  int dodai = strlen(str1);
  for(int i = 0; i< (dodai / 2);i++){
    hoan_vi(str1[i],str1[dodai -i -1]);
  }
}
int main(){
  char str1[100];
  printf("\nnhap chuoi str1: ");
  fgets(str1,100,stdin);
  printf("\n  chuoi nhan duoc la: %s", str1);
  strrev(str1);
  printf("\n chuoi sau khi dao nguoc: %s",str1);
  getch();
  return 0;
}
▶️ strcmp() so sánh hai chuỗi có phân biệt kí tự hoa và kí tự thường
#include<stdio.h>
#include<conio.h>
#include<string.h>

int strcmp(char s1[],char s2[]){
  int dodai_min = strlen(s1) > strlen(s2)? strlen(s1) : strlen(s2);
  for(int i = 0;i < dodai_min;i++){
    if(s1[i]> s2[i]){
      return 1;
    }
    else if(s1[i] < s2[i]){
      return -1;
    }
  }
  if(strlen(s1) > strlen(s2)){
    return 1;
  } else if(strlen(s1)< strlen(s2)){
    return -1;
  } else{
    return 0;
  }
}
int main(){
  char s[] = "a";
  char s1[] = "LAP TRINH";
  if(strcmp(s,s1)>0){
    printf("chuoi s lon hon chuoi s1");
  }else if(strcmp(s,s1)<0){
    printf("chuoi s1 lon hon chuoi s");
  }else{
    printf("chuoi s1 bang chuoi s");
  }
  getch();
  return 0;
}
▶️ stricmp() so sánh hai chuỗi không phân biệt kí tự hoa và kí tự thường
______________
nhập vào 1 chuỗi kí tự in thường từ bàn phím. bỏ hết tất cả các kí tự x(x là kí tự in 
thường nhập từ bàn phím) đó vào chuỗi temp
chú ý ko đc dùng hàm có sẵn
🎈🎈 code:
#include <stdio.h>
#include <conio.h>
#include <string.h>

void tim_kiem(char str[],char temp[], char x){
  int dem = 0;
  for(int i = 0; i< strlen(str);i++){
    if(str[i]==x){
      temp[dem]= str[i];
      dem++;
    }
  }
  temp[dem]= '\0';
}

int main(){
  char str[30];
  fflush(stdin);
  printf("\n nhap chuoi: ");
  fgets(str,30,stdin);
  char x;
  printf("\n nhap ki tu x: ");
  scanf("%c",&x);
  
  char temp[30];
  tim_kiem(str,temp,x);
  printf("\n chuoi temp nhan duoc: %s", temp);
  getch();
}
------------------------------
xoá khoảng trắng đầu và cuối chuỗi 
🌺🌺code💐💐
#include <stdio.h>
#include <conio.h>
#include <string.h>
// hàm xoá 1 kí tự tại 1 vị trí bất kì trong chuỗi - mảng kí tự
void xoa(char s[],int vitrixoa){
  int n =strlen(s);
  for(int i = vitrixoa +1;i<n;i++){
    s[i-1]= s[i];
  }
  s[n--]= '\0';
}
//hàm xoá tất cả kí tự khoảng trắng ở đầu chuỗi
void xoa_dauchuoi(char s[]){
    while(true){
    if(s[0] == ' '){
      xoa(s,0);
    }
    else{
      break;
    }
  }
}
//hàm xoá tất cả kí tự khoảng trắng ở cuoi chuỗi
void xoa_cuoichuoi(char s[]){
    while(true){
    if(s[strlen(s)-1] == ' '){
      xoa(s,strlen(s)-1);
    }
    else{
      break;
    }
  }
}
int main(){
  char s[30];
  printf("\n nhap chuoi: ");
  fgets(s,30,stdin);
  printf("\n chuoi nhan duoc: %s",s);
  printf("\n do dai chuoi: %d",strlen(s));
  xoa_dauchuoi(s);
  xoa_cuoichuoi(s);
  printf("\n chuoi sau khi xu li theo yc: %s",s);
  printf("\n do dai chuoi khi xu li: %d",strlen(s));
  getch();
}
