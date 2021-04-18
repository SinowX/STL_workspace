#include<iostream>

using namespace std;



template <typename T>
class List
{
    void insert_front(T value);
    void insert_end(T value);
    void display(ostream &os = cout) const;

    private:
        ListItem<T> * _end;
        ListItem<T> * _front;
        long _size;
};

template<typename T>
class ListItem
{
    public:
        T value() const {return _value;}
        ListItem * next() const{return _next;}
    private:
        T _value;
        ListItem* _next;
};

template <class Item>
struct ListIter
{
    Item * ptr;
    ListIter(Item * p=0): ptr(p) {}
    
    Item& operator* () const{return *ptr;}
    Item* operator->() const{return ptr;}

    ListIter& operator++()
    {
        ptr=ptr->next();
        return *this;
    }

    ListIter operator++(int)
    {
        ListIter tmp=*this;
        ++*this;
        return tmp;
    }

    bool operator==(const ListIter& i) const
    {
        return ptr==i.ptr;
    }

    bool operator!=(const ListIter& i)const
    {
        return ptr != i.ptr;
    }

};

void main()
{
    List<int> mylist;
    // for(int i=0;i<5;i++){
    //     mylist.insert_front(i);
    //     mylist.insert_end(i+2);
    // }


    ListIter<ListItem<int>> begin(mylist._front())
}