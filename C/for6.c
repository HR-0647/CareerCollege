// for6.c
#include <stdio.h>

int main(void) {
  //
  for(int i = 0; i < 10; i++) {
    printf(" %d: ", i);
    // �ui�̓��v�̐����� * ���o�͂���
    for(int j = 0; j < (i * i); j++) {
      printf("*");
    }
    // �Ō�̉��s
    printf("\n");
  }

  return 0;
}
