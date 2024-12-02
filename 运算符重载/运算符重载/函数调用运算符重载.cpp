//（）的重载，重载后和函数像，叫仿函数
//引出一个点，重载是有权调用私有对象的

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(int age, string name);
	~Person();
	void operator()(string a) {
		cout << a << endl;
	}//定义重载
	void operator()(int a,int b) {
		cout << a << endl;
	}//定义重载
private:
	int m_age;
	string m_name;
};

Person::Person(int age, string name)
{
	m_age = age;
	m_name = name;

}

Person::~Person()
{
}
//bool operator!=(Person &p1,Person &p2) {
//
//}可以写在类外

void test1() {
	Person p(10, "1313");
	p("sasd");//调用
	//仿函数非常灵活，没有固定写法；
	p(1, 2);
}
void main() {
	test1();
}