#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(string str)
{
  // 去掉非字母数字字符，并转换为小写
  string cleanedStr;
  for (char ch : str)
  {
    if (isalnum(ch))
    {                            // 判断是否为字母或数字
      cleanedStr += tolower(ch); // 转换为小写并添加到新的字符串中
    }
  }

  // 检查 cleanedStr 是否前后相同
  int n = cleanedStr.size();
  for (int i = 0; i < n / 2; ++i)
  {
    if (cleanedStr[i] != cleanedStr[n - 1 - i])
    {               // 比较前后字符
      return false; // 如果有不同的字符，返回 false
    }
  }
  return true; // 如果整个循环都匹配，返回 true
}

int main()
{
  string input;
  cout << "请输入一个字符串: ";
  getline(cin, input); // 获取用户输入的字符串

  if (isPalindrome(input))
  {
    cout << "\"" << input << "\" 是回文。" << endl;
  }
  else
  {
    cout << "\"" << input << "\" 不是回文。" << endl;
  }

  return 0;
}

// 执行文件：
// g++ -std=c++11 palindrome.cpp -o palindrome
// ./palindrome

// 请输入一个字符串: ramar
// "ramar" 是回文。

// 请输入一个字符串: truu
// "truu" 不是回文。