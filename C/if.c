// if.c
#include <stdio.h>
#include <stdlib.h>
#include "get_line.h"

// �萔
#define BUFFER_SIZE 256

int main(void) {

  // �~���m�����擾
  char buffer[BUFFER_SIZE];
  printf("�~���m��: ");
  get_line(buffer, BUFFER_SIZE);
  int n = atoi(buffer);
//printf("%d\n", n);

  // �G���[�`�F�b�N(validation)
  // �~���m����100�𒴂��Ă���0������������G���[
  if ( (n > 100) || (n < 0) ) {
    printf("�~���m����0�`100�̊Ԃœ��͂��Ă�������\n");
    return -1;
  }

  // �����A�~���m����50%�ȏ�Ȃ�
  if (n >= 50) {
    // �P�������Ă���
    printf("�P�������Ă���\n");
  } else if (n >= 20) {
    // �����A(�~���m����50%�ȏ�ł͂Ȃ��A)�~���m����20%�ȏ�Ȃ�
    printf("�܂肽���ݎP�������Ă�����\n");
  } else {
    printf("�P�͂���Ȃ�\n");
  }

  return 0;
}









