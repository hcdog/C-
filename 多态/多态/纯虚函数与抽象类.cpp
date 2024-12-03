////组织结构清晰
////可读性强/
////扩展和维护性高
//#include <iostream>
//#include<string>
//using namespace std;
//class Calc
//{
//public:
//	Calc();
//	~Calc();
//	virtual int GetResult() = 0;
//	//virtual int GetResult(int a) {
//	//	return 0;//父类函数其实没什么用，可以改为纯虚函数，有纯虚函数就叫抽象类，无法实例化		
//	//}
//	//如果要修改就要动源码，不好，满足开闭原则
//	int nums1;
//	int nums2;
//private:
//
//};
//
//Calc::Calc()
//{
//}
//
//Calc::~Calc()
//{
//}
//class AbstractCalc :public Calc
//{
//public:
//	AbstractCalc();
//	~AbstractCalc();
//	//子类一定要重写纯虚函数，不然无法实例化
//	int GetResult() {
//		return nums1 + nums2;
//	}
//	//通过一直写新的类可以直接实现新的功能
//private:
//
//};
//
//AbstractCalc::AbstractCalc()
//{
//}
//
//AbstractCalc::~AbstractCalc()
//{
//}
//
//int main()
//{
//	//Calc a;
//	//new Calc;//纯虚函数无法实例化
//	AbstractCalc *abc = new AbstractCalc;
//	abc->nums1 = 10;
//	abc->nums2 = 10;
//	cout << abc->GetResult();
//	if (abc != NULL) {
//		delete abc;
//		abc = NULL;
//	}
//
//
//}
//
