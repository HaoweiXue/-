#include <iostream>
#include <vector>//����
#include <list>//�б�����
#include <deque>//˫�˶������� deque
#include <string>//�ַ���
using namespace std;
//=======================================================
//int main()
//{
//    deque<float> dv;
//
//     for(int i=0;i<6;i++)
//        dv.push_back(i*1.1);//push_back()
//
//     for(int i=0;i<dv.size();i++){//dv.size()
//
//        cout<<dv[i]<<" ";//dv[i]
//     }
//     cout<<endl;
//    return 0;
//}
//=========================================================
int main(){
    deque<string>ds;
    ds.assign(3,string("Hello"));//���� assign()
    ds.push_back("] last");//push_back()
    ds.push_front("first [");//push_front()

    for(int i=0;i<ds.size();++i){

        cout<<ds[i]<<" ";
    }
    cout<<endl;
    //================
    ds.pop_front();//pop_front()
    ds.pop_back();//pop_back()
     for(int i=0;i<ds.size();++i){

        cout<<ds[i]<<" ";
    }
    cout<<endl;
    //===================
    for(int i=1;i<ds.size();i++){
        ds[i]="another"+ds[i];//ע�����
    }
     for(int i=0;i<ds.size();++i){

        cout<<ds[i]<<" ";
    }
    cout<<endl;
    //======================
    ds.resize(4,"Hello C++");//������С
    cout<<ds.size()<<endl;
    for(int i=0;i<ds.size();i++){

        cout<<ds[i]<<" ";
    }
    cout<<endl;
}

