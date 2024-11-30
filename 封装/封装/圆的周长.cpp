#include <iostream>
#include <cmath>
const double PI = 3.14;
class Circle
{
public:
	int r;
	double lang(){
		return 2 * PI*r;
	}
private:

};
//void main() {
//	Circle c1;
//	c1.r = 10;
//	std::cout << c1.lang();
//}