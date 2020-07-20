#ifndef SINGLELIST_H_
#define SINGLELIST_H_
#include <cassert>//assert 断言，维护 
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
        release();//释放，调用成员函数 
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
    CElem<Type>* h;//头指针 
};

template<class Type>//注意成员函数定义前加上 
void CSingleList<Type>::prepend(Type value)//追加 
{
    CElem<Type>* temp = new CElem<Type>;
    assert(temp != NULL);
    temp -> next = h;
    temp -> data = value;
    h = temp;
}

template<class Type>
void CSingleList<Type>::del()//删除 
{
    assert(h);
    CElem<Type>* temp = h;
    h = h->next;
    delete temp;
}

template<class Type>
void CSingleList<Type>::print(ostream& os) const//输出 
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
        del();//调用成员函数 
}
#endif
