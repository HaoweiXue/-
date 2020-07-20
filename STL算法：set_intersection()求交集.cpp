#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
   int first[]={5,10,15,20,25};
   int second[]={50,40,30,20,10};
   vector<int>v(10);//大小为10.
   vector<int>::iterator it,p;

   sort(first,first+5);
   sort(second,second+5);

   it=set_intersection(first,first+5,second,second+5,v.begin());//将交集写入vector中，返回v.end（）
   for(p=v.begin();p!=v.end();p++){

    cout<<" "<<*p;
   }
   cout<<endl;
   cout<<"intersection has "<<int(it-v.begin())<<" elements.\n";


}

