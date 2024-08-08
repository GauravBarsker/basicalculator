#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
//function display for display the menu
void display(){
    cout<<"**********************************\n";
    cout<<"ARITHMETIC OPERATIONS\n";
    cout<<"1.Addition(+)\n";
    cout<<"2.Subtraction(-)\n";
    cout<<"3.Multiplication(*)\n";
    cout<<"4.Division(/)\n";
    cout<<"5.Exponentiation(^)\n";
    cout<<"6.Modulus(%)\n";
    cout<<"7.Exit\n";
    cout<<"**********************************\n";
    cout<<"Select Any Operation(1-7): ";
}
//to add two numbers
void addition(double num1,double num2){
    cout<<"\n => "<<num1<<" + "<<num2<<" = "<<(num1+num2)<<"\n\n";
}
//to subtract two numbers
void subtraction(double num1,double num2){
    cout<<"\n => "<<num1<<" - "<<num2<<" = "<<(num1-num2)<<"\n\n";
}
//to multiply two numbers
void multiplication(double num1,double num2){
    cout<<"\n => "<<num1<<" * "<<num2<<" = "<<(num1*num2)<<"\n\n";
}
//to divide two numbers
void division(double num1,double num2){
    if (num2==0){
       cout<<"\n => we cant divide any integer by 0\n\n";
    }
    else {
        cout << "\n => " << num1 << " / " << num2 << " = " << fixed << setprecision(2) << (num1 / num2) << "\n\n";
    }    
}
//to find exponentiation
void exponentiation(int num1,int num2){
    cout<<"\n => "<<num1<<" ^ "<<num2<<" = "<<pow(num1,num2)<<"\n\n";
}
//to find remainder
void Modulus(double num1,double num2){
    cout << "\n => " << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << (static_cast<int>(num1) % static_cast<int>(num2)) << "\n\n";
}
//to exit from this program
void exit(){
    cout<<"\n      =====Exiting the program=====";
}
int main (){
    double num1,num2;
    int choice;
    string repeat;
    cout<<"       -----WELCOME TO SIMPLE CALCULATOR-----\n\n";
    do{
        //display the menu
    display();
    cin>>choice;
       if(choice==7) {
        exit();
        break;
       }    
    cout<<"\nEnter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
     switch (choice){
    case 1:
        addition(num1,num2);
        break;
    case 2:
        subtraction(num1,num2);
        break;
    case 3:
        multiplication(num1,num2);
        break;
    case 4:
        division(num1,num2);
        break;
    case 5:
        exponentiation(num1,num2);
        break;
    case 6:
        Modulus(num1,num2);
        break; 
    case 7:
        exit();
        break;                   
    default:
        cout<<"\nInvalid Choice. Please Select A Valid Operation(1-7)\n\n";
        break;
    }
    cout<<"Do you want of perform another operation?(yes/no): ";
    cin>>repeat;
    cout<<"\n";

    }while(repeat=="yes" || repeat=="Yes" || repeat=="YES");

      if(repeat=="no" || repeat=="NO"){
        cout<<"      =====Exiting the program=====";
    }  
}
