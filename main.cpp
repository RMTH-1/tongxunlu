#include "header.h"

int main(){
	vector <member> people;
	member per;
	int findn;
	int chose = 0;
	char yorn;
	string name;
	ShowMenu();
	cout << "����������1-7��";
	cin >> chose;
	while (1)
	{
		if (chose < 1 || chose > 7)
		{
			cout << "�������" << endl;
			cout << "����������1-7��";
			cin >> chose;
		}
		switch (chose)
		{
		case 1:
			cout << "��������ϵ�˵���Ϣ���������Ա����䡢�绰����ַ��" << endl;
			per = AddMem();
			per.num = people.size();
			people.emplace_back(per);
			cout << "��ӳɹ���" << endl;
			break;
		case 2:
			ShowAll(&people);
			break;
		case 3:
			cout << "������Ҫɾ����ϵ�˵�������";
			cin >> name;
			findn = FindMem(&people, name);
			if (findn == -1)
				cout << "���޴��ˣ�" << endl;
			else
				people.erase(people.begin() + findn);
			break;
		case 4:
			cout << "������Ҫ������ϵ�˵�������";
			cin >> name;
			findn = FindMem(&people, name);
			if (findn == -1)
				cout << "���޴��ˣ�" << endl;
			else
				cout << people.at(findn).name << people.at(findn).gender << people.at(findn).age << people.at(findn).phone << people.at(findn).address << endl;
			break;
		case 5:
			cout << "������Ҫ�޸���ϵ�˵�������";
			cin >> name;
			findn = FindMem(&people, name);
			if (findn == -1)
				cout << "���޴��ˣ�" << endl;
			else
			{
				per = AddMem();
				per.num = findn;
				people.at(findn) = per;
				cout << "�޸ĳɹ���" << endl;
			}
			break;
		case 6:
			cout << "ȷ�����������ϵ��(y/n)��";
			cin >> yorn;
			if (yorn == 'y' || yorn == 'Y')
				people.clear();
			
			break;
		case 7:
			cout << "�Ƿ��˳�(y/n)��";
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
		cout << "����������1-7��";
		cin >> chose;
		
	}

	End:
	return 0;
}

