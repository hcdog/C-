//一个类被两个类继承了，这两个类又同时被一个类集成了
#include <iostream>
using namespace std;
//动物
class animal
{
public:
	animal();
	~animal();
	int m_age;
private:

};

animal::animal()
{
}

animal::~animal()
{
}
//羊
class sheep:virtual public animal
{
public:
	sheep();
	~sheep();

private:

};

sheep::sheep()
{
}

sheep::~sheep()
{
}
//继承前加virtual,animal被称为虚基类
class camel:virtual public animal
{
public:
	camel();
	~camel();

private:

};

camel::camel()
{
}

camel::~camel()
{
}
class SheepCamel:public sheep,public camel
{
public:
	SheepCamel();
	~SheepCamel();

private:

};

SheepCamel::SheepCamel()
{
}

SheepCamel::~SheepCamel()
{
}
void main() {
	SheepCamel sc;
	sc.sheep::m_age = 18;
	sc.camel::m_age = 28;
	//出现两份数据，但我只要一份，造成资源浪费利用虚继承解决该问题
	cout << sc.sheep::m_age << endl;
	cout << sc.camel::m_age << endl;
}