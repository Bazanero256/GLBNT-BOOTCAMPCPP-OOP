#pragma once
namespace cpp_math{
	class Point {
	public:
		Point();
		Point(float x, float y, float z);
		Point(const Point&);
		bool operator=(const Point&);
		float getX();
		float getY();
		float getZ();
		void setX(float x);
		void setY(float y);
		void setZ(float z);
		void setXY(float x, float y);
		void setYZ(float y, float z);
		void setXYZ(float x, float y, float z);
		Point getAddition(const Point& p);
		const Point& add(const Point& p);
		Point getSubstraction(const Point& p);
		const Point& substract(const Point& p);
		float distance(const Point& p);
		~Point();

	private:
		float * mX;
		float * mY;
		float * mZ;
	};
}