#include <iostream>
using namespace std;
//��Ա�����ͳ�Ա�����Ƿֿ��洢��
//thisָ�룬ָ�򱻵��õĳ�Ա�����Ķ���
//1.������Ƴ�ͻ���������Ĳ������ƺ������һ�����겻�ɸ�ֵ�����еı�������������
class Person
{
public:
	Person(int age);
	~Person();
	int age;
	int m_a;//intһ�����ͱ��4
	static int m_b;
	void te() {
		//д����������4����Ϊ�Ƿֿ��洢��
	}
	Person& PersonAddAge(Person &p) {
		this->age = this->age + p.age;
		return *this;
	}
	Person PersonAdd(Person &p) {
		this->age = this->age + p.age;
		return *this;
	}
private:

};
//��һ����̬����4.��Ϊ��̬��������
int Person::m_b;
Person::Person(int age)
{
	//age = age;//�겻�ɸ�ֵ
	this->age = age;//��ɸ�ֵ
}

Person::~Person()
{
}
void test1(){
	//Person p;
	//cout << sizeof(p)<<endl;//ռһ���ֽڣ�����ռλ
}
void test2() {
	Person p(18);
	cout << p.age << endl;
	Person p2(18);
	//��ʽ���˼�룬ʹ��this����׷��
	//p.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);//����thisָ��Ľ⣬thisָ��ǰ���󣬽���ǵ�ǰ����
	////ʹ��ֵ���أ����Ϊ36����Ϊÿ�ζ�������ԭ��thisָ��Ŀ�������this��ָ����Ǳ���
	//cout << p.age << endl;
	Person P3 = p.PersonAdd(p2).PersonAdd(p2).PersonAdd(p2);//
	cout << P3.age << endl;
}
void main() {
	test2();
}