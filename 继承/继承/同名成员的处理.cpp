//#include <iostream>
//using namespace std;
//class header
//{
//public:
//	header();
//	~header();
//	int m_a=200;
//	void base() {
//		cout << "父类"<<endl;
//	}
//protected:
//	int m_d;
//private:
//	int m_c;
//
//};
//
//header::header()
//{
//}
//
//header::~header()
//{
//}
//class python : public header//继承class 子类（派生类）：public 父类（基类）
//{
//public:
//	python();
//	~python();
//	int m_a=100;
//	void base() {
//		cout << "子类" << endl;
//	}
//
//};
//
//python::python()
//{
//}
//
//python::~python()
//{
//}
//int main()
//{
//	python p1;
//	cout << p1.m_a << endl;//不加就是子类
//	cout << p1.header::m_a<<endl;//加一个作用域就能访问到父类
//	//调函数
//	p1.base();
//	p1.header::base();
//}