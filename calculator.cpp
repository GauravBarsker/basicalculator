#include<iostream>
using namespace std;
void sum(long  x,long  y){
    cout<<x+y;
}
void subtraction(int x,int y){
    cout<<x-y;
}
void multiplication(long x,long y){
    cout<<x*y;
}
void division(float x,float y){
    if (y==0){
       cout<<"we cant divide any integer by 0";
    }
    else {
        cout<<x/y;
    }    
}
void choice(){
    cout<<"SELECT ANY OPERATION\n";
    cout<<"1.Addition\n";
    cout<<"2.Subtraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.division\n";
}
int main (){
    long long x,y;
    int a;
    cout<<"***WELCOME TO SIMPLE CALCULATOR***\n";
    cout<<"Enter the first number:";
    cin>>x;
    cout<<"Enter the second number:";
    cin>>y;
    choice();
    cout<<"Enter your choice:";
    cin>>a;
    switch (a){
    case 1:
        sum(x,y);
        break;
    case 2:
        subtraction(x,y);
        break;
    case 3:
        multiplication(x,y);
        break;
    case 4:
        division(x,y);
        break;        
    default:
        cout<<"Invalid choice";
        break;
    }
    cout<<"\nthank you for use our calculator";
}