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

	//	cout << "��ĺû������ڷ���" << building->m_sittingRoom << endl;
	//	cout << "��ĺû������ڷ���" << building->m_BedRoom << endl;

	//}
	//��������д�������ʲ���m_BedRoom����Ϊ��friend����GoodGay::visit()������GoodGay.visit()û�����﷨
	void visit2();
};



class Building {
	//friend void visit()//ȫ�ֺ���д��			
	friend void GoodGay::visit();//�����оͿ��Ե���˽����
public:
	Building() {
		m_sittingRoom = "����";
		m_BedRoom = "����";//���˽�ж����������޷�ֱ�ӷ���

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

	cout << "��ĺû������ڷ���" << building->m_sittingRoom<< endl;
	cout << "��ĺû������ڷ���" << building->m_BedRoom << endl;

}
void GoodGay::visit2()
{

	//cout << "��ĺû������ڷ���" << building->sittingroom << endl;
	////cout << "��ĺû������ڷ���" << building->bedroom << endl;

}


int main()
{
	GoodGay G1;
	G1.visit();
}
