/*
 * ex12_2.cpp
 *
 *  2. ʹ�õ�������д���򣬴ӱ�׼�����豸��������string ����
 *  �������Ǵ洢��һ��vector �����У�
 *  Ȼ���������vector �����е�Ԫ�ء�
 */

#include<iterator>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main(){
	string line;
	vector<string> vs;
	cout<<"Enter 10 strings: " << endl;
	for(int i = 0; i < 10; ++i){
		getline(cin, line);//������ĻḲ��ԭ�е� 
		vs.push_back(line);
	}

	auto rit = vs.rbegin();
	while(rit != vs.rend()){
		cout << *rit << endl;
		++rit;//ע���ǼӼ� 
	}

	return 0;
}


