#include <iostream>
#include <algorithm>
using namespace std;

bool IsOdd(int i){return ((i%2==0));}
int main()
{
  int mycount;
  vector<int>v;
  for(int i=1;i<10;i++) v.push_back(i);
  mycount=(int)count_if(v.begin(),v.end(),IsOdd);//统计相同特征元素个数count_if
  cout<<"v contains "<<mycount<<" odd values.\n";


}

