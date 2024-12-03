//// 文件操作.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////头文件fstream,文件流
////std::ios::in：以读取模式打开文件（std::ifstream 默认模式）。
////std::ios::out：以写入模式打开文件（std::ofstream 默认模式）。
////std::ios::app：以追加模式打开文件（数据写入到文件末尾）。
////std::ios::ate：打开文件后，文件指针立即定位到文件末尾（仅用于输入 / 输出文件流）。
////std::ios::trunc：如果文件已存在，则在打开文件时清空文件内容（仅用于输出文件流）。
////std::ios::binary：以二进制模式打开文件（默认是文本模式）。
//
//#include <iostream>
//#include<fstream>
//#include<string>
//using namespace std;
////两种文件，文本文件（ASCII码存）和二进制文件
////ostream ,输出，写
////istream，输入，读
////fstream读写
//void main()
//{
//	////1.创建流对象
//	//std::ofstream ofs;
//	////2.打开文件
//	//ofs.open("test.txt", ios::out);
//	////3.写数据到流
//	//ofs << "姓名：张三" << endl << "性别：男";
//	////3.关闭
//	//ofs.close();
//
//	//打开文件
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "false";
//		return;
//	}
//	////第一种读文件
//	//char bfs[1313] = { 0 };
//	//while (ifs >> bfs) {
//	//	cout << bfs << endl;
//	//}
//	//第二种
//	//char bfs[1313] = { 0 };
//	//while (ifs.getline(bfs, sizeof(bfs))) {
//	//	cout << bfs << endl;
//	//}
//	//第三种
//	//string bfs;
//	//while (getline(ifs, bfs)) {
//	//	cout << bfs << endl;
//	//}
//	//第四种
//	char c;
//	while ((c = ifs.get()) !=EOF)
//	{
//		//cout << ifs.get();//输出ASCII码
//		cout << c;
//		
//	}
//	ifs.close();
//	
//}
