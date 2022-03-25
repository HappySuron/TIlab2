#pragma once
#include <iostream>
#ifndef XYZ_H
#define XYZ_H

class XYZ
{
		int x;
		int y;
		int z;
public:
		XYZ(): x(0), y(0), z(0) {};
		~XYZ();
		explicit XYZ(int, int, int);
		XYZ(const XYZ& Ishodnik);

		void show();

		int getX();
		int getY();
		int getZ();

		void setX(int x);
		void setY(int y);
		void setZ(int z);
		void setAll(int x, int y, int z);

		XYZ operator+ (const XYZ& ishodnok);

		friend XYZ operator- (const XYZ& ishodnok, const int x);
		friend XYZ operator- (const int x, const XYZ& ishodnok );

		friend std::ostream& operator << (std::ostream& os, XYZ& xyz);
		friend std::istream& operator >> (std::istream& is, XYZ& xyz);

		friend bool operator>(const XYZ& a, const XYZ& b);
		friend bool operator<(const XYZ& a, const XYZ& b);
		friend bool operator>=(const XYZ& a, const XYZ& b);
		friend bool operator<=(const XYZ& a, const XYZ& b);

		friend bool operator==(const XYZ& a, const XYZ& b);
		friend bool operator!=(const XYZ& a, const XYZ& b);

};
		
#endif // ! XYZ_H

