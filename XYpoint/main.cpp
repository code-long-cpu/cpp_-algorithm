#include <iostream>
#include "XYPoint.h"

int main()
{
  // 测试默认构造函数
  XYPoint p1;
  std::cout << "默认构造函数测试: " << std::endl;
  std::cout << "p1: (" << p1.getX() << ", " << p1.getY() << ")" << std::endl;

  // 测试带参数构造函数
  XYPoint p2(3.5, 7.2);
  std::cout << "带参数构造函数测试: " << std::endl;
  std::cout << "p2: (" << p2.getX() << ", " << p2.getY() << ")" << std::endl;

  // 测试 setter 和 getter
  p1.setX(4.5);
  p1.setY(9.3);
  std::cout << "设置 p1 的坐标为 (4.5, 9.3): " << std::endl;
  std::cout << "p1: (" << p1.getX() << ", " << p1.getY() << ")" << std::endl;

  return 0;
}

// 执行文件：
// g++ XYpoint/main.cpp XYpoint/XYPoint.cc -o XYpoint/testXYPoint

// 结果：
// 默认构造函数测试:
// p1: (0, 0)
// 带参数构造函数测试:
// p2: (3.5, 7.2)
// 设置 p1 的坐标为 (4.5, 9.3):
// p1: (4.5, 9.3)
// (base) xiaolong@MacBook-Pro cpp %
