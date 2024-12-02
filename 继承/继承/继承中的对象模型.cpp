//// 继承.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////使用开发人员命令行工具查看类的属性cl /d1 reportSingleClassLayout<python> 继承中的对象模型.cpp
////先有父亲后有儿，白发人送黑发人，继承后的创建和析构顺序
//#include <iostream>
//using namespace std;
//class header
//{
//public:
//	header();
//	~header();
//	int m_a;
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
//	int m_b;
//
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
//	cout << sizeof(p1);//大小为16，继承的属性也是属性,哪怕是没继承到的也是占内存,私有成员只是被隐藏访问不到
//
//}