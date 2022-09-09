class complex{
int real_part;
int imaginary_part;
public:

complex(int real_part,int imaginary_part){

this->real_part=real_part;
this->imaginary_part=imaginary_part;

}

void display(){
    cout<<this->real_part<<"+"<<"("<<this->imaginary_part<<")"<<"i"<<endl;

}

void sum(complex n2){
    this->real_part=this->real_part+n2.real_part;
    this ->imaginary_part=this ->imaginary_part +n2.imaginary_part;

}

void multiply(complex n2){
    this->real_part=(this->real_part*n2.real_part)-(this->imaginary_part*n2.imaginary_part);

    this->imaginary_part=((this->real_part*n2.imaginary_part)+(this->imaginary_part*n2.real_part));

}


};