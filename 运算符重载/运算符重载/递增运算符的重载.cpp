//// 运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////使用operator++完成对运算符++的重载使其能够满足更多的，可以写一个整型变量
//#include <iostream>
//using namespace std;
//
//class MyInteger
//{
//public:
//	MyInteger();
//	~MyInteger();
//	friend ostream& operator<<(ostream &cout, MyInteger p);
//	//重载前置++
//	MyInteger& operator++() {
//		//先++
//		++nums;
//		//再返回自身
//		return *this;
//	}
//
//	////重载后置++
//	MyInteger operator++(int) {//int表示占位参数，用于区分前置后置递增，后置不能返回应用，因为返回的是局部对象会被销毁
//		MyInteger temp = *this;//记录当前的类
//		nums++;
//		//再返回自身
//		return temp;
//	}
//
//private:
//	int nums;
//};
//
//MyInteger::MyInteger()
//{
//	nums = 0;
//}
//
//MyInteger::~MyInteger()
//{
//}
//ostream& operator<<(ostream &cout, MyInteger p){//只能利用全局函数重载<<,参数写成&p不行，应为后置++必须要返回值而不是引用
//	cout << p.nums;
//	return cout;//因为本身是引用，返回也要是引用
//}
//void test() {
//	MyInteger testint;
//	cout << testint<<endl;//直接使用报错
//	cout << testint++ << endl;
//	cout << ++testint << endl;
//	cout << testint++ << endl;
//	cout << testint << endl;
//}
//void main() {
//	test();
//}