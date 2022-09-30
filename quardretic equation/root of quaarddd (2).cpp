/*wap to find roots of quardratic equation*/
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main(){ double a, b, c, discriminant, root1, root2, realPart, imagPart;
            printf("Enter coefficients a:");
            scanf("%lf",&a);
            printf("Enter coefficients b:");
            scanf("%lf",&b);
            printf("Enter coefficients c:");
            scanf("%lf",&c);
			discriminant = b * b - 4 * a * c;
    if (discriminant > 0) { root1 = (-b + sqrt(discriminant)) / (2 * a);
                            root2 = (-b - sqrt(discriminant)) / (2 * a);
                            printf("\n root1 = %.5lf ", root1 );
							printf("\n root2 = %.5lf ", root2 );               }
    else if (discriminant == 0) {   root1 = root2 = -b / (2 * a);
                                    printf("root1 = root2 = %.5lf;", root1);   }
    else {   realPart = -b / (2 * a);
             imagPart = sqrt(-discriminant) / (2 * a);
             printf("\n root1 = %.5lf+%.5lfi ", realPart, imagPart);
		     printf("\n root2 = %.5lf-%.5lfi ", realPart, imagPart);       }
    return 0;
    //created by indian                                                            
                                                                                   }
