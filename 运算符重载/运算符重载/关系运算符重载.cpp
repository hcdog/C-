////����һ���㣬��������Ȩ����˽�ж����
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age, string name);
//	~Person();
//	bool operator!=(Person &p1) {//Ҳ��������
//		if (this->m_age != p1.m_age || this->m_name != p1.m_name) {
//			cout << p1.m_age<< this->m_age;
//			return true;
//		}
//		else
//		{
//			cout << p1.m_age << this->m_age;
//			return false;
//		}
//	}
//
//private:
//	int m_age;
//	string m_name;
//};
//
//Person::Person(int age,string name)
//{
//	m_age = age;
//	m_name = name;
//
//}
//
//Person::~Person()
//{
//}
////bool operator!=(Person &p1,Person &p2) {
////
////}����д������
//
//void test1() {
//	Person p(18, "tome");
//	Person p1(18, "tome");
//	if (p != p1){
//		cout << "����";
//	}
//	else {
//		cout << "��";
//	}
//
//}
//void main() {
//	test1();
//}