// p_28.cpp
#include <iostream>
#include <string>

// �C���X�^���X��copy����邩��߂��Ⴍ���Ⴡ������H��
void func1(std::string s) {
	// ����
}
// �ł��ufunc2�̒���s�̒��g�����������Ăق����Ȃ��c�c�c�v
void func2(std::string &s) {
	// ����
	s = s + "abc"; // �ł����Ⴄ���Ǎ���c�c�c
}
//
void func3(const std::string &s) {
	// ����
	//s = s + "abc"; // �������R���p�C���œ{����I�I
}

int main() {
	std::string s = "abc"; // 100k�o�C�g���炢�̒������Ǝv���˂�
	func1(s);
	func2(s);
	func3(s);
}