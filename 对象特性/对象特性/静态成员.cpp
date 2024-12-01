//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int A);
//	~Person();
//	//1.所有对象都共享同一份数据
//	//2.编译阶段就分配内存
//	//3.类内声明，类外初始化
//	static int m_A;//声明
//	//该变量也有访问权限，满足私有类外不访问
//
//	//静态成员函数只能访问静态成员变量，因为它无法理解非静态变量属于那个类
//	//所有对象都共享同一份数据
//private:
//
//};
//int Person::m_A;//初始化
//
//Person::Person(int A)
//{
//	m_A = A;
//}
//
//Person::~Person()
//{
//}
//void test1(){
//	Person p1(100);
//	cout << p1.m_A;//这里输出是100
//	Person p2(200);
//	cout << p1.m_A;//这里输出变成200了，但我没动P1,这就是1说的	
//}
//void test2() {
//	//静态对象变量不属于任何一个对象，所有对象共享
//	//因此有两种访问方式
//	//第一种通过对象
//	Person p(100);
//	cout << p.m_A<<endl;
//	//第二种通过类名
//	cout<<Person::m_A;
//
//
//}
////void main() {
////	test2();
////}