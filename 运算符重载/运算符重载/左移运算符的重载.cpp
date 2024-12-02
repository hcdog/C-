//// 运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////使用operator<<完成对运算符<<的重载，因为直接输出一个类不成立
//#include <iostream>
//using namespace std;
//
//class test
//{
//public:
//	test(int a, int b);
//	~test();
//	friend ostream& operator<<(ostream &cout, test &p);//一般要friend化
//
//
//private:
//	int A;
//	int B;
//
//};
//
//test::test(int a = 0, int b = 0)
//{
//	A = a;
//	B = b;
//}
//
//test::~test()
//{
//}
//ostream& operator<<(ostream &cout, test &p){//只能利用全局函数重载<<
//	cout << p.A << p.B;
//	return cout;//因为本身是引用，返回也要是引用
//}
//
//int main()
//{
//	test p1(10, 10);
//	cout << p1<<endl;
//
//}
//
//
