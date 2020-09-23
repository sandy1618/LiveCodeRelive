#include<stdio.h>

int main (){
  int i=0;
  int a = i++*2;
  printf("i=0, i++*2=%d\n", a);
  i=0;
  a = ++i * 2;
  printf("i=0, ++i*2=%d\n", a);
  i=0;
  a = (++i) * 2;
  printf("i=0, (i++)*2=%d\n", a);
  i=0;
  a = (++i) * 2;
  printf("i=0, (++i)*2=%d\n", a);
  return 0;
}
