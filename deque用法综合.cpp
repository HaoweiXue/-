#include <iostream>
#include <vector>//向量
#include <list>//列表容器
#include <deque>//双端队列容器 deque
#include <string>//字符串
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
    ds.assign(3,string("Hello"));//分配 assign()
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
        ds[i]="another"+ds[i];//注意操作
    }
     for(int i=0;i<ds.size();++i){

        cout<<ds[i]<<" ";
    }
    cout<<endl;
    //======================
    ds.resize(4,"Hello C++");//调整大小
    cout<<ds.size()<<endl;
    for(int i=0;i<ds.size();i++){

        cout<<ds[i]<<" ";
    }
    cout<<endl;
}

