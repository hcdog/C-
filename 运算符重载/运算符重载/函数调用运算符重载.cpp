//���������أ����غ�ͺ����񣬽зº���
//����һ���㣬��������Ȩ����˽�ж����

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
	}//��������
	void operator()(int a,int b) {
		cout << a << endl;
	}//��������
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
//}����д������

void test1() {
	Person p(10, "1313");
	p("sasd");//����
	//�º����ǳ���û�й̶�д����
	p(1, 2);
}
void main() {
	test1();
}