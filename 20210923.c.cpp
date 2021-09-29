#include <stdio.h>

int main()
{
int gz,by,ws,es,wy,yy;//gz=工资，by=百元，ws=伍十，es=贰十，wy=伍元，yy=壹元 
while (2>1)	
	{
	scanf("%d",&gz);
	if (gz<0)
	  break;
	
	by=gz/100;
	ws=(gz-by*100)/50;
	es=(gz-by*100-ws*50)/20;
	wy=(gz-by*100-ws*50-es*20)/5;
	yy=(gz-by*100-ws*50-es*20-wy*5);
	
	printf("%6d%6d%6d%6d%6d%6d\n",gz,by,ws,es,wy,yy);
	}
	return 0;
 } 
