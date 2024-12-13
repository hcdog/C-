// vector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
public:
	Person(string m_name, int m_age);
	~Person();
	int age;
	string name;


private:

};

Person::Person(string m_name, int m_age)
{
	age = m_age;
	name = m_name;
}

Person::~Person()
{
}
int main(int arg, int *arv[])
{
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	v1.push_back(1);
	v1.push_back(1);
	v2.push_back(2);
	v3.push_back(3);
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << (*vit);
		}
	}
}

