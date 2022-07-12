#include <iostream>
//2,147,483,647
using namespace std;
#include <vector>
//wrong

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> bv;

        for (int i = 0; i < candies.size(); i++)
        {

            for (int j = 0; j < candies.size(); j++)
            {

                if ((candies[i] + extraCandies) >= candies[j])
                {
                    bv.push_back(true);
                    break;
                }
                
            }
            if(bv.size()==0){
                 bv.push_back(false);
            }
           
        }
        return bv;
    }
};

int main()
{

    return 0;
}
