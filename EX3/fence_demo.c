#include <stdio.h>

int main(void)
{
	float p, l, w; //perimeter, length and width
        printf("Enter the perimeter: ");
        scanf("%f", &p);
	
	l = (2*p)/7; //since w=(3/4)*l --> p/2 = l+(3/4)*l ...
		  
	w = (3*p)/14; //since w=(3/4)*l --> w=(3/4)*(2*p)/7 ...

	printf("\nLength : %.2f", l);
	printf("\nWidth  : %.2f\n", w);
}	
	
              
