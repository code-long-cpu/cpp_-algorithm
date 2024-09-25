#include <iostream>
#include <vector>

using namespace std;

// 填充向量，向量的每个元素为其索引的平方
void fillVectorWithSquares(vector<int> &vec, int size)
{
  vec.resize(size); // 调整向量大小为 size
  for (int i = 0; i < size; ++i)
  {
    vec[i] = i * i; // 将索引 i 的平方赋值给 vec[i]
  }
}

int main()
{
  int size;
  cout << "请输入向量的大小: ";
  cin >> size;

  vector<int> vec;
  fillVectorWithSquares(vec, size);

  cout << "向量的内容为: ";
  for (int i = 0; i < size; ++i)
  {
    cout << vec[i] << " "; // 输出向量中的元素
  }
  cout << endl;

  return 0;
}

// 执行文件
// g++ -std=c++11 vector.cpp -o vector
// ./vector

// 请输入向量的大小: 5
// 向量的内容为: 0 1 4 9 16