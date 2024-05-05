#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // Name of the program
    cout<<"Temprature converter °F to °C (ONLY)" << endl;

    //declearation
    float fahrenheit ;
    float celsius;
    const int subtractor=32;
    const float multiplier= (0.555);

    //dispaly
    cout<<"Enter the value of temprature?";

    //user input
    cin>> fahrenheit;

    //calculations
    celsius=((fahrenheit-subtractor)*(multiplier));

    //output
    cout<< round(celsius)<<"°C";
}