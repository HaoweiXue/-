#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myfunction(int i,int j){return (i<j);}
int main()
{
    int myints[]={1,2,3,4,5,4,3,2,1};
    vector<int>v(myints,myints+9);
    vector<int>::iterator it;//��������� 

    sort(v.begin(),v.end());//���ֲ�����ǰ���� С->�� 
    for(it=v.begin();it!=v.end();it++)//�鿴�������� 
    {
        cout<<" "<<*it;
    }
    cout<<endl;
    
    
    if(binary_search(v.begin(),v.end(),3))//�ҵ�����true�����򷵻�false�� 
        cout<<"found!\n";
    else
        cout<<"not found.\n";

    sort(v.begin(),v.end(),myfunction);
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<" "<<*it;
    }
    cout<<endl;
    if(binary_search(v.begin(),v.end(),6,myfunction))
        cout<<"found!\n";
    else
        cout<<"not found.\n";


}

