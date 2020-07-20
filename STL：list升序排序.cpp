/*
 * ex12_1.cpp
 *
 *  1. 将一组整数存放到list 中并对其按升序排序。
 */

#include<iostream>
#include<list>//注意 
#include<algorithm>//注意 
using namespace std;

int main(){
	list<int> ls;
	cout << "Enter integers (end with 0): " << endl;

	while(true){//死循环 从break跳出 
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

		ls.insert(it, number);//注意用法 
	}

	cout<<"List:"<<endl;
	for(auto n : ls)//遍历ls中元素 
			cout << n << " ";
	return 0;
}


