#include "Point.h"
#include<iostream>
using namespace std;


int Point::getX() const{
	return _x;
}
int Point::getY() const{
	return _y;
}
void Point::setX(int x) {
	_x = x;
}
void Point::setY(int y) {
	_y = y;
}
void Point::PrintPoint() const{
	cout << "(" << getX() << "," << getY() << ")"<<endl;
}
void Point::setPoint(int x, int y) {
	setX(x);
	setY(y);
}
void Point::shiftX(int sh_x) {
	setX(this->_x+ sh_x);
}
void Point::shiftY(int sh_y) {
	setY(this->_y + sh_y);
}
void Point::shiftPoint(int sh_x, int sh_y) {
	shiftX(sh_x);
	shiftY(sh_y);
}
Point & Point::inc(int inc_x,int inc_y) {
	this-> shiftPoint(inc_x, inc_y);
	return *this;
}
Point::Point(const Point& other) {
	this->_x = other._x;
	this->_y = other._y;
}
bool Point::equal(const Point & other)const {
	return(this->_x == other._x && this->_y == other._y);
}
Point::~Point() {
	cout << "Point destoroyed" << endl;
}