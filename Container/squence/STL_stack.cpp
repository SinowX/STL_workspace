#include<iostream>
#include<stack>
#include<list>

using namespace std;

int main()
{
    list<int> alist{1,2,43,23,76,134,5,213};
    stack<int> astack;
    for(list<int>::iterator it=alist.begin();it!=alist.end();it++)
    {
        astack.push(*it);
        cout<<"Pushed :"<<*it<<endl;
    }
    while(!astack.empty())
    {
        cout<<"Poped  :"<<astack.top()<<endl;
        astack.pop();
    }
    return 0;
}