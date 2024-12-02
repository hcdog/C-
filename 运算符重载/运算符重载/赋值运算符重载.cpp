//// 运算符重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////使用operator=完成对运算符=的重载
//#include <iostream>
//using namespace std;
//
//class MyInteger
//{
//public:
//	MyInteger(int age);
//	~MyInteger();
//	//friend ostream& operator<<(ostream &cout, MyInteger p);
//	int *ages;
//	MyInteger& operator=(MyInteger &p) {//必须是成员函数，返回不能是空，应该是自己
//		//ages = p.ages;//这就是默认函数里的操作
//		//应该先判断是否有属性在堆区，如果有先释放干净,不写其实也不会报错，后面覆盖掉了，但是堆区的内存没有释放
//		if (ages != NULL) {
//			delete ages;
//			ages = NULL;
//			/*cout<<"不为空";*/
//		}
//		ages = new int(*p.ages);
//		return *this;
//	}
//private:
//	
//};
//
//MyInteger::MyInteger(int age)
//{
//	ages = new int(age);//后面的age表示同时赋值
//}
//
//MyInteger::~MyInteger()
//{
//	
//	if (ages != NULL) {
//		delete ages;
//		ages = NULL;
//	}
//	 //连续两次释放了内存，解决方案，使用深拷贝解决浅拷贝
//	
//}
//
//void test() {
//	MyInteger a(18);
//	cout << *a.ages << endl;
//	MyInteger b(10);
//	b = a;//赋值，浅拷贝
//	cout << *b.ages << endl;//第二次析构出问题
//	MyInteger c(40);
//	c = b = a;
//	cout << *c.ages << endl;
//}
//void main() {
//	test();
//}