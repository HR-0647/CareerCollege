// get_line.c
#include <stdio.h>
#include "get_line.h"

void get_line(char *buffer, int size) {
  // �G���[ or 1 �������ǂݍ���ł��Ȃ�
  if (NULL == fgets(buffer, size, stdin)) {
    buffer[0] = '\0';
    return; // �������^�[��
  }

  // �u�Ō�̉��s�v���폜����
  for(int i = 0; i < size; i ++) {
    //printf("%d :%c:\n", i, buffer[i]);
    // ���s�����Ȃ�
    if ('\n' == buffer[i]) {
      // �I�[����(\0)�ɏ���������
      buffer[i] = '\0';
      return ;
    }
  }

  //
  return ;
}

