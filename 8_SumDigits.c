#include<stdio.h>
void main()
{
	long rem,qot,x,d,temp=0;
	printf("Enter a number\n");
	scanf("%lu",&x);
	printf("You entered %lu\n",x);
	while(1){
		rem = x%10;
		d =rem;
		qot = (x/10);
		x = qot;
		if((qot/10) == 0){
			break;	
		}else{
		temp  = temp+rem;
                
		}

	}
	printf("sum of digits is %lu\n",(d+qot+temp));
}
