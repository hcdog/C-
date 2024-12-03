//// 多态.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////静态多态，运算符重载
////动态多态//c++中常说的多态，只有在运行阶段才确定函数地址
//
//#include <iostream>
//using namespace std;
//class animal
//{
//public:
//	animal();
//	~animal();
//	virtual void speak() {//加个virtual就不会输出动物了，地址晚绑定，该函数现在有多种形态，依据输入决定使用哪种形态
//		cout << "动物";
//	}//这里会创建一个指针指向animal::speak的地址
//private:
//
//};
//
//animal::animal()
//{
//}
//
//animal::~animal()
//{
//}
//
//class cat:public animal
//{
//public:
//	cat();
//	~cat();
//	//子类重写
//	void speak() {
//		cout << "猫";
//	}//继承后也有一个指针指向animal::speak的地址，函数重写覆盖掉内容，但是指针还是指向这
//private:
//
//};
//
//cat::cat()
//{
//}
//
//cat::~cat()
//{
//}
////调用时用父类的指针指向子类的对象
//void dospeak(animal &animal) {
//	animal.speak();
//	
//}
//int main()
//{
//	cat cat1;
//	dospeak(cat1);//输出是动物//地址早绑定，因为传递的是animal类，
//}
//
//
