#pragma once
#include<iostream>
#include<string>
class Person
{
public:
	Person();
	Person(const std::string& name);
	const std::string& getName()const;
	void setName(const std::string& name);

	size_t getId()const;
	void setId(size_t id);

	Person operator+(const Person& other);
	bool operator>(const Person& other);

private:
	std::string _name;
	size_t _id;
};

