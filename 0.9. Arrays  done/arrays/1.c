# include<stdio.h>

//making structure

//abstract data type like inta;
// like struct myarray  a; //   struct myarray is a complete 
struct myarray       //structure are used to make custom data type
{
    int Total_size;//reserving memory for the variable
    int used_size;//reserving memory for the variable
    int *ptr;// pahle element ko point karne wala pointer
};


int sum(int a, int b , int c,int *d)
{
    return a+b+c+*d;
}
void create createarray(struct myarray *a ,int tsize ,int us)
{

}

int main()
{
    struct myarray marks;
    
    int k;
    k=*d;
    sum(5,6,7,*d);
    return 0;
}