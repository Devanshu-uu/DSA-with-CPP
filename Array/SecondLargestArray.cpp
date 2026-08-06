 #include <iostream>
 #include <climits>
 

using namespace std;
int main() {   
    int marks[]={74,23,-54,76,32},mx= INT_MIN;
    int mx2= INT_MIN;
    // int max=INT_MIN;
    for (int i=0;i<size(marks);i++){
        // mx=max(mx,marks[i]);
        if (mx<marks[i]){
            mx=marks[i];
        }
        
    }
    for (int i=0;i<size(marks);i++){
        // mx=max(mx,marks[i]);
        if (marks[i]>mx2 and marks[i]!=mx){
            mx2=marks[i];
        }
        
    }


cout<<mx<<endl;
cout<<mx2<<endl;
 
    
   

}