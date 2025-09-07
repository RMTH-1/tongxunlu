#pragma once

#include <iostream>
using namespace std;
#include <string>
#include <vector>

struct member {
	string name;
	string gender;
	int age;
	string phone;
	string address;
	int num;
};

void ShowMenu();
member AddMem();
int FindMem(vector <member>*, string);
void ShowAll(vector <member>*);