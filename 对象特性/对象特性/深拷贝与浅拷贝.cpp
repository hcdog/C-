//简单的赋值操作都叫浅拷贝，而在堆区给它申请空间，进行拷贝就叫深拷贝
#include <iostream>
class func
{
public:
	func(int age, int height);
	~func();
	func(const func &f);
	int get_age() {
		return m_age;

	}
	int get_height() {
		return *m_height;

	}

private:
	int m_age;
	int *m_height;
};

func::func(int age, int height)
{	
	m_age = age;
	m_height = new int(height);//使用new开辟堆区域，返回指针指向地址
	//如果开辟了一段区域，一定要在调用结束前释放，也就是析构函数中释放
	//否则会导致内存泄漏
	std::cout << "这是一个构造函数" << std::endl;
}

func::~func()
{	
	if (m_height != NULL) {
		delete m_height;
		m_height = NULL;
	}
	//实际上这里会报错，因为我的拷贝构造函数也指向了同一块内存，但是释放只能释放一次
	//但是我没报错，这是因为我已经写了一个拷贝构造函数，我的拷贝构造函数是深拷贝
	std::cout << "这是一个析构函数" << std::endl;
}

func::func(const func &f)//没有它释放内存就会报错，我应该多写一块内存开辟
{
	std::cout << "这是一个拷贝,他也同名，但是要传入引用" << std::endl;
	////这两行编译器写的
	//m_age = f.m_age;
	//m_height = f.m_height;
	////这两行是我写的，引用是常量指针，所有解指针
	m_age = f.m_age;
	m_height = new int(*f.m_height);
}
//int main()
//{
//	//调用构造函数与拷贝函数
//	func func1(18, 172);
//	std::cout << func1.get_age() << std::endl;
//	std::cout << func1.get_height() << std::endl;
//	func func2(func1);//哪怕没设置拷贝构造函数，编译器也会帮你做一个浅拷贝
//	std::cout << func2.get_age() << std::endl;
//	
//
//}