# include<stdio.h>

int pointer(int *a,int b)
{
    a=&b;
   return printf("%d",&a);
}

int sum(int a, int b , int c)
{
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d",&c);

    return a+b+c;
}


int main(){
    int j;
    int k;
    int l; 
    int *p;
    int r;

    // scanf("%d\n",&j);
    // scanf("%d\n",&k);
    // scanf("%d",&l);
    printf("\n%d\n",sum(j,k,l));  

    int k2= pointer(p,r);
    printf("\n%d",k2);  

    return 0;
}