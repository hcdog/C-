// 通讯录管理系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

#define max 1000
//数据模型
struct Person
{	//name
	std::string name;
	//age
	int age;
	//性别
	int sex;
	//电话
	std::string phone;
	//住址
	std::string addr;
};
struct AddressBooks
{
	struct Person peopleArray[max];
	//now nums
	int now_nums;

};

//函数
void AddPerson(AddressBooks * abs);
void showAbs(AddressBooks abs);
void showview();
int IsExist(AddressBooks * abs, std::string name);
void Delete(AddressBooks * abs);
void Find(AddressBooks * abs);
void Modify(AddressBooks * abs);
void Cls(AddressBooks * abs);



void showview() {
	std::cout << "1.添加联系人" << std::endl;
	std::cout << "2.显示联系人" << std::endl;
	std::cout << "3.删除联系人" << std::endl;
	std::cout << "4.查找联系人" << std::endl;
	std::cout << "5.修改联系人" << std::endl;
	std::cout << "6.清空联系人" << std::endl;
	std::cout << "0.退出通讯录" << std::endl;
}
void main()
{
	AddressBooks abs;
	abs.now_nums = 0;
	while (true)
	{
		showview();
		int nums;
		std::cin >> nums;
		if (nums == 0) {
			return;//退出
		}
		if (nums == 1) {
			//添加联系人
			AddPerson(&abs);
			continue;
		}
		if (nums == 2) {
			//显示联系人
			showAbs(abs);
			continue;
		}
		if (nums == 3) {
			//删除联系人
			Delete(&abs);			
			continue;
		}
		if (nums == 4) {
			//查找联系人
			Find(&abs);
			continue;
		}
		if (nums == 5) {
			//修改联系人
			Modify(&abs);
			continue;
		}
		if (nums == 6) {
			Cls(&abs);
			continue;
		}

		system("pause");

	}

}
void AddPerson(AddressBooks * abs) {
	if (abs->now_nums >= max) {
		std::cout << "通讯录已满" << std::endl;
	}
	//添加姓名
	std::string current_name;
	std::cout << "请输入姓名" << std::endl;
	std::cin >> current_name;
	abs->peopleArray[abs->now_nums].name = current_name;
	//添加年龄
	int current_age;
	std::cout << "请输入年龄" << std::endl;
	std::cin >> current_age;
	abs->peopleArray[abs->now_nums].age = current_age;
	//添加性别
	int current_sex;
	while (true)
	{
		std::cout << "请输入性别,1为男，2为女" << std::endl;
		std::cin >> current_sex;
		if (current_sex == 1 || current_sex == 2)
		{
			abs->peopleArray[abs->now_nums].sex = current_sex;
			break;
		}
		else {
			std::cout << "请重新输入" << std::endl;
		}
	}
	//添加电话
	std::string current_phone;
	std::cout << "请输入电话" << std::endl;
	std::cin >> current_phone;
	abs->peopleArray[abs->now_nums].phone = current_phone;
	//添加地址
	std::string current_add;
	std::cout << "请输地址" << std::endl;
	std::cin >> current_add;
	abs->peopleArray[abs->now_nums].addr = current_add;
	//增加人数
	abs->now_nums++;
	system("pause");
	system("cls");

}

void showAbs(AddressBooks abs) {
	if (abs.now_nums == 0) {
		std::cout << "当前通讯录为空" << std::endl;
	}
	for (int i = 0; i < abs.now_nums; i++) {
		std::cout << "姓名:";
		std::cout << abs.peopleArray[i].name << "\t";
		std::cout << "性别:";
		std::string a = abs.peopleArray[i].sex == 1 ? "男" : "女";
		std::cout << a << "\t";
		std::cout << "年龄:";
		std::cout << abs.peopleArray[i].age << "\t";
		std::cout << "电话:";
		std::cout << abs.peopleArray[i].phone << "\t";
		std::cout << "地址:";
		std::cout << abs.peopleArray[i].addr << std::endl;
	}
	system("pause");
	system("cls");
}

int IsExist(AddressBooks * abs, std::string name) {
	for (int i = 0; i < abs->now_nums; i++) {
		if (abs->peopleArray[i].name == name) {

			return i;
		}
		else
		{
			return -1;
		}
	}
}

void Delete(AddressBooks * abs) {
	std::string d_name;
	std::cout << "请输入要删除联系人的姓名" << std::endl;
	std::cin >> d_name;
	int index = IsExist(abs, d_name);
	if (index == -1){
		std::cout << "没查到这个人" << std::endl;

	}
	else {		
		for (int i = index; i < abs->now_nums; i++) {
			abs->peopleArray[i] = abs->peopleArray[i + 1];	
		}
		abs->now_nums--;
		std::cout << "已删除该人" << std::endl;
	}
	system("pause");
	system("cls");


}

void Find(AddressBooks * abs) {
	std::string d_name;
	std::cout << "请输入要查找联系人的姓名" << std::endl;
	std::cin >> d_name;
	int index = IsExist(abs, d_name);
	if (index == -1) {
		std::cout << "没查到这个人" << std::endl;

	}
	else {
		std::cout << "姓名:";
		std::cout << abs->peopleArray[index].name << "\t";
		std::cout << "性别:";
		std::string a = abs->peopleArray[index].sex == 1 ? "男" : "女";
		std::cout << a << "\t";
		std::cout << "年龄:";
		std::cout << abs->peopleArray[index].age << "\t";
		std::cout << "电话:";
		std::cout << abs->peopleArray[index].phone << "\t";
		std::cout << "地址:";
		std::cout << abs->peopleArray[index].addr << std::endl;
	}
	system("pause");
	system("cls");


}

void Modify(AddressBooks * abs) {
	std::string d_name;
	std::cout << "请输入要修改联系人的姓名" << std::endl;
	std::cin >> d_name;
	int index = IsExist(abs, d_name);
	if (index == -1) {
		std::cout << "没查到这个人" << std::endl;
	}
	else {
		//添加姓名
		std::string current_name;
		std::cout << "请输入姓名" << std::endl;
		std::cin >> current_name;
		abs->peopleArray[index].name = current_name;
		//添加年龄
		int current_age;
		std::cout << "请输入年龄" << std::endl;
		std::cin >> current_age;
		abs->peopleArray[index].age = current_age;
		//添加性别
		int current_sex;
		while (true)
		{
			std::cout << "请输入性别,1为男，2为女" << std::endl;
			std::cin >> current_sex;
			if (current_sex == 1 || current_sex == 2)
			{
				abs->peopleArray[index].sex = current_sex;
				break;
			}
			else {
				std::cout << "请重新输入" << std::endl;
			}
		}
		//添加电话
		std::string current_phone;
		std::cout << "请输入电话" << std::endl;
		std::cin >> current_phone;
		abs->peopleArray[index].phone = current_phone;
		//添加地址
		std::string current_add;
		std::cout << "请输地址" << std::endl;
		std::cin >> current_add;
		abs->peopleArray[index].addr = current_add;

	}
	system("pause");
	system("cls");

	
}

void Cls(AddressBooks * abs) {
	abs->now_nums = 0;
	std::cout << "已清空" << std::endl;
	system("pause");
	system("cls");
}
	
