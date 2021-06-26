#include<queue>
#include<iostream>

using namespace std;

int main()
{
    queue<int> myqueue;
    cout<<myqueue.empty()<<endl;


    myqueue.push(100);
    myqueue.push(21);
    myqueue.push(15);
    cout<<myqueue.front()<<endl;
    cout<<myqueue.back()<<endl;
    myqueue.pop();
    cout<<myqueue.front()<<endl;
    cout<<myqueue.back()<<endl;
    cout<<myqueue.size()<<endl;


}