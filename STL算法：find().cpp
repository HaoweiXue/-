#include <iostream>
#include <algorithm>//STL �㷨 
using namespace std;

int main()
{
    int myints[]={10,20,30,40};
    int*p;

    p=find(myints,myints+4,30);//find()��������Ԫ�ص�ַ 
    ++p;
    cout<<"The element following 30 is "<<*p<<endl;

    vector<int>v(myints,myints+4);//��ʼ�� 
    vector<int>::iterator it;//��������� 

    it=find(v.begin(),v.end(),30);
    ++it;
    cout<<"The element following 30 is "<<*it<<endl;
    return 0;
}

