#include "header.h"

int main(){
	vector <member> people;
	member per;
	int findn;
	int chose = 0;
	char yorn;
	string name;
	ShowMenu();
	cout << "请输入数字1-7：";
	cin >> chose;
	while (1)
	{
		if (chose < 1 || chose > 7)
		{
			cout << "输入错误！" << endl;
			cout << "请输入数字1-7：";
			cin >> chose;
		}
		switch (chose)
		{
		case 1:
			cout << "请输入联系人的信息（姓名、性别、年龄、电话、地址）" << endl;
			per = AddMem();
			per.num = people.size();
			people.emplace_back(per);
			cout << "添加成功！" << endl;
			break;
		case 2:
			ShowAll(&people);
			break;
		case 3:
			cout << "请输入要删除联系人的姓名：";
			cin >> name;
			findn = FindMem(&people, name);
			if (findn == -1)
				cout << "查无此人！" << endl;
			else
				people.erase(people.begin() + findn);
			break;
		case 4:
			cout << "请输入要查找联系人的姓名：";
			cin >> name;
			findn = FindMem(&people, name);
			if (findn == -1)
				cout << "查无此人！" << endl;
			else
				cout << people.at(findn).name << people.at(findn).gender << people.at(findn).age << people.at(findn).phone << people.at(findn).address << endl;
			break;
		case 5:
			cout << "请输入要修改联系人的姓名：";
			cin >> name;
			findn = FindMem(&people, name);
			if (findn == -1)
				cout << "查无此人！" << endl;
			else
			{
				per = AddMem();
				per.num = findn;
				people.at(findn) = per;
				cout << "修改成功！" << endl;
			}
			break;
		case 6:
			cout << "确定清空所有联系人(y/n)：";
			cin >> yorn;
			if (yorn == 'y' || yorn == 'Y')
				people.clear();
			
			break;
		case 7:
			cout << "是否退出(y/n)：";
			cin >> yorn;
			if (yorn == 'y' || yorn == 'Y')
				goto End;
			
			break;
		default:
			break;
		}
		yorn = 0;
		chose = 0;
		findn = -1;

		ShowMenu();
		cout << "请输入数字1-7：";
		cin >> chose;
		
	}

	End:
	return 0;
}

