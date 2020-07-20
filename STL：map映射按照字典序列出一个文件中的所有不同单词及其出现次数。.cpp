/*
 * ex12_6.cpp
 *
 *
 *      6. ��д���򣬰����ֵ����г�һ���ļ��е����в�ͬ���ʼ�����ִ�����
 */
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;
int main()
{
	map<string, int> dic;
	string filename, word;
	cout<<"Please input filename:";
	cin>>filename;
	ifstream file(filename.c_str());
	while (file>>word) { dic[word] += 1; }
	cout<<"There are "<<dic.size()<<" different words in file "<<filename<<endl;
	map<string, int>::iterator p;
	for(p = dic.begin(); p!=dic.end(); p++)
		cout << p->first << "\t" << p->second << endl;
}
