// for4.c
#include <stdio.h>

int main(void) {
  //
  for(int i = 0; i < 10; i ++) {
    printf("%d��", i);
    printf("����%d�ŁA", i * i);
    printf("�O���%d�ł�\n", i * i * i);
  }

  return 0;
}
