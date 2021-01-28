#include <stdio.h>

int main () {
  int n;
  printf ("nhap n = ");
  scanf ("%d", &n);
  //nhấp 1 số n từ bàn phím
  int tinh = 0;
  printf ("S = 0");
  for (int i = 1; i <= n; i++) {
    tinh += i;
    // tinh = tinh + i
    printf (" + %d ", i);
  }
  printf ("= %d", tinh);
  //hiển thị tổng tinh ra màn hình
  return 0;
}
