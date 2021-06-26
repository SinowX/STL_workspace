#include<unordered_map>
#include<iostream>

using namespace std;

int main()
{
    unordered_map<string,string> umap{
        {"Python","runoob.com"},
        {"HTML","w3cschool.com"},
        {"Arch","Archlinux"},
        {"Meile","localhost"},
        {"Zhenmeile","127.0.0.1"}
    };
    
    unordered_map<string,string> umap2(umap);

    cout<< umap.size()<<endl;

    for(auto iter=umap.begin();iter!=umap.end();iter++){
        cout<<iter->first<<" "<<iter->second<<endl;
    }

    return 0;

}