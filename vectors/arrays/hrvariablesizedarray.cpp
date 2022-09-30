#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    int **p = new int *[n];
    int sizecol;
    for (int i = 0; i < n; i++)
    {
        cout<<endl;
        cin >> sizecol;
        p[i] = new int[sizecol];
        for (int j = 0; j < sizecol; j++)
        {
            cin >> p[i][sizecol];
        }
        

        cout<<endl<<endl;
        for (int j = 0; j < sizecol; j++)
        {
            cout<< p[i][sizecol];
        }
    }

    cout<<endl;
    int ai, aj;
    for (int l = 0; l < q; l++)
    {
        cin >> ai >> aj;
        cout << p[ai][aj] << endl;
    }
    // for (int t = 0; t < q; t++)
    // {
    //     cout<<ai<<" "<<aj;
    //     cout << p[ai][aj] << endl;
    // }

    return 0;
}

/*finally w e understood it well:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q;
    cin>>n>>q;
    int ** p=new int *[n];
    int sizecol;
    for (int i=0; i<n; i++) {
     cin>>sizecol;
     p[i]=new int [sizecol];
     for(int j=0;j<sizecol;j++)
    {
        cin>>p[i][j];
    }
    }
    int ai,aj;
    for (int l=0; l<q; l++) {
     cin>>ai>>aj;
    cout<<p[ai][aj]<<endl;
    }
    return 0;
}
*/

