//�򵥵ĸ�ֵ��������ǳ���������ڶ�����������ռ䣬���п����ͽ����
#include <iostream>
class func
{
public:
	func(int age, int height);
	~func();
	func(const func &f);
	int get_age() {
		return m_age;

	}
	int get_height() {
		return *m_height;

	}

private:
	int m_age;
	int *m_height;
};

func::func(int age, int height)
{	
	m_age = age;
	m_height = new int(height);//ʹ��new���ٶ����򣬷���ָ��ָ���ַ
	//���������һ������һ��Ҫ�ڵ��ý���ǰ�ͷţ�Ҳ���������������ͷ�
	//����ᵼ���ڴ�й©
	std::cout << "����һ�����캯��" << std::endl;
}

func::~func()
{	
	if (m_height != NULL) {
		delete m_height;
		m_height = NULL;
	}
	//ʵ��������ᱨ����Ϊ�ҵĿ������캯��Ҳָ����ͬһ���ڴ棬�����ͷ�ֻ���ͷ�һ��
	//������û����������Ϊ���Ѿ�д��һ���������캯�����ҵĿ������캯�������
	std::cout << "����һ����������" << std::endl;
}

func::func(const func &f)//û�����ͷ��ڴ�ͻᱨ����Ӧ�ö�дһ���ڴ濪��
{
	std::cout << "����һ������,��Ҳͬ��������Ҫ��������" << std::endl;
	////�����б�����д��
	//m_age = f.m_age;
	//m_height = f.m_height;
	////����������д�ģ������ǳ���ָ�룬���н�ָ��
	m_age = f.m_age;
	m_height = new int(*f.m_height);
}
//int main()
//{
//	//���ù��캯���뿽������
//	func func1(18, 172);
//	std::cout << func1.get_age() << std::endl;
//	std::cout << func1.get_height() << std::endl;
//	func func2(func1);//����û���ÿ������캯����������Ҳ�������һ��ǳ����
//	std::cout << func2.get_age() << std::endl;
//	
//
//}