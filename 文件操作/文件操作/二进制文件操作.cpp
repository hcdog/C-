// �ļ�����.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//ͷ�ļ�fstream,�ļ���
//std::ios::in���Զ�ȡģʽ���ļ���std::ifstream Ĭ��ģʽ����
//std::ios::out����д��ģʽ���ļ���std::ofstream Ĭ��ģʽ����
//std::ios::app����׷��ģʽ���ļ�������д�뵽�ļ�ĩβ����
//std::ios::ate�����ļ����ļ�ָ��������λ���ļ�ĩβ������������ / ����ļ�������
//std::ios::trunc������ļ��Ѵ��ڣ����ڴ��ļ�ʱ����ļ����ݣ�����������ļ�������
//std::ios::binary���Զ�����ģʽ���ļ���Ĭ�����ı�ģʽ����

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
//�����ļ����ı��ļ���ASCII��棩�Ͷ������ļ�
//ostream ,�����д
//istream�����룬��
//fstream��д
class Person
{
public:
	char a[100];
	int age;
private:

};
void main()
{
	////1.����������
	//std::ofstream ofs;
	////2.���ļ�
	//ofs.open("person.txt", ios::out|ios::binary);
	////3.д���ݵ���
	//Person p = { "��1",15 };
	//ofs.write((const char *)&p, sizeof(p));//�����ݵĵ�ַ���룬��ΪҪ�������ָ��
	////3.�ر�
	//ofs.close();

	//���ļ�
	ifstream ifs;
	ifs.open("person.txt", ios::in|ios::binary);
	if (!ifs.is_open()) {
		cout << "false";
		return;
	}
	////���ļ�
	Person p;
	ifs.read((char *)&p, sizeof(p));
	cout <<p.a<<p.age << endl;
	ifs.close();

}
