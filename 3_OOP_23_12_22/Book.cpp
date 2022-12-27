#include "Book.h"
#include<iostream>
#include<string>

Book::Book() {}

Book::Book(int x) : _x(x) {}

const std::string& Book::getName() const {
	return _name;
}
void Book::setName(const std::string& name) {
	_name = name;
}

const std::string& Book::getAutor() const {
	return _autor;
}
void Book::setAutor(const std::string& autor) {
	_autor = autor;
}

int Book::getX() {
	return _x;
}
void Book::setX(const int& x) {
	_x = x;
}

bool Book::operator==(const Book& other) {
	return _x == other.getName().size();
}