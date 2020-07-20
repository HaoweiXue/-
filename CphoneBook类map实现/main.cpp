//3. 利用适当的容器类实现电话簿类CPhoneBook，要求如下：
//（1）联系人信息包括：姓名，电话号码。
//（2）支持添加新联系人、删除联系人。
//（3）支持双向查找：给定姓名查找电话号码，给定电话号码查找姓名。
//提示：使用map实现。
#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <map>//map
#include <string>
#include <iostream>
using namespace std;
class CPhoneBook
{
    public:
        CPhoneBook(){};
        virtual ~CPhoneBook(){};
        void addItem(string name,string number){
            pb[name]=number;//注意用法
        }
        void delItem(string name){
            pb.erase(name);//注意用法
        }
        int size(){
        return pb.size();
        }
        string searchByName(string name)//按姓名寻找
        {
            map<string,string>::iterator it=pb.find(name);//注意用法
            if(it!=pb.end())
                return it->second;
            else
                return "";
        }
        string searchByNumber(string number)//按学号寻找
        {
            map<string,string>::iterator it=pb.begin();
            string name="";
            while(it!=pb.end())
            {
                if(it->second==number){
                    name=it->first;
                    break;
                }
                it++;
            }
            return name;
        }
        //====================================运算符重载
        friend istream &operator>>(istream &in,CPhoneBook &cpb){
            string name,number;
            in>>name;
            while(name!="exit"){//循环输入
                in>>number;
                cpb.pb[name]=number;//赋给对象的数据。
                in>>name;

            }
            return in;

        }
        friend ostream &operator<<(ostream &out,const CPhoneBook &cpb){
            for(auto it=cpb.pb.begin();it!=cpb.pb.end();it++)
                out<<it->first<<","<<it->second<<endl;
            return out;
        }



    private:
        map<string,string>pb;//map给力
};

#endif // PHONEBOOK_H

