#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
   const int max_len=256;
   char line[max_len];
   int i=0;
   while((cin.getline(line,max_len)))//cin.getline（数组名，最大长度） 每次都会覆盖原有内容
   {
       cout<<"["<<i<<"]:"<<line<<endl;//cout<<数组名...输出数组所有内容
       i++;
   }//ctrl+z停止
}

/*#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
   const int max_len=256;
   char line[max_len];
   int i=0;
   while((cin.getline(line,max_len,',')))//cin.getline（数组名，最大长度） 每次都会覆盖原有内容 haowei,20,180,180,以逗号隔开输出 
   {
       cout<<"["<<i<<"]:"<<line<<endl;//cout<<数组名...输出数组所有内容
       i++;
   }//ctrl+z停止
}*/

