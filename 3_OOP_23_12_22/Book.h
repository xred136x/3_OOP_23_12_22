#pragma once
#include<iostream>
#include<string>
class Book
{
	std::string _name = "The Destroyer of America";
	std::string _autor = "John Bolton";
	int _x;
public:
	Book();
	Book(int x);

		const std::string& getName() const;
		void setName(const std::string & name);
	
		const std::string& getAutor() const;
		void setAutor(const std::string& Autor);

		int getX();
		void setX(const int& x);

		bool operator==(const Book& other);
};


