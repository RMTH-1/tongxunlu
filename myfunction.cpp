#include "header.h"

//��ӡ�˵�
void ShowMenu()
{
	cout << "1�������ϵ��" << endl;
	cout << "2����ʾ��ϵ��" << endl;
	cout << "3��ɾ����ϵ��" << endl;
	cout << "4��������ϵ��" << endl;
	cout << "5���޸���ϵ��" << endl;
	cout << "6�������ϵ��" << endl;
	cout << "7���˳�" << endl;
}

//�����ϵ��
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

//������ϵ��
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

//��ʾ���г�Ա
void ShowAll(vector <member> *people)
{
	for (auto it = people->begin(); it != people->end(); it++)
	{
		cout << "num:" << it->num << endl;
		cout << it->name << it->gender << it->age << it->phone << it->address << endl;
	}
}