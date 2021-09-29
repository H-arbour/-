#include <stdio.h>
 int main()
 {
 	int x;
    printf("Input integer number:"); 
 	scanf("%d",&x);
 	switch(x){
 		case 1: printf("向着左前方前进!\n");break;
 		case 2: printf("向着正前方前进!\n");break;
 		case 3: printf("向着右前方前进!\n");break;
 		case 4: printf("向着正右方前进!\n");break;
 		case 5: printf("向着右后方前进!\n");break;
 		case 6: printf("向着正后方前进!\n");break;
 		case 7: printf("向着左后方前进!\n");break;
 		case 8: printf("向着正左方前进!\n");break;
 			
 		default:printf("原地不动!\n");	
	 }
 	return 0; 
 }
 
 
 
 
 
