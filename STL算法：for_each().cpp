#include <iostream>
#include <algorithm>
using namespace std;

void myfunction(int i){
    cout<<" "<<i;
}
struct myclass{
    void operator()(int i){
    cout<<" "<<i;
    }

}myobject;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for_each(v.begin(),v.end(),myfunction);//��Χ��Ԫ�ض����øú��� 
    cout<<endl;
    for_each(v.begin(),v.end(),myobject);
    cout<<endl;
}

