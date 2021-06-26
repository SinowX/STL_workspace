#include<queue>
#include<iostream>
#include<array>

using namespace std;

int main()
{
    priority_queue<int> values;
    
    int normal[]{32,56,542,43,45,2};

    priority_queue<int>copy_values(normal,normal+6);

    array<int,4> arr{32,21,56,21};
    priority_queue<int>copy_array(arr.begin(),arr.end());

    priority_queue<int,deque<int>,greater<int>>copy_some(normal,normal+6);

    while(!copy_some.empty())
    {
        cout<<copy_some.top()<<" ";
        copy_some.pop();
    }
    cout<<endl;
    

    return 0;
}