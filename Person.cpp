#include "Person.h"


Person::Person(string name, string gender, string tel, int year_old)
{
	this->name = name;
	this->gender = gender;
	this->tel = tel;
	this->year_old = year_old;
}

Person::~Person() {
	cout << ":::::::::::" << endl;
}
string Person::Print() {
	stringstream ss;
	ss << name << "\n" <<
		year_old << "\n" <<
		gender << "\n" <<
		tel << "\n";
	return ss.str();
}

string Person::GetName()
{
	return string();
}

int Person::GetYear_old()
{
	return year_old;
}

string Person::GetGender()
{
	return string();
}

string Person::GetTel()
{
	
	return string();
}

void Person::SetName(string name)
{
	this->name = name;
}

void Person::SetYear_old(int year_old)
{
	this->year_old = year_old;
}

void Person::SetGender(string gender)
{
	this->gender = gender;
}

void Person::SetTel(string tel)
{
	this-> tel = tel;
}


int main() {
	string name;
	string gender;
	string tel;
	int year_old;
	cin >> name;
	cin >> gender;
	cin >> tel;
	cin >> year_old;
	system("cls");
	Person person(name, gender, tel, year_old);
	cout << person.Print() << endl;
	return 0;
}

