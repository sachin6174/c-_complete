// #include <iostream>
// using namespace std;
//default constructor

class fraction{
    int numerator;
    int denominator;


    public:
    // default constructors
    //jo constructor apne aap banta hai jo dikhta nahi usme  cout<<"default constructor called!"<<endl; nahi hota to kuch nahi print hota screen par but constructor call jarur hota at the time of creation of a object. 

    // fraction(){
    //   cout<<"default constructor called!"<<endl;
    // }
    fraction( int numerator,int denominator ){
           this-> numerator =numerator;
           this->denominator=denominator;
    }

    void display(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
    int sum(fraction a ,fraction b)
    {
        int sum=(fraction a +fraction b);
        return sum;
        
    }


};
// int main()
// {
    
//     return 0;
// }
