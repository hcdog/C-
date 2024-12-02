//// 运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////使用operator+完成对运算符+的重载使其能够满足更多的类加法
//
//#include <iostream>
//using namespace std;
//
//class test
//{
//public:
//	test(int a,int b);
//	~test();
//	int A;
//	int B;
//	test operator+(test &p);//类里面重载只能写一个参数
//
//private:
//
//};
//
//test::test(int a=0, int b=0)
//{
//	A = a;
//	B = b;
//}
//
//test::~test()
//{
//}
//test test::operator+(test &p) {
//	test p2;
//	p2.A = this->A + p.A;
//	p2.B = this->B + p.B;
//	return p2;
//}
//
//int main()
//{
//    test p1(10,10);
//	test p2(1, 1);
//	test p3 = p1 + p2;
//	cout << p3.A;
//	cout << p3.B;
//
//}
//
//
