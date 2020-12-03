#include <stdio.h>

int main(void) {
double DT, CV, R;
R = 1.5;
const double PI = 3.14;
CV = 2 * R * PI;
DT = R * R * PI;
printf("CV = 2 * R * PI = %0.2f\n",CV);
printf("DT = R * R * PI = %0.3f\n",DT);
printf("R   |  CV  |   DT\n");
printf("1.5 | 9.42 | 7.065");
  return 0;
}
