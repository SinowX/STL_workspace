#include<queue>
#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main()
{

    queue<int> values;
    queue<int,list<int>> myvalue;
    deque<int> mydeque{1,12,56,12,45,21,34};
    queue<int> my_queue(mydeque);

    cout << my_queue.front()<<endl;
    cout << my_queue.back() <<endl;
    


    return 0;
}