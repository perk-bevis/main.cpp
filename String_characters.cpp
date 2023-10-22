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
