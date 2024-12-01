// 友元.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//友元就是让其他的东西比如，全局函数，其余类，其它类成员函数可以访问私有内容

//#include <iostream>
//
//#include <string>
//using namespace std;
//
//class Building {
//public:
//	friend class GoodGay;//加这行就可以调用私有了
//	Building() {
//		m_sittingRoom = "客厅";
//		m_BedRoom="卧室";//这个私有对象其他类无法直接访问
//
//	}
//	string m_sittingRoom;
//private:
//	string m_BedRoom;
//};
//class GoodGay {
//public:
//	void visit() {
//		cout<<building->m_sittingRoom;//他只能指向非私有
//		cout<<building->m_BedRoom;//不可访问，但是加一个friend就可以访问了
//	}
//		Building *building;
//	GoodGay() {
//		building = new Building;
//	}
//};
//
//int main()
//{
//	GoodGay G1;
//	G1.visit();
//}
