#include <iostream>
#include <string>
class Cube
{
public:
	void set(int a,int b,int c) {//��Ա����
		lang = a;
		width = b;
		high = c;
	}
	int cs() {
		return 2 * lang*width+ 2 * lang*high+ 2 * high*width;
	}
	int cv() {
		return lang*width*high;
	}
	bool simbyclass(Cube &c2) {
		if (cs() == c2.cs() && cv() == c2.cv()) {
			std::cout << "������һ����" << std::endl;
			return true;
		}
		else {
			std::cout << "��������һ����" << std::endl;
			return false;
		}

	}
private:
	int lang;
	int width;
	int high;
};

bool sim(Cube *c1, Cube &c2) {
	if (c1->cs() == c2.cs() && c1->cv() == c2.cv()) {
		std::cout << "������һ����" << std::endl;
		return true;
	}
	else {
		std::cout << "��������һ����" << std::endl;
		return false;
	}
	
}

//void main() {
//	Cube c1;
//	c1.set(10, 10, 10);
//	std::cout << c1.cs() << "\t";
//	std::cout << c1.cv() << "\t";
//	Cube c2;
//	c2.set(10, 10, 10);
//	//ʹ��ȫ�ֺ���
//	sim(&c1, c2);
//	//ʹ�ó�Ա����
//	c1.simbyclass(c2);
//}