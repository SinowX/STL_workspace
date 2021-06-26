#include<forward_list>
#include<iostream>

using namespace std;

int main()
{
    forward_list<int> values(4,6);

    cout << values.front()<<endl;

    values.push_front(43);

    cout <<values.front() <<endl;

    

    return 0;

}