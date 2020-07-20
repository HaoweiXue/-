#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>//系统预定义函数对象 比较操作
using namespace std;


int main()
{
  int numbers[]={20,40,50,10,30};
  sort(numbers,numbers+5,greater<int>());//greater类模版 从大到小
  for(int i=0;i<5;i++)
    cout<<numbers[i]<<" ";
  cout<<endl;
  return 0;

}

