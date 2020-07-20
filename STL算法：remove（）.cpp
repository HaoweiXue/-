#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  int myints[]={10,20,30,30,20,10,10,20};//8
  vector<int>v(myints,myints+8);
  vector<int>::iterator p,pEnd;//迭代器的定义

  pEnd=remove(v.begin(),v.end(),20);//删除20后返回当前v.end（）

  for(p=v.begin();p!=pEnd;++p)
    cout<<" "<<*p;
  cout<<endl;

}

