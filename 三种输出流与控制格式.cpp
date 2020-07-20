#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    char buff[11]="0123456789";
    cout<<buff<<endl;//cout<<
    for(int i=0;i<10;i++)
        cout.put(buff[i]);//cout.put()
    cout<<endl;
    cout.write(buff,10);//cout.write(,)
    cout<<endl;
  return 0;

}

