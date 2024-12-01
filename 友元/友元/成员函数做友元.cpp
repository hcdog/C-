//
#include <iostream>
#include <string>
using namespace std;
class GoodGay;
class Building;

class GoodGay
{
public:
	Building* building;
	GoodGay();
	void visit();
	//void visit(){

	//	cout << "你的好基友正在访问" << building->m_sittingRoom << endl;
	//	cout << "你的好基友正在访问" << building->m_BedRoom << endl;

	//}
	//不能这样写，他访问不到m_BedRoom，因为你friend的是GoodGay::visit()而不是GoodGay.visit()没这种语法
	void visit2();
};



class Building {
	//friend void visit()//全局函数写法			
	friend void GoodGay::visit();//加这行就可以调用私有了
public:
	Building() {
		m_sittingRoom = "客厅";
		m_BedRoom = "卧室";//这个私有对象其他类无法直接访问

	}
	string m_sittingRoom;
private:
	string m_BedRoom;
};
GoodGay::GoodGay()
{
	building = new Building;


}
void GoodGay::visit()
{

	cout << "你的好基友正在访问" << building->m_sittingRoom<< endl;
	cout << "你的好基友正在访问" << building->m_BedRoom << endl;

}
void GoodGay::visit2()
{

	//cout << "你的好基友正在访问" << building->sittingroom << endl;
	////cout << "你的好基友正在访问" << building->bedroom << endl;

}


int main()
{
	GoodGay G1;
	G1.visit();
}
