//// 继承.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//#include <iostream>
//using namespace std;
//class header
//{
//public:
//	header();
//	~header();
//	void test1(){
//		cout << "输出";
//	}
//	int a = 10;
//private:
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
//class header2
//{
//public:
//	header2();
//	~header2();
//	void test() {
//		cout << "输出";
//	}
//	int a=10;
//private:
//
//};
//
//header2::header2()
//{
//}
//
//header2::~header2()
//{
//}
//class python: public header, public header2//继承class 子类（派生类）：public 父类（基类）,public 父类（基类）,
//{
//public:
//	python();
//	~python();
//	int b=10;
//private:
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
//	cout << sizeof(p1);
//	//cout <<p1.a;//多继承父类有重复变量，会引发不明确，要加作用域
//	cout << p1.header::a<<endl;
//	cout << p1.header2::a;
//
//}