#include<vector>
#include<iostream>
#include<iterator>


using namespace std;


int main()
{
    vector<int> foo;
    back_insert_iterator<vector<int>> back_it(foo);
    back_it=4;
    back_it=3;
    back_it=5;
    back_it=9;
    back_it=1;

    for(vector<int>::iterator it=foo.begin();it!=foo.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    back_insert_iterator<vector<int>> back_it2=back_inserter(foo);



    return 0;
}