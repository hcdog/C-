////��̬��ʹ��ʱ����������ڶ��������ڴ棬��ô��������������ʱ�޷����õ���������������������ڴ�й©
//// ��̬.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
////��̬��̬�����������
////��̬��̬//c++�г�˵�Ķ�̬��ֻ�������н׶β�ȷ��������ַ
//
//#include <iostream>
//#include<string>
//using namespace std;
//class animal
//{
//public:
//	animal();
//	//virtual ~animal();//����������ڴ��ͷŲ��ɾ�
//	virtual ~animal() =0;//����
//	virtual void speak() {//�Ӹ�virtual�Ͳ�����������ˣ���ַ��󶨣��ú��������ж�����̬�������������ʹ��������̬
//		cout << "����";
//	}//����ᴴ��һ��ָ��ָ��animal::speak�ĵ�ַ
//private:
//
//};
//
//animal::animal()
//{
//	cout << "����";
//}
//
//animal::~animal()
//{
//	cout << "������";
//}
//
//class cat:public animal
//{
//public:
//	cat(string na = "tom");
//	~cat();
//	//������д
//	void speak() {
//		cout <<*name<< "è";
//	}//�̳к�Ҳ��һ��ָ��ָ��animal::speak�ĵ�ַ��������д���ǵ����ݣ�����ָ�뻹��ָ����
//	string *name;
//private:
//
//};
//
//cat::cat(string na)//��������Ĭ�ϲ���������Ͳ�Ҫд��
//{
//	name = new string(na);
//	cout << "�ӹ�";
//}
//
//cat::~cat()
//{
//	
//	if (name != NULL) {
//		cout << "������";
//		delete name;
//		name = NULL;
//
//	}
//}
////����ʱ�ø����ָ��ָ������Ķ���
//void dospeak(animal &animal) {
//	animal.speak();
//	
//}
//int main()
//{
//	animal *cat1 =new cat;//����������ʱ
//	dospeak(*cat1);
//	delete cat1;//���������Ӷ��󣬽����������Ϊ������
//	system("pause");
//}
//
//
