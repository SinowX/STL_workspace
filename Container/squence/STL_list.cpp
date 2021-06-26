#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> values(2,5);
    cout << values.front()<<endl;
    cout << values.size() << endl;
    values.push_back(8);
    cout << values.size() << endl;

    cout << values.empty() <<endl;

    int arr[]={1,2,3,2,4,2,5};

    list<int> alist(arr,arr+7);

    cout << alist.size() <<endl;

    cout << alist.back() <<endl;


    for(list<int>::iterator it=alist.begin(); it !=alist.end(); ++it){
        cout << *it<< " ";
        //访问元素只能使用迭代器
    }
    cout <<endl;

    alist.clear();

    cout << alist.size() <<endl;
    cout << alist.empty() <<endl;


    

    return 0;
}