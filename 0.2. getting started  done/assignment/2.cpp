#include <iostream>
#include <bitset>// giving binary just for intezers;
using namespace std;


// void bin(long n)
//   {
//     long i;
//     cout << "0";
//     for (i = 1 << 30; i > 0; i = i / 2)
//     {
//       if((n & i) != 0)
//       {
//         cout << "1";
//       }
//       else
//       {
//         cout << "0";
//       }
//     }
//   }

int main()
{
    // string binary = bitset<8>(10).to_string();
    cout << bitset<32>(.7)<< endl;
    // bin(1474836460);
    return 0;
}