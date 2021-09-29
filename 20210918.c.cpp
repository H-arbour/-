#include <stdio.h> 
#include <math.h>

int main()
{
	int a, b, c, da;
	float x,x1, x2;  
	while (3 > 2) 
	{scanf("%d%d%d", &a, &b, &c);
	if (a == -888)
	    break;

	da = b*b - 4 * a*c;
	if (da < 0)
		printf("no root!");
	if (da==0)
		{
		x=(-b+sqrt(da))/(2*a);
		printf("x=%7.2f\n",x);}
	if (da>0){
		x1 = (-b + sqrt(da)) / (2 * a);
	    x2 = (-b - sqrt(da)) / (2 * a);
		printf("x1=%7.2f,x2=%7.2f\n",x1,x2);}
	}
	return 0;
}

