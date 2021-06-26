#include<vector>
#include<algorithm>
#include<functional>
#include<iostream>

using namespace std;

int main()
{
    vector<int> values(10,99);
    // 建立一个 int 类型的 vector，大小为10个，并都赋值 99;

    vector<double> values(20);
    // 建立一个 vector 并赋予大小;

    values.reserve(20);
    // 增大 values 大小，若vector大小已大于给定值，则改语句无效;

    vector<double> primes {32.2,12.3,35.3,0.34};
    // 赋予初值

    values.begin();
    values.end();
    values.rbegin();
    values.rend();
    // 这些都是迭代器，不能直接输出
    // 还有 cbegin(), cend(), crbegin() 等有const属性的迭代器


    cout << values.size()<<endl;
    cout <<values.max_size()<<endl;
    values.resize(10);
    // 调整大小

    cout << values.front()<< endl;
    cout << values.back()<<endl;

    values.push_back(34);
    values.pop_back();
    //尾部添加或删除一个元素
    values.at(8);
    //根据索引访问元素，有边界检查

    values.shrink_to_fit();
    //将内存减少到当前元素实际所使用的大小

    values.data();
    //返回第一个元素的指针

    values.capacity();

    for(auto i = values.begin();i<values.end();i++){
        cout<< *i <<endl;
    }
    //用迭代器遍历容器

    // values.assign();
    // values.insert();
    // values.swap();
    // 网络查询

    values.clear();
    //移出所有元素，容器大小变为0

    return 0;

}

// 容器在增加容量之后，首个元素的存储地址发生了改变
// 为了保险起见，每当 vector 容器的容量发生变化时，我们都要对之前创建的迭代器重新初始化一遍


// 访问元素
// values[2]    无边界检查
// values.at(2) 有边界检查
