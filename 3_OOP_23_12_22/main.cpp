#include "Person.h"
#include "Book.h"
#include<iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	/*Person p1("Alex");
	Person p2("John");

	std::cout << p1.getName() << '\n';
	std::cout << p2.getName() << '\n';

	// Person p3 = p1.operator+(p2);
	Person p3 = p1 + p2;
	std::cout << "=========" << '\n';
	std::cout << p3.getName() << '\n';
	std::cout << "Больше ли p1, чем p2? ---> " << (p1 > p2) << '\n';*/

	Book b1(10);
	std::cout << (b1 == b1.getName());

	return 0;
}