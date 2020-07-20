#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<double>first,second;
    first.push_back(3.1);
    first.push_back(2.2);
    first.push_back(2.9);
    second.push_back(3.7);
    second.push_back(7.1);
    second.push_back(1.4);
    //=========================================
    first.sort();//小->大
    for(list<double>::iterator it=first.begin();it!=first.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;

    second.sort();
     for(list<double>::iterator it=second.begin();it!=second.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    //==============================================
    first.merge(second);//合并:merge
    second.push_back(2.1);
    first.merge(second);

    for(list<double>::iterator it=first.begin();it!=first.end();++it)
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}

