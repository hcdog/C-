// 文件操作.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//头文件fstream,文件流
//std::ios::in：以读取模式打开文件（std::ifstream 默认模式）。
//std::ios::out：以写入模式打开文件（std::ofstream 默认模式）。
//std::ios::app：以追加模式打开文件（数据写入到文件末尾）。
//std::ios::ate：打开文件后，文件指针立即定位到文件末尾（仅用于输入 / 输出文件流）。
//std::ios::trunc：如果文件已存在，则在打开文件时清空文件内容（仅用于输出文件流）。
//std::ios::binary：以二进制模式打开文件（默认是文本模式）。

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
//两种文件，文本文件（ASCII码存）和二进制文件
//ostream ,输出，写
//istream，输入，读
//fstream读写
class Person
{
public:
	char a[100];
	int age;
private:

};
void main()
{
	////1.创建流对象
	//std::ofstream ofs;
	////2.打开文件
	//ofs.open("person.txt", ios::out|ios::binary);
	////3.写数据到流
	//Person p = { "张1",15 };
	//ofs.write((const char *)&p, sizeof(p));//把数据的地址传入，因为要求参数是指针
	////3.关闭
	//ofs.close();

	//打开文件
	ifstream ifs;
	ifs.open("person.txt", ios::in|ios::binary);
	if (!ifs.is_open()) {
		cout << "false";
		return;
	}
	////读文件
	Person p;
	ifs.read((char *)&p, sizeof(p));
	cout <<p.a<<p.age << endl;
	ifs.close();

}
