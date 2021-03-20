#include<stdio.h>

int main() {
  unsigned int n, T = 0; //unsigned là gọi số không âm
  scanf("%d", &n);
  for(int i = 1; i < n; i++) {
    if (n % i == 0)
      T += i;
  }
  if(T == n) {
    printf("%d la so hoan hao", n);
  } else printf("%d khong la so hoan hao", n);
  return 0;
}
