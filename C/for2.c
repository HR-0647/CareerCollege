// for2.c
#include <stdio.h>

int main(void) {
  // ���ʂ�for��
  for(int i = 0; i < 10; i++) {
    printf("���ʂ� %d\n", i);
  }
  printf("\n");

  // for�́u�Ō�̃u���b�N�v�́A���[�v�̍Ō�ɏ��������
  for(int i = 0; i < 10; ) {
    printf("�Ō���O���� %d\n", i);

    // �ufor�̍Ō�v�̏���
    // XXX �����ɂ́ucontinue�̎��v�ɓ������Ⴄ���A�C���[�W�Ƃ���
    i++;
  }
  printf("\n");

  // for�́u�^�񒆂̃u���b�N�v�́A���[�v�̍ŏ��ɏ��������
  for(int i = 0; ; ) {
    // �ufor�̐^�񒆁v�̏���
    if ( !(i < 10) ) {
      break;
    }

    printf("�^�񒆂��O���� %d\n", i);

    // �ufor�̍Ō�v�̏���
    i++;
  }
  printf("\n");

  // for�́u�ŏ��̃u���b�N�v�́A���[�v�̏�ŏ��������
  int i = 0;
  for( ; ; ) {
    // �ufor�̐^�񒆁v�̏���
    if ( !(i < 10) ) {
      break;
    }

    printf("�ŏ����O���� %d\n", i);

    // �ufor�̍Ō�v�̏���
    i++;
  }
  printf("\n");

  // �u����Ă���l�v�́A��q��for�̏�����
  i = 0;
  for( ; ; ) {
    // �ufor�̐^�񒆁v�̏���
    if ( !(i < 10) ) {
      break;
    }

    printf("�����e�N�j�J�� %d\n", i++); // 
  }
  printf("\n");



  return 0;
}
