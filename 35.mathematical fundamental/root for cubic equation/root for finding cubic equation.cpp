#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	int coeff3, coeff2, coeff1, coeff0;
	int res;
	int i;
	int res1, res2, res3, res4;
	int discriminant;
	int root2, root3;
	int sqrtDiscriminant;
	
	
	cout << "\nEnter all the co-efficients of the cubic equation in descending order: ";
	cin >> coeff3 >> coeff2 >> coeff1 >> coeff0;
	
	//finding the 1st root  by trial and error method
		for(i = 0; i < 10; i++)
		{
			res = (pow(i, 3) * coeff3) + (pow(i, 2) * coeff2) + (i * coeff1) + (coeff0);
			if(res == 0)
			{
				break;
			}
				
			else continue;
		}
		
		for(i = -10; i < 0; i++)
		{
			res = (pow(i, 3) * coeff3) + (pow(i, 2) * coeff2) + (i * coeff1) + (coeff0);
			if(res == 0)
			{
				break;
			}
				
			else continue;
		}
		
	
	//Applying synthetic division and reducing cubic to quadratic eqaution
	res1 = (i * 0) + coeff3;
	res2 = (res1 * i) + coeff2;
	res3 = (res2 * i) + coeff1;
	res4 = (res3 * i) + coeff0;
	
	cout << "\nThe reduced co-efficients of quadratic equation are: ";
	cout << res1 << "\t" << res2 << "\t" << res3 << "\t" <<res4; 
	
	//Solving the reduced Quadratic equation using the quadratic formula
	discriminant = ((res2 * res2) - (4 * res1 * res3));
	
	sqrtDiscriminant = sqrt(discriminant);
	
	
	root2 = ((-1 * res2) - (sqrtDiscriminant)) / (2 * res1);
	
	root3 = ((-1 * res2) + (sqrtDiscriminant)) / (2 * res1);
 
	cout << "\nThe first root found out by trial and error is: " << i << endl;
	
	cout << "\nThe second root found out by using the quadratic formula is: " << root2 << endl;
		
	cout << "\nThe third root found out by using the quadratic formula is: " << root3 << endl;
	
	return 0;
}
