#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>//ϵͳԤ���庯������ ��������
using namespace std;


int main()
{
  int first[]={1,2,3,4,5};
  int second[]={10,20,30,40,50};
  int results[5];
  transform(first,first+5,second,results,plus<int>());//plus��ģ�� 
  for(int i=0;i<5;i++)
    cout<<results[i]<<" ";
  cout<<endl;


}

