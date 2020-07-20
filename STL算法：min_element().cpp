#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
  int n[]={3,7,2,5,6,4,9};
  cout<<"The smallest element is "<<*min_element(n,n+7);
  cout<<endl;
  cout<<"The largest element is "<<*max_element(n,n+7);
  cout<<endl;


}

