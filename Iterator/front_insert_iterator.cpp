#include<iterator>
#include<iostream>
#include<forward_list>



using namespace std;

int main()
{
    forward_list<int> foo;
    front_insert_iterator<forward_list<int>> front_it=front_inserter(foo);
    front_insert_iterator<forward_list<int>> front_it2=front_inserter(foo);

    front_it=4;
    front_it=21;
    front_it=76;
    front_it=68;

    for(forward_list<int>::iterator it = foo.begin();it!=foo.end();it++)
    {
        cout<< *it<<" ";
    }




    return 0;
}