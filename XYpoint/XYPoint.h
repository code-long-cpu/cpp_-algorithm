#ifndef XYPOINT_H
#define XYPOINT_H

class XYPoint
{
private:
  double x;
  double y;

public:
  // 默认构造函数，将 x 和 y 初始化为 0
  XYPoint();

  // 带参数的构造函数
  XYPoint(double xVal, double yVal);

  // Setter for x
  void setX(double xVal);

  // Setter for y
  void setY(double yVal);

  // Getter for x
  double getX() const;

  // Getter for y
  double getY() const;
};

#endif // XYPOINT_H
