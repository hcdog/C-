//// ���������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
////ʹ��operator=��ɶ������=������
//#include <iostream>
//using namespace std;
//
//class MyInteger
//{
//public:
//	MyInteger(int age);
//	~MyInteger();
//	//friend ostream& operator<<(ostream &cout, MyInteger p);
//	int *ages;
//	MyInteger& operator=(MyInteger &p) {//�����ǳ�Ա���������ز����ǿգ�Ӧ�����Լ�
//		//ages = p.ages;//�����Ĭ�Ϻ�����Ĳ���
//		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ�,��д��ʵҲ���ᱨ�����渲�ǵ��ˣ����Ƕ������ڴ�û���ͷ�
//		if (ages != NULL) {
//			delete ages;
//			ages = NULL;
//			/*cout<<"��Ϊ��";*/
//		}
//		ages = new int(*p.ages);
//		return *this;
//	}
//private:
//	
//};
//
//MyInteger::MyInteger(int age)
//{
//	ages = new int(age);//�����age��ʾͬʱ��ֵ
//}
//
//MyInteger::~MyInteger()
//{
//	
//	if (ages != NULL) {
//		delete ages;
//		ages = NULL;
//	}
//	 //���������ͷ����ڴ棬���������ʹ��������ǳ����
//	
//}
//
//void test() {
//	MyInteger a(18);
//	cout << *a.ages << endl;
//	MyInteger b(10);
//	b = a;//��ֵ��ǳ����
//	cout << *b.ages << endl;//�ڶ�������������
//	MyInteger c(40);
//	c = b = a;
//	cout << *c.ages << endl;
//}
//void main() {
//	test();
//}