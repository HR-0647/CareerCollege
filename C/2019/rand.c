// rand.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //
  int r;
  // �����̃V�[�h��ݒ�
  srand((unsigned)time(NULL));

  // ���������
  r = rand() % 101; // 0-100
  printf("rand is %d\n", r);

  return 0;
}
