#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
  if (argc != 3)
  {
    cerr << "Usage: " << argv[0] << " <matrix_file> <vector_file>" << endl;
    return 1;
  }

  // 读取矩阵文件
  ifstream matrixFile(argv[1]);
  if (!matrixFile.is_open())
  {
    cerr << "Error opening matrix file: " << argv[1] << endl;
    return 1;
  }

  int rows, cols;
  matrixFile >> rows >> cols; // 读取行数和列数

  // 创建并读取矩阵
  vector<vector<int>> matrix(rows, vector<int>(cols)); // 修正：添加空格
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      matrixFile >> matrix[i][j];
    }
  }
  matrixFile.close();

  // 读取向量文件
  ifstream vectorFile(argv[2]);
  if (!vectorFile.is_open())
  {
    cerr << "Error opening vector file: " << argv[2] << endl;
    return 1;
  }

  int vectorSize;
  vectorFile >> vectorSize; // 读取向量的大小

  // 检查向量大小与矩阵列数是否匹配
  if (vectorSize != cols)
  {
    cerr << "Error: Matrix columns (" << cols << ") must match vector size (" << vectorSize << ")." << endl;
    return 1;
  }

  // 创建并读取向量,读取文件
  vector<int> vec(vectorSize);
  for (int i = 0; i < vectorSize; ++i)
  {
    vectorFile >> vec[i];
  }
  vectorFile.close();

  // 计算矩阵和向量的乘积
  vector<int> result(rows, 0); // 初始化结果向量
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      result[i] += matrix[i][j] * vec[j];
    }
  }

  // 输出结果向量
  cout << "(" << rows << ")" << endl; // 输出结果向量的行数
  for (const auto &value : result)
  {                        // 使用 C++11 的范围 for 循环
    cout << value << endl; // 输出每个元素
  }

  return 0;
}

// 在终端输入执行文件：
// g++ -std=c++11 matrix/matrix_vector_multiplication.cpp -o matrix/matrix_vector_multiplication

// ./matrix/matrix_vector_multiplication ./matrix/matrix.txt ./matrix/vector.txt

// 就可得到结果(2)[4,5]
