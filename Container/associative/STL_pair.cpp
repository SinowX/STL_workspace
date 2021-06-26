#include<iostream>
#include<utility>
#include<string>

using namespace std;

int main(){
    pair<string,double> pair1;
    pair<string,string> pair2("STL_Course","http://sinow.top");
    pair<string,string> pair3(pair2);
    pair<string,string> pair4(make_pair("STL_School","http://localhost"));
    pair<string,string> pair5(string("Python"),string("childish"));

    cout <<pair1.first << " " << pair1.second << endl;
    pair1.first="dasd";
    pair1.second=123;
    cout <<pair1.first << " " << pair1.second << endl;
    cout <<pair2.first << " " << pair2.second << endl;
    cout <<pair3.first << " " << pair3.second << endl;
    cout <<pair4.first << " " << pair4.second << endl;
    cout <<pair5.first << " " << pair5.second << endl;

}