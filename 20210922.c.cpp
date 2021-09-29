#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	while(2>1)
	
{scanf("%f",&x);

    if (x<=-2)
    y = 2*fabs(x)+1;

    else if (x<=2)
    y = sin(3*x)+pow(x,2);

    else 
    y = 3*log(x)+exp(2*x);
    
    printf("x=%7.2f\n,y=%7.2f\n",x,y);
	 }	 
	return 0;
 } 
