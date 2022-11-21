#include<iostream>
#include<cmath>
using namespace std;
class first
{
    public:
    char in,p,t,s,r;
    double area,a,b,h;
};
class second: public first
{
    public:
    void input()
    {
        cout<<"For measuring Area, press\n 'P' for Trapezoid\n 'T' for Triangle\n 'S' for Square\n 'R' for Rectangle\n=> ";
        cin>>in;
    }
    void process()
    {
        if(in=='p' || in=='P')//trapezoid
        {
            cout<<"Trapezoid Area Calculation";
            cout<<"\nEnter 1st Base Length= ";
            cin>>a;
            cout<<"Enter 2nd Base Lenght= ";
            cin>>b;
            cout<<"Enter Height= ";
            cin>>h;
            area=0.5*(a+b)*h;
        }
        else if(in=='t' || in=='T')//triangle
        {
            cout<<"Triangle Area Calculation";
            cout<<"\nEnter Base= ";
            cin>>b;
            cout<<"Enter Height= ";
            cin>>h;
            area=0.5*b*h;
        }
        else if(in=='s' || in=='S')//squarre
        {
            cout<<"Square Area Calculation";
            cout<<"\nEnter Length of a side= ";
            cin>>a;
            area=pow(a,2);
        }
        else if(in=='r' || in=='R')//Rectangle
        {
            cout<<"Rectangle Area Calculation";
            cout<<"\nEnter Width= ";
            cin>>a;
            cout<<"Enter Height= ";
            cin>>h;
            area=a*h;
        }
        else
        {
            cout<<"Sorry! Wrong Input.";
        }
        cout<<"Area= "<<area;
    }
};
main()
{
    char x;
    do
    {
        second obj;
        obj.input();
        obj.process();
        cout<<endl<<"Wanna Calculate again Y/N ?"<<endl;
        cin>>x;
    } while (x=='Y' || x=='y');
    
    
}