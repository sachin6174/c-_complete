#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    char str[] = "12,34,5,6,7;3422,45,456";
 
    // Returns first token
    char *token = strtok(str, ";");
   
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        // printf("%s\n", token);
        cout<<token<<endl;
        token = strtok(NULL, ";");
    }
 
    return 0;
}