#include<stdio.h>
void main()
{
	long rem,qot,x,d,temp[6] = {0};
	int i=0;
	printf("Enter a number\n");
	scanf("%lu",&x);
	printf("You entered %lu\n",x);
	while(1){
		rem = x%10;
		d =rem;
		printf("rem-1: %lu\n",d);
		qot = (x/10);
//		temp =qot;
		x = qot;
		printf("qot-1: %lu\n",qot);
		//	printf("R-temp: %lu\n",(temp%10));
		printf("q-temp: %lu\n",(qot/10));
		if((qot/10) == 0){
			break;	
		}else{
		temp[i]  = rem;
                i++;
		}

	}
	printf("sum of digits is %lu\n",(d+qot+temp[0]+temp[1]+temp[2]+temp[3]+temp[4]+temp[5]));
}
