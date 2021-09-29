#include <stdio.h>
#include <math.h>

int main()
{
float x,y;
while (3>2)
{scanf("%f",&x);
if (x==-999)
break;

if (x>=3)
y=2*x*x-2;

else if (x>=2)
y=exp(x)+8;

else if (x>=0)
y=2*log(x)-3;

else
y=2*sin(x)+cos(3*x);

printf("x=%7.2f\n,y=%7.2f\n",x,y);
}
	return 0;
 } 
