#include <iostream>
using namespace std;
//成员变量和成员函数是分开存储的
//this指针，指向被调用的成员函数的对象
//1.解决名称冲突，如果传入的参数名称和类里的一样，完不成赋值，所有的变量都视作参数
class Person
{
public:
	Person(int age);
	~Person();
	int age;
	int m_a;//int一个整型变成4
	static int m_b;
	void te() {
		//写个函数还是4，因为是分开存储的
	}
	Person& PersonAddAge(Person &p) {
		this->age = this->age + p.age;
		return *this;
	}
	Person PersonAdd(Person &p) {
		this->age = this->age + p.age;
		return *this;
	}
private:

};
//加一个静态还是4.因为静态不在类中
int Person::m_b;
Person::Person(int age)
{
	//age = age;//完不成赋值
	this->age = age;//完成赋值
}

Person::~Person()
{
}
void test1(){
	//Person p;
	//cout << sizeof(p)<<endl;//占一个字节，仅做占位
}
void test2() {
	Person p(18);
	cout << p.age << endl;
	Person p2(18);
	//链式编程思想，使用this无限追加
	//p.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);//返回this指针的解，this指向当前对象，解就是当前对象
	////使用值返回，结果为36，因为每次都返回了原本this指向的拷贝，而this的指向的是本体
	//cout << p.age << endl;
	Person P3 = p.PersonAdd(p2).PersonAdd(p2).PersonAdd(p2);//
	cout << P3.age << endl;
}
void main() {
	test2();
}