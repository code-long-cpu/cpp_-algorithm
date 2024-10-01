#include "XYPoint.h"

// 默认构造函数实现，将 x 和 y 初始化为 0
XYPoint::XYPoint() : x(0), y(0) {}

// 带参数的构造函数实现
XYPoint::XYPoint(double xVal, double yVal) : x(xVal), y(yVal) {}

// Setter for x 实现
void XYPoint::setX(double xVal)
{
  x = xVal;
}

// Setter for y 实现
void XYPoint::setY(double yVal)
{
  y = yVal;
}

// Getter for x 实现
double XYPoint::getX() const
{
  return x;
}

// Getter for y 实现
double XYPoint::getY() const
{
  return y;
}
