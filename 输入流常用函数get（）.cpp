#include <iostream>
#include <algorithm>
#include <vector>
//#include <iomanip>//��I/O��ʽ������
using namespace std;


int main()
{
   char c;
   while((c=cin.get())!='\n') cout.put(c);//cin.get()          cout.put() 
   cout<<endl;
//======================================================================== 
   char s[80];
   cin.get(s,10);//cin.get(����������������ַ�λ��+1) 
   cout<<s<<endl;//cout<<������ ����������� 
  return 0;

}

