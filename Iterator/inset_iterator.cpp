#include<iterator>
#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> foo(2,5);
    list<int>::iterator it = ++foo.begin();
    insert_iterator<list<int>> insert_it=inserter(foo,it);

    insert_it=12;
    insert_it=68;
    insert_it=90;
    insert_it=56;
    insert_it=5;
    insert_it=6;
    insert_it=45;
    insert_it=78;

    for(list<int>::iterator it = foo.begin();it!=foo.end();++it)
    {
        cout<< *it<< " ";
    }
    cout<<endl;
    
    return 0;
}