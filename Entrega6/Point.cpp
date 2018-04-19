#include "Point.h"

cpp_math::Point::Point() :
	mX(new float(0.0f)), mY(new float(0.0f)), mZ(new float(0.0f))
{
}

cpp_math::Point::Point(float x, float y, float z):
	mX(new float(x)), mY(new float(y)), mZ(new float(z))
{
}

cpp_math::Point::Point(const Point & point):
	mX(new float(*point.mX)), mY(new float(*point.mY)), mZ(new float(*point.mZ))
{
}

bool cpp_math::Point::operator=(const Point & point)
{
	return false;
}

float cpp_math::Point::getX()
{
	return *mX;
}

float cpp_math::Point::getY()
{
	return *mY;
}

float cpp_math::Point::getZ()
{
	return *mZ;
}

void cpp_math::Point::setX(float x)
{
}

void cpp_math::Point::setY(float y)
{
}

void cpp_math::Point::setZ(float z)
{
}

void cpp_math::Point::setXY(float x, float y)
{
}

void cpp_math::Point::setYZ(float y, float z)
{
}

void cpp_math::Point::setXYZ(float x, float y, float z)
{
}

Point cpp_math::Point::getAddition(const Point & p)
{
	return Point();
}

const Point & cpp_math::Point::add(const Point & p)
{
	// TODO: insertar una instrucción return aquí
}

Point cpp_math::Point::getSubstraction(const Point & p)
{
	return Point();
}

const Point & cpp_math::Point::substract(const Point & p)
{
	// TODO: insertar una instrucción return aquí
}

float cpp_math::Point::distance(const Point & p)
{
	return 0.0f;
}

cpp_math::Point::~Point()
{
}
