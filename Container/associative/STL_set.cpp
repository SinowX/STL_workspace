#include<set>
#include<iostream>

using namespace std;

int main()
{
    set<string> myset{
        "asdas","uhiejnforiw","iogjiwj9","iau932ue2"
    };


    cout<<myset.size()<<endl;

    myset.erase(myset.begin());

    cout<<myset.size()<<endl;

    myset.erase(myset.begin(),myset.end()--);

    set<string> copyset(myset);
    set<string> acopyset=myset;

    for(auto iter=myset.begin();iter!=myset.end();++iter){
        cout<< * iter <<endl;
    }

    set<string> aset;
    pair<set<string>::iterator, bool> asetpair;

    string str ="http://localhost";
    asetpair=aset.insert(str);
    cout<< *(asetpair.first)<<" "<< (asetpair.second) <<endl;

    asetpair = aset.insert("thismaybewrong");
    cout<< *(asetpair.first)<<" "<< (asetpair.second) <<endl;


    cout<< aset.size()<<endl;

    aset.erase("http://localhost");

    cout<<aset.size()<<endl;




    return 0;
}