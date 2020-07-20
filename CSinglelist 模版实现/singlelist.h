#ifndef SINGLELIST_H_
#define SINGLELIST_H_
#include <cassert>//assert ���ԣ�ά�� 
#include <iostream>
using namespace std;

template<class T>
class CElem
{
public:
    T data;
    CElem<T>* next;
};

template<class Type>
class CSingleList
{
public:
    CSingleList() : h(NULL) {}
    ~CSingleList()
    {
        release();//�ͷţ����ó�Ա���� 
    }
    void prepend(Type value);
    void del();
    CElem<Type>* first() const
    {
        return h;
    }
    void print(ostream& os = cout) const;
    bool contains(Type value) const;
    void release();
private:
    CElem<Type>* h;//ͷָ�� 
};

template<class Type>//ע���Ա��������ǰ���� 
void CSingleList<Type>::prepend(Type value)//׷�� 
{
    CElem<Type>* temp = new CElem<Type>;
    assert(temp != NULL);
    temp -> next = h;
    temp -> data = value;
    h = temp;
}

template<class Type>
void CSingleList<Type>::del()//ɾ�� 
{
    assert(h);
    CElem<Type>* temp = h;
    h = h->next;
    delete temp;
}

template<class Type>
void CSingleList<Type>::print(ostream& os) const//��� 
{
    CElem<Type>* temp = h;
    while (temp != NULL)
    {
        os<<temp->data<<"->";
        temp = temp->next;
    }
    os<<"NULL"<<"\n";
}

template<class Type>
bool CSingleList<Type>::contains(Type value) const// 
{
    CElem<Type>* temp = h;
    while (temp != NULL)
    {
        if (temp->data == value)
            return true;
        temp = temp->next;
    }
    return false;
}

template<class Type>
void CSingleList<Type>::release()
{
    while (h != NULL)
        del();//���ó�Ա���� 
}
#endif
