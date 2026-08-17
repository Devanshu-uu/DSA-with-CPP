#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<endl;

    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // for (int i=0;i<size(v);i++){
    //     cout<<v[i]<<" ";
    // }
}