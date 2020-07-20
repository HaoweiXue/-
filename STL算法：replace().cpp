#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  int myints[]={10,20,30,30,20,10,10,20};
  vector<int>v(myints,myints+8);
  replace(v.begin(),v.end(),20,99);//出现的20用99代替
  cout<<"my vector contains:";
  for(vector<int>::iterator it=v.begin();it!=v.end();++it)
    cout<<" "<<*it;
  cout<<endl;

}

