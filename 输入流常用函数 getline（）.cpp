#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
   const int max_len=256;
   char line[max_len];
   int i=0;
   while((cin.getline(line,max_len)))//cin.getline������������󳤶ȣ� ÿ�ζ��Ḳ��ԭ������
   {
       cout<<"["<<i<<"]:"<<line<<endl;//cout<<������...���������������
       i++;
   }//ctrl+zֹͣ
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
   while((cin.getline(line,max_len,',')))//cin.getline������������󳤶ȣ� ÿ�ζ��Ḳ��ԭ������ haowei,20,180,180,�Զ��Ÿ������ 
   {
       cout<<"["<<i<<"]:"<<line<<endl;//cout<<������...���������������
       i++;
   }//ctrl+zֹͣ
}*/

