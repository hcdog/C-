#include <iostream>
#include <cmath>

class dot
{
public:
	void get(int x, int y) {
		m_x = x;
		m_y = y;
	}
	//����x
	int get_x() {
		return m_x;
	}
	//����y
	int get_y() {
		return m_y;
	}

private:
	int m_x;
	int m_y;
};
class Circle
{
public:

	void getr(int c_r) {
		r = c_r;
	}

	int get_r() {
		return r;
	}

	void getdot(dot &point) {
		center = point;
	}
	dot getcent() {
		return center;
	}

private:
	int r;
	dot center;
};

//�жϵ���Բ�Ĺ�ϵ
void judge(Circle &C1, dot &D1) {
	if (pow(D1.get_x()- C1.getcent().get_x(),2) + 
		pow(D1.get_y()- C1.getcent().get_y(), 2) == 
		(C1.get_r()*C1.get_r())) {
		std::cout << "����Բ��" << std::endl;
	}
	if (pow(D1.get_x() - C1.getcent().get_x(), 2) + 
		pow(D1.get_y() - C1.getcent().get_y(), 2) > 
		(C1.get_r()*C1.get_r())) {
		std::cout << "����Բ��" << std::endl;
	}
	if (pow(D1.get_x() - C1.getcent().get_x(), 2) + 
		pow(D1.get_y() - C1.getcent().get_y(), 2) < 
		(C1.get_r()*C1.get_r())) {
		std::cout << "����Բ��" << std::endl;
	}

}

void main() {
	Circle c1;
	dot d1;
	dot r_center;
	r_center.get(1, 1);
	d1.get(1, 0);
	c1.getr(2);

	c1.getdot(r_center);
	judge(c1, d1);
}