//#include<iostream>
//#include<string>
//using namespace std;
//
//class AbstractDrink
//{
//public:
//	AbstractDrink();
//	~AbstractDrink();
//	//煮水
//	virtual void water() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒水
//	virtual void pour() = 0;
//	//加料
//	virtual void add() = 0;
//	//制作
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
//	//重写
//	virtual void water() {
//		cout << "加水" << endl;
//
//	}
//	virtual void Brew() {
//		cout << "煮开" << endl;
//
//	}
//	virtual void pour() {
//		cout << "倒入" << endl;
//
//	}
//	virtual void add() {
//		cout << "加咖啡" << endl;
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
//	//重写
//	virtual void water() {
//		cout << "加水" << endl;
//
//	}
//	virtual void Brew() {
//		cout << "煮开" << endl;
//
//	}
//	virtual void pour() {
//		cout << "倒入" << endl;
//
//	}
//	virtual void add() {
//		cout << "加茶叶" << endl;
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