// array4.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 5

int main(void) {
  // �z����`����
  int box[ ARRAY_SIZE ];

  // �����̃V�[�h��ݒ�
  srand((unsigned)time(NULL));
  // �����𔭐������Ĕz��Ɋi�[����
  for(int i = 0; i < ARRAY_SIZE; i ++) {
    box[i] = rand() % 101; // 0-100
  }

  // ���ϓ_���Z�o����
  int total = 0;
  for(int i = 0; i < ARRAY_SIZE; i ++) {
    total += box[i];
  }

  // �o��
  for(int i = 0; i < ARRAY_SIZE; i ++) {
    printf("%d is %d\n", i, box[i]);
  }
  printf("average %.2f\n", (double)total / ARRAY_SIZE);

  return 0;
}
