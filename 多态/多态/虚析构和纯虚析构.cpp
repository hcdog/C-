////多态在使用时如果子类有在堆区开辟内存，那么父类制作在析构时无法调用到子类的析构函数，导致内存泄漏
//// 多态.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////静态多态，运算符重载
////动态多态//c++中常说的多态，只有在运行阶段才确定函数地址
//
//#include <iostream>
//#include<string>
//using namespace std;
//class animal
//{
//public:
//	animal();
//	//virtual ~animal();//虚析构解决内存释放不干净
//	virtual ~animal() =0;//纯虚
//	virtual void speak() {//加个virtual就不会输出动物了，地址晚绑定，该函数现在有多种形态，依据输入决定使用哪种形态
//		cout << "动物";
//	}//这里会创建一个指针指向animal::speak的地址
//private:
//
//};
//
//animal::animal()
//{
//	cout << "父构";
//}
//
//animal::~animal()
//{
//	cout << "父析构";
//}
//
//class cat:public animal
//{
//public:
//	cat(string na = "tom");
//	~cat();
//	//子类重写
//	void speak() {
//		cout <<*name<< "猫";
//	}//继承后也有一个指针指向animal::speak的地址，函数重写覆盖掉内容，但是指针还是指向这
//	string *name;
//private:
//
//};
//
//cat::cat(string na)//声明给了默认参数，定义就不要写了
//{
//	name = new string(na);
//	cout << "子构";
//}
//
//cat::~cat()
//{
//	
//	if (name != NULL) {
//		cout << "子析构";
//		delete name;
//		name = NULL;
//
//	}
//}
////调用时用父类的指针指向子类的对象
//void dospeak(animal &animal) {
//	animal.speak();
//	
//}
//int main()
//{
//	animal *cat1 =new cat;//父类对象调用时
//	dospeak(*cat1);
//	delete cat1;//不会析构子对象，解决方法，改为虚析构
//	system("pause");
//}
//
//
