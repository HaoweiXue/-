/*
 * ex12_4.cpp
 *
 *  4. ��������stack ʵ��һ�������ࡣ
 */

#include <stack>
#include <iostream>
using namespace std;
class Queue{
public:
	Queue(){}
	~Queue(){}
	void add(int ele){
		pos.push(ele);//stack-push() 
	}
	int del(){
		transfer(rev, pos);
		int val = rev.top();//stack-top()
		rev.pop();//stack-pop()
		transfer(pos, rev);
		return val;
	}
	bool empty(){
		return pos.empty();//stack-empty���� 
	}

private:
	stack<int> pos, rev;
	void transfer(stack<int>& s1, stack<int>& s2)	{
		while(!s1.empty())//ѭ�����s1 
			s1.pop();
		while(!s2.empty()){
			s1.push(s2.top());//ע��д����� 
			s2.pop();
		}
	}
};
int main()
{
	Queue qi;
	for(int i=0; i<10; i++)
		qi.add(i);
	while(!qi.empty())
		cout<<qi.del()<<"\t";
}



