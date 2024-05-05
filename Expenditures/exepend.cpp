#include<iostream>
using namespace std;
int main(){
    // parameters
    int income= 1000000;
    int expenditure= 0.02*income;
    int total_profit= income-expenditure;
    cout<< "Income= ₦ "<< income<<"\n";
    cout<< "expenditure= ₦ "<< expenditure<< "\n";
    cout<< "Profit= ₦ "<< total_profit;
    return 0;
}