// p_14.c
#include <stdio.h>

int main() {
	char ac[] = "abcde";
	char* ps = "abcde";

	//
	printf("%p\t%s\n", ac, ac);
	printf("%p\t%s\n", ps, ps);

	ac[0] = 'A';
	ps[0] = 'A'; // ���܂萄������Ȃ�
	printf("%p\t%s\n", ac, ac);
	printf("%p\t%s\n", ps, ps);

	//
	printf("%c\n", "abc"[1]);

	//
	return 0;
}

