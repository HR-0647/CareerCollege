// p_29.cpp
#include <iostream>
#include <vector>

class hoge {
};
class foo {
};

void func(hoge &h) {
}

int main() {
	std::vector<int> iwk;
	iwk.push_back(1);
	//iwk.push_back("abc"); // ����͑ʖ�

	std::vector<hoge *> hwk;
	hwk.push_back(new hoge());
	//hwk.push_back(new foo()); // ����͑ʖ�

	foo f;
	//func(f); // ����͑ʖ�

	return 0;
}