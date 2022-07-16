#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Person
{
	string name;
	string gender;
	string tel;
	int year_old;
public:
	Person(string name, string gender, string tel, int year_old );
	//Person();
	~Person();
	string Print();
	string GetName();
	string GetGender();
	string GetTel();
	int GetYear_old();

	void SetName(string name);
	void SetGender(string gender);
	void SetTel(string tel);
	void SetYear_old(int year_old);
	
};

//■ имени,  
//
//■ возраста,  
//
//■ пола  
//
//■ телефонного номера.