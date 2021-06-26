#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>


using namespace std;

bool myfunction(int i,int j){return (i<j);}

int main()
{
    cout<<"=======Counting Functor======="<<endl;
    cout<<plus<int>()(10,5)<<endl;
    cout<<minus<int>()(10,5)<<endl;
    cout<<multiplies<int>()(10,5)<<endl;
    cout<<divides<int>()(10,5)<<endl;
    cout<<modulus<int>()(10,5)<<endl;
    cout<<negate<int>()(10)<<endl;
    
    cout<<"=============================="<<endl;

    cout<<"Relative Functor"<<endl;

    int myints[]{32,132,2,43,23,13,21,54};
    vector<int> myvector(myints,myints+8);

    sort(myvector.begin(),myvector.begin()+4);
    sort(myvector.begin()+4,myvector.end(),myfunction);
    sort(myvector.begin(),myvector.end(),less<int>());

    // sort();
    cout<<"=======myvector contains======"<<endl;
    for(vector<int>::iterator it=myvector.begin();it!=myvector.end();it++)
    {
        cout<<' '<<*it;
    }
    cout<<endl;







    return 0;
}