//һ���౻������̳��ˣ�����������ͬʱ��һ���༯����
#include <iostream>
using namespace std;
//����
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
//��
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
//�̳�ǰ��virtual,animal����Ϊ�����
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
	//�����������ݣ�����ֻҪһ�ݣ������Դ�˷�������̳н��������
	cout << sc.sheep::m_age << endl;
	cout << sc.camel::m_age << endl;
}