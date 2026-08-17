#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main() {
    vector <int> v={2,7,4,6,1};
    // sort(v.begin(),v.end());
    reverse(v.begin()+1,v.end());
    for(int ele:v) cout<<ele<<" ";



}