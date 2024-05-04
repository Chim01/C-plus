#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    cout<<"Hello,";
    cout<<"I'm Chimbueze David "<< endl;
    cout<<"a student of ABUAD "<< endl;
    cout<<"I'm 17 years of age"<<endl;
    
    
    int x ;
    cout<< "Enter the value of x";
    cin>> x;

    int y;
    cout<< "Enter the value of y";
    cin>> y;

    int sum = x+y;
    cout<<"Sum = "<< sum <<endl;


    double a=11.9;
    double b= 9.1;
    int sumation= a+b;
    cout<< sumation<<endl;

    string myName = "I'm Okoroji Chimbueze David, 'COD'. I'm a lover of God and of his presence. I love God because he first love me";
    cout<<myName<< endl;

    string fullName;
    cout << "Type your full name: ";
    cin>>fullName;
    getline (cin, fullName);
    cout << "Your name is: " << (fullName)<< endl;
}