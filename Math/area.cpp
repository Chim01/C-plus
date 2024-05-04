#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //
    string topic;
    cout << "What would you like to solve?";
    cin>> topic;
    if (topic=="area")
    {
        string shape;
        cout<<"What shape?";
        cin>> shape;
        if (shape=="triangle")
        {
            int base;
            int height;
            cout<< "base:";
            cin>> base;
            cout<< "height:";
            cin >> height;
            cout<< "b= "<< base <<endl;
            cout<< "h= "<< height <<endl;
            int area=0.5*(base*height);
            cout<< "Area="<<area;
        }
        else if (shape=="circle")
        {
            int radius;
            const float pi= 3.142;
            cout<< "radius:";
            cin>> radius;
            cout<< "r= "<< radius <<endl;
            int area=pi*(radius*radius);
            cout<< "Area="<<area;
        }
        
    }
    
}