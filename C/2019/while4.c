// while4.c
// �R���p�C���Fcl  while4.c
// ���s�Fwhile4.exe < while4.txt
#include <stdio.h>
#include <ctype.h>

int main(void) {
  //
  int c;
  // �����̏I���(EOF)�܂Ń��[�v
  while((c = getchar()) != EOF){
    /*
    // �������u�啶���v�Ȃ�
    if (isupper(c)) {
      c = tolower(c); // �������ɕϊ�
    }
    */
    // �������u�������v�Ȃ�
    if (islower(c)) {
      c = toupper(c); // �啶���ɕϊ�
    }
    // �o��
    putchar(c);
  }

  return 0;
}
