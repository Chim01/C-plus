#include<iostream>
#include<string>
#include<vector>
#include<cmath>
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
        else if (shape=="rectangle")
        {
            int lenght;
            int breadth;
            cout<< "lenght:";
            cin>> lenght;
            cout<< "breadth:";
            cin >> breadth;
            cout<< "l= "<< lenght <<endl;
            cout<< "b= "<< breadth <<endl;
            int area=(lenght*breadth);
            cout<< "Area="<<area;
        }
        else if (shape=="square")
        {
            int lenghtA;
            int lengthB;
            cout<< "l1:";
            cin>> lenghtA;
            cout<< "l2:";
            cin >> lengthB;
            cout<< "l= "<< lenghtA <<endl;
            cout<< "b= "<< lenghtB <<endl;
            int area=(lenghtA*lengthB);
            cout<< "Area="<<area;
        }
        
        
        
    }
    
}