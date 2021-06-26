#include<iostream>
#include<deque>

using namespace std;

int main()
{
    int arr[]={1,2,2,3,123,2,2};
    deque<int> d(arr,arr+7);

    cout << d.size()<<endl;

    cout<< *d.begin()<<endl;
    cout<< *--d.end()<<endl;

    cout<< *d.rbegin()<<endl;

    cout<< *d.rend()<<endl;

    cout << d[3] <<endl;

    deque<int> newde(d.begin(),d.end());

    cout<< newde[4]<<endl;


    deque<int> anewde(10); // set value to be 0 for default


    d.push_back(20);
    d.push_front(20);
    d.pop_back();
    d.pop_front();
    d.emplace_back(21);
    d.emplace_front(32);
    

    return 0;
}