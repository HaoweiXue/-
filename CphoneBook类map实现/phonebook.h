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
            pb[name]=number;//ע���÷�
        }
        void delItem(string name){
            pb.erase(name);//ע���÷�
        }
        int size(){
        return pb.size();
        }
        string searchByName(string name)//������Ѱ��
        {
            map<string,string>::iterator it=pb.find(name);//ע���÷�
            if(it!=pb.end())
                return it->second;
            else
                return "";
        }
        string searchByNumber(string number)//��ѧ��Ѱ��
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
        //====================================���������
        friend istream &operator>>(istream &in,CPhoneBook &cpb){
            string name,number;
            in>>name;
            while(name!="exit"){//ѭ������
                in>>number;
                cpb.pb[name]=number;//������������ݡ�
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

