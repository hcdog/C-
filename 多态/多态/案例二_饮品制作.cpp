//#include<iostream>
//#include<string>
//using namespace std;
//
//class AbstractDrink
//{
//public:
//	AbstractDrink();
//	~AbstractDrink();
//	//��ˮ
//	virtual void water() = 0;
//	//����
//	virtual void Brew() = 0;
//	//��ˮ
//	virtual void pour() = 0;
//	//����
//	virtual void add() = 0;
//	//����
//	void Make() {
//		water();
//		Brew();
//		pour();
//		add();
//	}
//
//private:
//
//};
//
//AbstractDrink::AbstractDrink()
//{
//}
//
//AbstractDrink::~AbstractDrink()
//{
//}
//class coffee:public AbstractDrink
//{
//public:
//	coffee();
//	~coffee();
//	//��д
//	virtual void water() {
//		cout << "��ˮ" << endl;
//
//	}
//	virtual void Brew() {
//		cout << "��" << endl;
//
//	}
//	virtual void pour() {
//		cout << "����" << endl;
//
//	}
//	virtual void add() {
//		cout << "�ӿ���" << endl;
//
//	}
//
//private:
//
//};
//
//coffee::coffee()
//{
//}
//
//coffee::~coffee()
//{
//}
//class tea:public AbstractDrink
//{
//public:
//	tea();
//	~tea();
//	//��д
//	virtual void water() {
//		cout << "��ˮ" << endl;
//
//	}
//	virtual void Brew() {
//		cout << "��" << endl;
//
//	}
//	virtual void pour() {
//		cout << "����" << endl;
//
//	}
//	virtual void add() {
//		cout << "�Ӳ�Ҷ" << endl;
//
//	}
//private:
//
//};
//
//tea::tea()
//{
//}
//
//tea::~tea()
//{
//}
//void main() {
//	coffee *co = new coffee;
//	co->Make();
//	delete co;
//	tea *tea1 = new tea;
//	tea1->Make();
//	delete tea1;
//}