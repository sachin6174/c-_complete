#include <iostream>
using namespace std;
class pairk{

    int a;
    int b;

    public:
    /**********Constructor************/
    pairk(){
        

        cout<<this<<" "<<&(this->a)<<" "<<&(this->b);
    }


    /**********PRINT_ONLY************/
    void show (){
        cout<<a<<" "<<b;
    }

    /*********Setters******************/
    void setValue(int a,int b){
        a=a;
        b=b;

    }

    /**********RETURN_TOO************/
    int first(){
        return a;
    }

    int second(){
        return b;
    }
    // pair both(){
    //     return 
    // }
    // pairk(){
    //     a;
    //     b;
    // }

    

};
