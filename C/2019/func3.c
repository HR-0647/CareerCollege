// func3.c
// cl  func3.c
#include <stdio.h>

// ��`
int func1(int i, int j);

//����
int func1(int i, int j) {
    return i + j;
}
//
int main(void) {
  //
  int i;
  i = func1(1, 2);
  //i = func1(1); // error C2198: 'func1': �Ăяo���ɑ΂�����������Ȃ����܂��B
  //i = func1(1, 2, 3); // warning C4020: 'func1': ���������������܂��B
  //i = func1("1", 2); // warning C4047: '�֐�': �ԐڎQ�Ƃ̃��x���� 'int' �� 'char [2]' �ňقȂ��Ă��܂��B // warning C4024: 'func1': �̌^�� 1 �̉���������ю������ƈقȂ�܂��B
  i = func1(1.234, 2); // �G���[�͏o�Ȃ�(�L���X�g�͂����)
  i = func1('A', 2); // �G���[�͏o�Ȃ�(�A�X�L�[�R�[�h�Ōv�Z�����)

  printf("%d\n", i);
  printf("%c\n", 65);

  return 0;
}
