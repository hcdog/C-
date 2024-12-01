//// 对象特性.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////出厂设置，与清理，每一个对象都应该有初始化和清理的手段
////构造函数与析构函数
////~
////与类同名，不写返回参数
//
//#include <iostream>
//class func
//{
//public:
//	func(int age);
//	~func();
//	func(const func &f);
//	int get_age() {
//		return m_age;
//
//	}
//
//private:
//	int m_age;
//};
//
//func::func(int age)
//{	
//	m_age = age;
//	std::cout << "这是一个构造函数" << std::endl;
//}
//
//func::~func()
//{
//	std::cout << "这是一个析构函数" << std::endl;
//}
//
//func::func(const func &f)
//{
//	std::cout << "这是一个拷贝,他也同名，但是要传入引用" << std::endl;
//	m_age = f.m_age;
//}
////使用值传递时会调用拷贝函数，因为值传递本身就创建了一个副本
//void zhi(func test) {
//
//}
////值方式返回局部对象
//func zhi2() {
//	func p1(1);
//	return p1;
//}
//void test3() {
//	func p1 = zhi2();
//}
//int main()
//{
//	////调用构造函数与拷贝函数
//	//func func1(10);
//	//func func2(func1);
//	//std::cout << func2.get_age() << std::endl;
//	////我调用这个函数，也会调用拷贝函数
//	//zhi(func1);
//	
//	
//	//同时调用了构造，拷贝各一次，并且先构造后拷贝，这是因为return返回的值并不是原对象，而是
//	//复制后的对象
//	test3();
//	
//	
//	system("pause");
//
//}
