//#include <iostream>
//using namespace std;
//class header
//{
//public:
//	header();
//	~header();
//	int m_a=200;
//	void base() {
//		cout << "����"<<endl;
//	}
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
//class python : public header//�̳�class ���ࣨ�����ࣩ��public ���ࣨ���ࣩ
//{
//public:
//	python();
//	~python();
//	int m_a=100;
//	void base() {
//		cout << "����" << endl;
//	}
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
//	cout << p1.m_a << endl;//���Ӿ�������
//	cout << p1.header::m_a<<endl;//��һ����������ܷ��ʵ�����
//	//������
//	p1.base();
//	p1.header::base();
//}