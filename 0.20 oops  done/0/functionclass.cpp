class fraction{

int numerator;
int denominator;

public:

fraction(int numerator, int denominator){
this->numerator=numerator;
this->denominator=denominator;


}
void simplify(){
int p=0;
int d=0;
for (int gcd= min(this->numerator,this->denominator)  ; d<1 ; gcd--)
{
    if(this->numerator%gcd==0&&this->denominator%gcd==0){
        // cout<<gcd<<endl;
        d++;
        p=gcd;     
    }

}
// cout<<p<<endl;
this->numerator=this->numerator/p;
this->denominator=this->denominator/p;

}

void display(){
    cout<<this->numerator<<"/"<<this->denominator;
}

void add(fraction const &f2){
    
this->numerator=(f2.denominator*this->numerator)+(this->denominator*f2.numerator);
this->denominator= (this->denominator)*(f2.denominator) ;
simplify();
display();

}
void multiply(fraction f2){
    this->numerator =(this->numerator)* (f2.numerator);
    this->denominator =(this->denominator)* (f2.denominator);
    simplify();
    display();

}

    
};