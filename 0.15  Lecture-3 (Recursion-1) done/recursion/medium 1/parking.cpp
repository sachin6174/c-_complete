class ParkingSystem
{

    int big;
    int medium;
    int small;

public:
    ParkingSystem(int big, int medium, int small)
    {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }

    bool addCar(int carType)
    {
        if (carType == 1)
        {
            if (big == 0)
            {
                return false;
            }
            else
            {
                
                big--;
                return true;
            }
        }

        if (carType == 2)
        {
            if (medium == 0)
            {
                return false;
            }
            else
            {
                medium--;
                return true;
                
            }
        }

        if (carType == 3)
        {
            if (small == 0)
            {
                return false;
            }
            else
            {
                small--;
                return true;
                
            }
        }
        // return false;
    }
};




#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    ParkingSystem a (2,1,4);

    int b[]={1,2,3,1,3,2,2,1,3,2};
    cout<<"null"<<" ";
    for (int i = 0; i < 10; i++)
    {
        cout<< a.addCar(b[i])<<" ";
    }
    
   
    return 0;
}






/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */