// p_20.c
/*
�\����
	int a
	int b
	int c
---
�E�֐� hoge() �̒���a b c�ɂ��ꂼ��u�O�`�P�O�O�v�̐���������
�Emain�֐����ŁA�������l��\������
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �\����
typedef struct {
	int a;
	int b;
	int c;
} TEST;

//
void hoge(TEST *t) {
	// a b c�ɂ��ꂼ��u�O�`�P�O�O�v�̐���������
	t->a = rand() % 101;
	t->b = rand() % 101;
	t->c = rand() % 101;
}

int main() {
	// ��x����
	srand((unsigned int)time(NULL));
	//
	TEST test;
 	hoge(&test);

	// main�֐����ŁA�������l��\������
	printf("%d, %d, %d \n", test.a, test.b, test.c);

	//
	return 0;
}
