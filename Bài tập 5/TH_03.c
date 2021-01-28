#include <stdio.h>
int solonnhat(int a, int b, int c) {
int lonnhat = 0;
  if (a > b && a > c) {
    lonnhat = a;
  //nếu a lớn nhất thì lấy lonnhat = a;
  }else if (a < b && b < c){
    lonnhat = c;
  //nếu c lớn nhất thì lấy lonnhat = c;
  }else{
    lonnhat = b;
  //còn lại lấy lonnhat = b;
  }
  return lonnhat;
}

int main () {
printf("nhap a = ");
int a;
scanf ("%d", &a);
printf("nhap b = ");
int b;
scanf ("%d", &b);
printf("nhap c = ");
int c;
scanf ("%d", &c);
printf("%d", solonnhat(a, b, c));
}
