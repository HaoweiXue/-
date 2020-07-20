#include <iostream>
#include <list>
#include <vector>
//迭代器 ：类似于指针 
using namespace std;


int main()
{
  list<int>mylist;
  list<int>::iterator it;
  //=============================
  for(int i=1;i<=5;i++) mylist.push_back(i);//push_back() 
   for(it=mylist.begin();it!=mylist.end();it++){//容器名.begin() 容器名.end() 
    cout<<" "<<*it;}
    cout<<endl;

  it=mylist.begin();
  ++it;
  mylist.insert(it,10);
  mylist.insert(it,2,20);
  --it;
   for(it=mylist.begin();it!=mylist.end();it++){
    cout<<" "<<*it;}
     cout<<endl;

it=mylist.begin();
  vector<int>myvector(2,30);
  mylist.insert(it,myvector.begin(),myvector.end());//注意用法 

  for(it=mylist.begin();it!=mylist.end();it++){
    cout<<" "<<*it;
}
  cout<<endl;
    return 0;
}

