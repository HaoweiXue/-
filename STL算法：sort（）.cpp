#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;

bool myfunction(int i,int j){
    return(i<j);
}
struct myclass{
    bool operator()(int i,int j){
        return (i<j);
    }
}myobject;
int main()
{
  int myints[]={32,71,12,45,26,80,53,33};
  vector<int>v(myints,myints+8);
  vector<int>::iterator it;

  sort(v.begin(),v.begin()+4);//前四个数字排序 小到大
  for(it=v.begin();it!=v.end();++it)
    cout<<" "<<*it;
  cout<<endl;

  sort(v.begin()+4,v.end(),myfunction);//剩余数字排序
  for(it=v.begin();it!=v.end();++it)
    cout<<" "<<*it;
  cout<<endl;

  sort(v.begin(),v.end(),myobject);//所有元素排序
  for(it=v.begin();it!=v.end();++it)
    cout<<" "<<*it;
  cout<<endl;

}

