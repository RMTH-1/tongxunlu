#include "header.h"

//打印菜单
void ShowMenu()
{
	cout << "1、添加联系人" << endl;
	cout << "2、显示联系人" << endl;
	cout << "3、删除联系人" << endl;
	cout << "4、查找联系人" << endl;
	cout << "5、修改联系人" << endl;
	cout << "6、清空联系人" << endl;
	cout << "7、退出" << endl;
}

//添加联系人
member AddMem()
{
	member per;
	cout << "name:";
	cin >> per.name;
	cout << "gender:";
	cin >> per.gender;
	cout << "age:";
	cin >> per.age;
	cout << "phone:";
	cin >> per.phone;
	cout << "address:";
	cin >> per.address;
	return per;
}

//查找联系人
int FindMem(vector <member> *people, string name)
{
	int num = -1;
	for (auto it = people->begin(); it != people->end(); it++)
	{
		if (name == it->name)
		{
			num = it->num;
		}
	}
	return num;
}

//显示所有成员
void ShowAll(vector <member> *people)
{
	for (auto it = people->begin(); it != people->end(); it++)
	{
		cout << "num:" << it->num << endl;
		cout << it->name << it->gender << it->age << it->phone << it->address << endl;
	}
}