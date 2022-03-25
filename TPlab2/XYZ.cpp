#include <iostream>
#include "XYZ.h"


XYZ::XYZ(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

XYZ::XYZ(const XYZ& Ishodnik) {
	this->x = Ishodnik.x;
	this->y = Ishodnik.y;
	this->z = Ishodnik.z;
}

XYZ::~XYZ() {
}


int XYZ::getX() {
	return x;
}

int XYZ::getY() {
	return y;
}

int XYZ::getZ() {
	return z;
}


void XYZ::setX(int x) {
	this->x = x;
}
void XYZ::setY(int y) {
	this->y = y;
}
void XYZ::setZ(int z) {
	this->z = z;
}

void XYZ::setAll(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void XYZ::show() {
	std::cout <<"x=" << x << " y=" << y << " z=" << z << std::endl;
}



XYZ XYZ::operator+ (const XYZ & ishodnok) {
	XYZ temp;
	temp.x = this->x+ ishodnok.x;
	temp.y = this->y + ishodnok.y;
	temp.z = this->z + ishodnok.z;
	return temp;
}

XYZ operator- (const XYZ& ishodnik, const int x) {
	XYZ temp;
	temp.x = ishodnik.x-x;
	temp.y = ishodnik.y-x;
	temp.z = ishodnik.z-x;
	return temp;
}

XYZ operator- (const int x, const XYZ& ishodnik) {
	XYZ temp;
	temp.x = x - ishodnik.x;
	temp.y = x - ishodnik.y;
	temp.z = x - ishodnik.z;
	return temp;
}





std::ostream& operator<< (std::ostream& os, XYZ& xyz) {
	os << "x=" << xyz.x << " y=" << xyz.y << " z=" << xyz.z << std::endl;
	return os;
}

std::istream& operator>> (std::istream& is, XYZ& xyz) {
	is>>xyz.x >> xyz.y >> xyz.z;
	return is;
}



bool operator>(const XYZ& a, const XYZ& b) {
	if (a.x > b.x) { std::cout << "a.x > b.x" << std::endl; }
	else { std::cout << "a.x !< b.x" << std::endl; }
	if (a.y > b.y) { std::cout << "a.y > b.y" << std::endl; }
	else { std::cout << "a.y !< b.y" << std::endl; }
	if (a.z > b.z) { std::cout << "a.z > b.z" << std::endl; }
	else { std::cout << "a.z !< b.z" << std::endl; }
	return 0;
}

bool operator<(const XYZ& a, const XYZ& b) {
	if (a.x < b.x) { std::cout << "a.x < b.x" << std::endl; }
	else { std::cout << "a.x !< b.x" << std::endl; }
	if (a.y < b.y) { std::cout << "a.y < b.y" << std::endl; }
	else { std::cout << "a.y !< b.y" << std::endl; }
	if (a.z < b.z) { std::cout << "a.z < b.z"; }
	else { std::cout << "a.z !< b.z" << std::endl; }
	return 0;
}

bool operator>=(const XYZ& a, const XYZ& b) {
	if (a.x >= b.x) { std::cout << "a.x >= b.x" << std::endl; }
	else { std::cout << "a.x !>= b.x" << std::endl; }
	if (a.y>= b.y) { std::cout << "a.y>= b.y" << std::endl; }
	else { std::cout << "a.y !>= b.y" << std::endl; }
	if (a.z>= b.z) { std::cout << "a.z >= b.z" << std::endl; }
	else { std::cout << "a.z !>= b.z" << std::endl; }
	return 0;
}

bool operator<=(const XYZ& a, const XYZ& b) {
	if (a.x <= b.x) { std::cout << "a.x<=  b.x" << std::endl; }
	else { std::cout << "a.x !<=  b.x" << std::endl; }
	if (a.y<=  b.y) { std::cout << "a.y<=  b.y" << std::endl; }
	else { std::cout << "a.y !<=  b.y" << std::endl; }
	if (a.z<=  b.z) { std::cout << "a.z<=  b.z" << std::endl; }
	else { std::cout << "a.z !<=  b.z" << std::endl; }
	return 0;
}

bool operator==(const XYZ& a, const XYZ& b) {
	if (a.x== b.x) { std::cout << "a.x== b.x" << std::endl; }
	else { std::cout << "a.x !== b.x" << std::endl; }
	if (a.y== b.y) { std::cout << "a.y== b.y" << std::endl; }
	else { std::cout << "a.y !== b.y" << std::endl; }
	if (a.z== b.z) { std::cout << "a.z== b.z" << std::endl; }
	else { std::cout << "a.z !== b.z" << std::endl; }
	return 0;
}

bool operator!=(const XYZ& a, const XYZ& b) {
	if (a.x != b.x) { std::cout << "a.x!= b.x" << std::endl; }
	else { std::cout << "a.x !!= b.x" << std::endl; }
	if (a.y != b.y) { std::cout << "a.y!= b.y" << std::endl; }
	else { std::cout << "a.y !!= b.y" << std::endl; }
	if (a.z != b.z) { std::cout << "a.z!= b.z" << std::endl; }
	else { std::cout << "a.z !!= b.z" << std::endl; }
	return 0;
}

