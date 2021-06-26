#include<map>
#include<iostream>

using namespace std;

int main()
{
    multimap<string,string>tempmultimap{
        {"C language","localhost"},{"Python","http://127.0.0.1"}
    };

    multimap<char,int, less<char>>mymultimap{
        {'a',1},{'b',23}
    };
    // 第三个参数默认为升序

    multimap<char,int,greater<char>>yourmultimap{
        {'a',32},{'b',234}
    };
    // 降序排列

    multimap<char,int>hismultimap{
        {'b',21},{'a',123},{'b',54},{'c',67}
    };

    for(auto iter=hismultimap.begin(); iter != hismultimap.end();++iter){
        cout << iter->first << " "<< iter->second <<endl;
    }

    return 0;
}