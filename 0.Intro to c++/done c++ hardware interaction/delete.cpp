// #include <stdio.h>
#include <iostrem>
using namespacestd;

int main()
{
    if (remove("C:\\Users\\SACHIN-ART\\Desktop\\delete.txt") != 0)
        perror("Error deleting file");
    else
        puts("File successfully deleted");
    return 0;
}