/*
 * ex12_1.cpp
 *
 *  1. ��һ��������ŵ�list �в����䰴��������
 */

#include<iostream>
#include<list>//ע�� 
#include<algorithm>//ע�� 
using namespace std;

int main(){
	list<int> ls;
	cout << "Enter integers (end with 0): " << endl;

	while(true){//��ѭ�� ��break���� 
		int number;
		cin >> number;
		
		if(number == 0)
			break;
			
		auto it = ls.begin();
		while(it != ls.end()){
			if(number > *it)
				++it;
			else
				break;
		}

		ls.insert(it, number);//ע���÷� 
	}

	cout<<"List:"<<endl;
	for(auto n : ls)//����ls��Ԫ�� 
			cout << n << " ";
	return 0;
}


