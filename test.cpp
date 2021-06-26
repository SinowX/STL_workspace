#include<iterator>
#include<deque>
#include<iostream>
#include<algorithm>



using namespace std;

int main()
{
    ostream_iterator<int> outite(cout," ");
    int ia[]{0,1,2,3,4,5};
    deque<int> id(ia,ia+6);
    copy(id.begin(),id.end(),outite);
    // cout<< "start here";
    cout<< endl;


    copy(ia+1,ia+2,front_inserter(id));

    for (auto it=id.begin();it!=id.end();it++)
        cout<< *it <<" ";
    // copy(id.begin(),id.end(),outite); //和上for循环功能一致
    cout<<endl;

    copy(ia+3,ia+4,back_inserter(id));
    copy(id.begin(),id.end(),outite);
    cout<<endl;

    deque<int>::iterator ite=find(id.begin(),id.end(),5);
    copy(ia+0,ia+3,inserter(id,ite));
    copy(id.begin(),id.end(),outite);
    cout<<endl;

    copy(id.rbegin(),id.rend(),outite);
    cout<<endl;

    istream_iterator<int> inite(cin),eos;
    copy(inite,eos,inserter(id,id.begin()));
    copy(id.begin(),id.end(),outite);


}