#include<stack>
#include<list>
#include<iostream>

using namespace std;

int main()
{
    stack<int> values;

    stack<string,list<string>> myvalue;

    list<int> alist{1,2,1,32,4,324};

    stack<int,list<int>> my_stack(alist);

    stack<int,list<int>> anew_stack(my_stack);

    cout << my_stack.size()<<endl;
    cout<< my_stack.empty() <<endl;

    cout<< my_stack.top()<<endl;
    // auto ite=my_stack.pop();
    // cout<< my_stack.pop() <<endl;

    return 0;
}