// switch.c
// cl  switch.c  get_line.c
#include <stdio.h>
#include <stdlib.h>
#include "get_line.h"

// �萔
#define BUFFER_SIZE 128

int main(void) {
  // ���͂𑣂�
  printf("���Ȃ��̍D���Ȉ��ݕ��́H\n");
  printf("1. �R�[�q�[\n");
  printf("2. �~���N�e�B\n");
  printf("3. �ǂ���ł��Ȃ�\n");

  char buffer[BUFFER_SIZE];
  get_line(buffer, BUFFER_SIZE);
  int n = atoi(buffer);
//printf("==> %d\n", n);

  // ���͒l�𔻒肷��
  /*
  if (n == 1) {
    printf("���Ȃ����I�񂾂̂� �R�[�q�[ �ł�\n");
  } else if (n == 2) {
    printf("���Ȃ����I�񂾂̂� �~���N�e�B �ł�\n");
  } else {
    printf("���Ȃ����I�񂾂̂� ���̑� �ł�\n");
  }
  */
  switch(n) {
    case 1:
      printf("���Ȃ����I�񂾂̂� �R�[�q�[ �ł�\n");
      break;

    case 2:
      printf("���Ȃ����I�񂾂̂� �~���N�e�B �ł�\n");
      break;

    default:
      printf("���Ȃ����I�񂾂̂� ���̑� �ł�\n");
      break;
  }

  return 0;
}

