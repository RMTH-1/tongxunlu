#include "header.h"

int main(){
	vector <member> people;
	member per;
	int findn;
	string name;

	per = AddMem();
	per.num = people.size();
	people.emplace_back(per);

	per.name = "zhao";
	per.num = people.size();
	people.emplace_back(per);

	ShowAll(&people);

	cout << "find:";
	cin >> name;
	findn = FindMem(&people, name);
	if (findn == -1)
		cout << "查无此人！" << endl;
	else
		people.erase(people.begin() + findn);
	

	ShowAll(&people);
	return 0;
}

