#include <stdio.h>

int main(){
 int soDien, tienDien;
 int bac1=5,bac2=7,bac3=10,bac4=15,bac5=20;
 printf("Nhap vao so dien cua ban (kW): ");
 scanf("%f",&soDien);
 if(soDien<0){
 printf("\nVui long nhap lai So Dien\nSo dien khong duoc nho hon 0\n");
 }else if(soDien<=100){
  tienDien=soDien*bac1;
  printf("\nban da dung dien trong khoang 0 - 100 kW so tien ban phai tra la: %.2f",tienDien);
 }else if(soDien<=150){
  tienDien=100*bac1+((soDien-100)*bac2);
  printf("\nban da dung dien trong khoang 101 - 150 kW so tien ban phai tra la: %.2f",tienDien);
 }else if(soDien<=200){
  tienDien=100*bac1+(50*bac2)+((soDien-150)*bac3);
  printf("\nban da dung dien trong khoang 151 - 200 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(soDien<=300){
  tienDien=100*bac1+(50*bac2)+(50*bac3)+((soDien-200)*bac4);
  printf("\nban da dung dien trong khoang 201 - 300 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(soDien>300){
  tienDien=100*bac1+(50*bac2)+(50*bac3)+(100*bac4)+((soDien-300)*bac5);
  printf("\nban da dung dien tren 400 kWh so tien ban phai tra la: %.2f",tienDien);
 }
 return 0;
}
