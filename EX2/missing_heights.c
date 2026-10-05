#include <stdio.h>

int main(void)
{
	int h1, h2, h3, avg, mh;
	printf("Enter height 1: ");
	scanf("%d", &h1);
	printf("\nEnter height 2: ");
	scanf("%d", &h2);
	printf("\nEnter height 3: ");
	scanf("%d", &h3);
	printf("\nEnter the calculated average: ");
	scanf("%d", &avg);

	mh = ((avg*5)-h1-h2-h3)/2; //calculating the missing heights ( heights are equal )

	printf("\nThe missing heights are: %d and %d.\n", mh, mh);
}

