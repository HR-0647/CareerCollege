// switch2.c
// cl  switch.c  get_line.c
#include <stdio.h>
#include <stdlib.h>
#include "get_line.h"

// �萔
#define BUFFER_SIZE 128

int main(void) {
  // ���͂𑣂�
  printf("���Ȃ��̍D���Ȉ��ݕ��́H\n");
  printf("a. �R�[�q�[\n");
  printf("b. �~���N�e�B\n");
  printf("c. �ǂ���ł��Ȃ�\n");

  char buffer[BUFFER_SIZE];
  get_line(buffer, BUFFER_SIZE);
  char c = buffer[0];
  //char c = getchar();
//printf("==> %c\n", c);
//return 0;

  // ���͒l�𔻒肷��
  switch(c) {
    case 'A': // FALL THROUGH
    case 'a':
      printf("���Ȃ����I�񂾂̂� �R�[�q�[ �ł�\n");
      break;

    case 'B': // FALL THROUGH
    case 'b':
      printf("���Ȃ����I�񂾂̂� �~���N�e�B �ł�\n");
      break;

    default:
      printf("���Ȃ����I�񂾂̂� ���̑� �ł�\n");
      break;
  }

  return 0;
}

