#include<stdio.h>

void Nhap_pt_mang(int a[]) {
  int n;
  printf ("nhap n = ");
  scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
//nhap n va a[] từ bàn phím

void Hien_thi_pt_mang(int a[]) {
  int n;
    printf("Cac phan tu trong mang = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
//hiển thị các phần tử trong mảng đã nhập ra màn hình

void Hien_thi_tong_chan(int a[]) {
  int n;
    int S = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            S += a[i];
        }
    }
    printf("\nTong cac so chan  = %d", S);
    
}
//hiển thị tổng của các số chẵn

void Dem_chan_le_0(int a[]) {
  int n;
    int demchan = 0, demle = 0, dem0 = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] % 2 == 0 && a[i] != 0) {
          demchan++;
        }
        if(a[i] % 2 != 0) {
          demle++;
        }
        if(a[i] == 0) {
          dem0++;
        }
    }
    printf("\nDem so chan = %d\nDem so le = %d\nDem so 0 = %d", demchan, demle, dem0);
}
//hiểm thị đếm chẵn, đếm lẻ và đếm số 0 

int main() {
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
