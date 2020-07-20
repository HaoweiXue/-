#include <iostream>
#include <list>
#include <vector>
using namespace std;


int main()
{
 vector<int>v;
 //vector<int>::iterator p;//正向迭代器 
 vector<int>::reverse_iterator p;//反向迭代器
 for(int i=0;i<10;i++)
    v.push_back(i);
 //for(p=v.begin();p!=v.end();p++)//p++
 //   cout<<*p<<" ";   
 for(p=v.rbegin();p!=v.rend();p++)//p++
    cout<<*p<<" ";
  cout<<endl;
    return 0;
}

