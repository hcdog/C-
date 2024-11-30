#include <iostream>
#include <string>
const double PI = 3.14;
class Student
{
public:
	int grade;//成员变量与成员属性
	std::string nums;
	void show() {//成员函数
		std::cout << grade << "\t";
		std::cout << nums << std::endl;
	}
	void give(int a,std::string b) {
		grade = a;
		nums = b;
		show();
	}
};

//void main() {
//	Student s1;
//	s1.grade = 99;
//	s1.nums = "131424";
//	s1.show();
//	Student s2;
//	s1.give(88,"321");
//
//}