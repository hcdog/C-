//// ���������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
////ʹ��operator++��ɶ������++������ʹ���ܹ��������ģ�����дһ�����ͱ���
//#include <iostream>
//using namespace std;
//
//class MyInteger
//{
//public:
//	MyInteger();
//	~MyInteger();
//	friend ostream& operator<<(ostream &cout, MyInteger p);
//	//����ǰ��++
//	MyInteger& operator++() {
//		//��++
//		++nums;
//		//�ٷ�������
//		return *this;
//	}
//
//	////���غ���++
//	MyInteger operator++(int) {//int��ʾռλ��������������ǰ�ú��õ��������ò��ܷ���Ӧ�ã���Ϊ���ص��Ǿֲ�����ᱻ����
//		MyInteger temp = *this;//��¼��ǰ����
//		nums++;
//		//�ٷ�������
//		return temp;
//	}
//
//private:
//	int nums;
//};
//
//MyInteger::MyInteger()
//{
//	nums = 0;
//}
//
//MyInteger::~MyInteger()
//{
//}
//ostream& operator<<(ostream &cout, MyInteger p){//ֻ������ȫ�ֺ�������<<,����д��&p���У�ӦΪ����++����Ҫ����ֵ����������
//	cout << p.nums;
//	return cout;//��Ϊ���������ã�����ҲҪ������
//}
//void test() {
//	MyInteger testint;
//	cout << testint<<endl;//ֱ��ʹ�ñ���
//	cout << testint++ << endl;
//	cout << ++testint << endl;
//	cout << testint++ << endl;
//	cout << testint << endl;
//}
//void main() {
//	test();
//}