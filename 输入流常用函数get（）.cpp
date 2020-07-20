#include <iostream>
#include <algorithm>
#include <vector>
//#include <iomanip>//简化I/O格式化操作
using namespace std;


int main()
{
   char c;
   while((c=cin.get())!='\n') cout.put(c);//cin.get()          cout.put() 
   cout<<endl;
//======================================================================== 
   char s[80];
   cin.get(s,10);//cin.get(存放数组名，输入字符位数+1) 
   cout<<s<<endl;//cout<<数组名 输出数组内容 
  return 0;

}

