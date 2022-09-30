#include <iostream>
//2,147,483,647
using namespace std;

int first_index_ls(int *a, int n, int x)
{
    for (size_t i = 0; i < n; i++)
    {
        {
            if (a[i] == x)
            {
                return i;
            }
        }
    }
    return -1;
}
int last_index_ls(int *a, int n, int x)
{
    for (size_t i = 0; i < n; i++)
    {
        {
            if (a[n-1-i] == x)
            {
                return n-1-i;
            }
        }
    }
    return -1;
}

int last_index_ls_recursively(int *a, int n, int x){
    if(n==0){
        return -1;
    }
    int temp=a[n-1];
    int small =last_index_ls_recursively(a,n-1,x);
    if (temp==x)
    {
        return n-1;
    }
    else
    {return small;}
    
    
}
int first_index_ls_recursively(int *a, int n, int x){
    if(n==0){
        return -1;
    }
    int temp=a[0];
    int small =first_index_ls_recursively(a+1,n-1,x);
    if (temp==x)
    {
        return 0;
    }
    else
    {return small+1;}
    
    
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    cout <<"first_index_ls "<<first_index_ls(a, n, x);
    cout<<endl;
    cout <<"last_index_ls  "<<last_index_ls(a, n, x);
    cout<<endl;
    cout << last_index_ls_recursively(a, n, x);
    cout<<endl;
    cout << first_index_ls_recursively(a, n, x);
    delete [] a ;

    return 0;
}
/*

8 
2 3 4 5 5 6 6 6 
9
*/