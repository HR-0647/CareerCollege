// for.c
#include <stdio.h>

int main(void) {
  // 100��A�J��Ԃ�����������
  for(int i = 0; i < 100; i++) {
    printf("%d\n", i);
  }
  //
  //printf("�J�E���^�� %d �ł�\n",i); // for.c(10): error C2065: 'i': ��`����Ă��Ȃ����ʎq�ł��B

  // �������ł��悢(�d�l���̋L�q����)
  for(int i = 1; i <= 100; i++) {
    printf("%d\n", i);
  }

  // �u�P����P�O�O�܂ł̑��a�v�̌v�Z
  int total = 0;
  for(int i = 1; i <= 100; i++) {
    total += i;
  }
  printf("1����100�܂ł̑��a�� %d �ł�..\n", total);

  return 0;
}

