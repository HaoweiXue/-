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
        map<string,string>pb;//
};

#endif // PHONEBOOK_H

