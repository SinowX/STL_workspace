#include<iostream>
#include<list>
#include<iterator>
#include<vector>


using namespace std;


int main()
{
    list<int> values{1,2,3,4,5};
    reverse_iterator<list<int>::iterator> begin=values.rbegin();
    reverse_iterator<list<int>::iterator> end=values.rend();
    while(begin != end)
    {
        cout<<*begin <<endl;
        ++begin;
    }

    // reverse_iterator
    reverse_iterator<vector<int>::iterator> my_reiter;

    vector<int> myvector{1,2,43,34,3};

    reverse_iterator<vector<int>::iterator> my_reiter2(myvector.end());

    




    return 0;
}
