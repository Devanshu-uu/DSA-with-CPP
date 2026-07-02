
// HW: Given a point (x, y), write a program 
// to find out if it lies in the 1st Quadrant, 
// 2nd Quadrant, 3rd Quadrant, 4th 
// Quadrant, on the x-axis, y-axis or at the 
// origin. 

#include <iostream>
using namespace std;
int main(){
  int x;
  cout<< "Enter x: ";
  cin>> x;
  int y;
  cout<< "Enter y: ";
  cin>> y;

  if(x>0 && y>0){
    cout<<"It is in 1st Quadrant";

  }

  else if(x<0 && y>0){
    cout<<"It is in 2nd Quadrant";
  }
  else if(x<0 && y<0){
    cout<<"It is in 3rd Quadrant";
  }
  else if(x>0 && y<0){
    cout<<"It is in 4th Quadrant";
  }

  else if(x==0 && y>0){
    cout<< "It is at Positive y axis";
  }
  else if(x==0 && y<0){
    cout<< "It is at Negative y axis";
  }
  else if(x<0 && y==0){
    cout<< "It is at Negative x axis";
  }
  else if(x>0 && y==0){
    cout<< "It is at Positive x axis";
  }

  else{
    cout<<"It is at Origin";
  }










  

}
