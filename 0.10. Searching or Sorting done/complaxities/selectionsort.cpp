#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std::chrono;

using namespace std;

#include <chrono>


//in seconds 

int main()
{
    std::chrono::time_point<std::chrono::system_clock> start, end;

    int n; //size of array
    cin >> n;
    int *p = new int[n]; // taking array in heap memory


    cout<<endl<<endl;
   
    for (int i = 0; i < n; i++)
    {
        *(p + i) = n - i;
        // cout << *(p + i) << " ";
    }
	
    cout<<endl<<endl;


// milliseconds mil(1000);
	
// 	mil = mil*60;
start = std::chrono::system_clock::now();//start of time calculation

    for (int i = 0; i < n-1; i++)
    {
        for (int j=i+1; j < n; j++)
        {
            
                if (p[i] > p[j])
                {
                    int temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
                
        }
    }
   
end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout << "finished computation at " << std::ctime(&end_time)
			<< "elapsed time: " << elapsed_seconds.count() << "s\n";

    // for (int i = 0; i < n; i++)

    // {
    //     cout << *(p + i) << " ";
    // }

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
    
