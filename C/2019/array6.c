// array6.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 5 /* 1�l������̃e�X�g�̎�� */
#define NUMBER 4 /* �l�� */

int main(void) {
  // �񎟌��z��̗p��
  int box[ NUMBER ][ ARRAY_SIZE ];

  // �����̃V�[�h��ݒ�
  srand((unsigned)time(NULL));
  // �l�����Aloop
  int total;
  for(int num = 0; num < NUMBER; num ++) {
    //
    total = 0;

    for(int i = 0; i < ARRAY_SIZE; i ++) {
      // �����𔭐������Ĕz��Ɋi�[����
      box[num][i] = rand() % 101; // 0-100
      // ���ϓ_���Z�o���邽�߂̍��v�l
      total += box[num][i];
      // �o��
      printf("%d is %d\n", i, box[num][i]);
    }
    // ���ς̏o��
    printf("%d: average %.2f\n\n", num, (double)total / ARRAY_SIZE);
  }

  return 0;
}
