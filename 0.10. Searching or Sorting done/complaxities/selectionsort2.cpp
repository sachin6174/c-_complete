#include <iostream>
#include <chrono>
using namespace std::chrono;
#include <algorithm>

using namespace std;

//in microseconds

int main()
{
    cout<<"1 micro second is .000001 seconds"<<endl;

    int n; //size of arrays
    cin >> n;
    int *p = new int[n]; // taking array in heap memory


    cout<<endl<<endl;
   
    for (int i = 0; i < n; i++)
    {
        *(p + i) = n - i;
        // cout << *(p + i) << " ";
    }
	
    cout<<endl<<endl;

int swap=0;
int comparisons=0;

 auto start = high_resolution_clock::now();
 
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j=i+1; j < n; j++)
        {
            comparisons++;
            
                if (p[i] > p[j])
                {
                    int temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                    swap++;
                }
                
        }
    }


auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
auto duration2 = duration_cast<seconds>(stop - start);
cout <<"Time taken by function for input size "<<n <<":"<< duration.count() << " microseconds  "<<" and  "<< duration2.count() <<"  seconds"<<endl;
 cout<<endl<<comparisons<<endl;
cout<<endl<<swap<<endl;
delete []p;


    for (int i = 0; i < n; i++)

    {
        cout << *(p + i) << " ";
    }

     return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5]={1};
//     cout<<a[6];// this will give garbadge value
    
//     return 0;
// }




// start = std::chrono::system_clock::now();//start of time calculation
   
//    /*
//     for (int i = 0; i < n; i++)
//     {
//         *(p + i) = n - i;
//         // cout << *(p + i) << " ";
//     }
//     */
//    // this was operation
	
//     end = std::chrono::system_clock::now();

// 	std::chrono::duration<double> elapsed_seconds = end - start;
// 	std::time_t end_time = std::chrono::system_clock::to_time_t(end);//end of time calculation


// 	std::cout <<endl <<"finished computation at " << std::ctime(&end_time)<< "elapsed time: " << elapsed_seconds.count() << "s\n";//print the time 
    
