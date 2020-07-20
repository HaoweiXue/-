#include <iostream>
#include <algorithm>//STL 算法 
using namespace std;

int main()
{
    int myints[]={10,20,30,40};
    int*p;

    p=find(myints,myints+4,30);//find()函数返回元素地址 
    ++p;
    cout<<"The element following 30 is "<<*p<<endl;

    vector<int>v(myints,myints+4);//初始化 
    vector<int>::iterator it;//定义迭代器 

    it=find(v.begin(),v.end(),30);
    ++it;
    cout<<"The element following 30 is "<<*it<<endl;
    return 0;
}

