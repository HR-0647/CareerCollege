// p_9.c
#include <stdio.h>

int main() {
	char ac[] = "abcdef";
	char* pac = ac;

	//
	printf("%p\t%c(%c)\n", pac, *pac, ac[0]);
	// �Ō�̕���
	pac += 5;
	printf("%p\t%c(%c)\n", pac, *pac, ac[5]);
	// �u�Ō�̕����v�̎�
	pac ++;
	printf("%p\t%c(%c)(%d)\n", pac, *pac, ac[6], ac[6]);

	return 0;
}
