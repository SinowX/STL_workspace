#include<map>
#include<iostream>

using namespace std;

int main()
{
    map<string, int> myMap;
    map<string,int> myMap1{{"C language",13},{"STL Cookbook",24}};
    map<string,int> myMap2{make_pair("C Course",10),make_pair("STL Course",15)};
    map<string,int> newMap(myMap2);

    map<string,int> anewMap(myMap1.begin(),myMap1.end());


    auto it=myMap1.find("C language");

    cout<< it->first<<endl;
    cout<<it->second<<endl;


    cout<< myMap2.at("C Course")<<endl;
    cout<< myMap2["STL Course"]<<endl;

    cout<<myMap2.size()<<endl;
    myMap2.insert(make_pair("newbook",12));

    myMap2.emplace(make_pair("sahdiu",1232));

    cout << myMap2.size()<<endl;
    return 0;
}