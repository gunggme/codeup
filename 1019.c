#include<stdio.h>
main(void){
  int y, m, d;
  scanf("%04d.%d.%d", &y, &m, &d);
  printf("%04d.%02d.%02d", y, m, d);
  return 0;
}
