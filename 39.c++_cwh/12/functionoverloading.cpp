#include <iostream>
#include<iomanip>// for using << fixed << setprecision(3) <<
using namespace std;
//we will create two functions
//sme name se many function create kar lo and it will identify automatically which function we want using the arguments given during call of function.//function oyerloading
int sum(int a,int b)
{
    cout<<"using 2 arguments"<<endl;
    return a+b;
}

int sum(int a,int b,int c)
{
    cout<<"using 3 arguments"<<endl;
    return a+b+c;
}

double volume(double r,double h)
{//cylinder
    return ((3.1415926)*r*r*h);
}

double volume(double a)
{//cube
    return (a*a*a);
}

double volume(double l,double b,double h)
{//cuboid
    return (l*b*h);
}


int main()
{
    cout<<"sum of 2,3 is "<<setw(4)<<sum(2,3)<<endl;
    cout<<"sum of 1,2,3 is "<<setw(4)<<sum(1,2,3)<<endl;
    cout<<"volume cylinder " << fixed << setprecision(3) <<setw(4)<<volume(5,5.5)<<endl;
    cout<<"volume cube     " << fixed << setprecision(3) <<setw(4)<<volume(5.5)<<endl;
    cout<<"volume cuboid   " << fixed << setprecision(2) <<setw(4)<< volume(4,4.3,6.7)<<endl;
    return 0;
}