// input.c
#include <stdio.h>
#include <stdlib.h>

// �萔
#define BUFFER_SIZE 256

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

int main(void) {
  //
  char buffer[BUFFER_SIZE];

  printf("1st num: ");
  get_line(buffer, BUFFER_SIZE);
  int i = atoi(buffer);
  //printf("input is : %d\n", i);
  printf("2nd num: ");
  get_line(buffer, BUFFER_SIZE);
  int j = atoi(buffer);

  printf("%d + %d = %d\n", i, j, i + j);


  return 0;
}




