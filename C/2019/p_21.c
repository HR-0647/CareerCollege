// p_21.c
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *s;
	printf("%p\n", s); // warning C4700: ����������Ă��Ȃ����[�J���ϐ� 's' ���g�p����܂�

	s = malloc(128);
	printf("%p\n", s);

	//
	free(s);
	s = NULL; // ��������炷����NULL������悤�ɂ���(���̖h�~)

	return 0;
}


