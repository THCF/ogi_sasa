#include <stdio.h>
#include <float.h>
#include <limits.h>
int main()
{	int f;
	int triangle_input;
	float s1,s2,s3;
	int p;
	do
	{
		printf("Please enter the number of triangles to check: " );
		//scanf("%d",&triangle_input);
		if(scanf("%d",&triangle_input) == EOF )
		{     printf("\n ");
			break;
		}
		
// 		if((triangle_input <1|| triangle_input > UCHAR_MAX))4
		{
			 printf("[ERR] Invalid number of triangles.\n");
			 
		 }
		for(p=1; p<=triangle_input;p++)
		{
		printf("Please enter the first number of the triplet: " );
		scanf("%f",&s1);
		printf("Please enter the second number of the triplet: " );
		scanf("%f",&s2);
		printf("Please enter the third number of the triplet: " );
		scanf("%f",&s3);
	
		if(((s1||s2||s3) < 0.0) || ((s1||s2||s3) >FLT_MAX) || f==1)  
		{
		printf("[ERR] Invalid number for the triplet.\n");
			
		printf("Please enter the first number of the triplet:" );
		scanf("%f",&s1);
		printf("Please enter the second number of the triplet:" );
		scanf("%f",&s2);
		printf("Please enter the third number of the triplet:" );
		scanf("%f",&s3);
		}
		

			
			
			
		}
	 }
		while((triangle_input <1) || (triangle_input > UCHAR_MAX));
	
	return 0;
}
 
