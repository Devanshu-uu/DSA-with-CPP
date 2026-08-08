#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr(5);
    vector<int> brr(5,10);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<brr[i]<<endl;
    }

    int n=arr.size();
    cout<<n<<endl;
}