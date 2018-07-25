/* compile using 
   'gcc -o ptr1 ptr1.c -lm' */

/*finding the average of an array using recursion and rounding off to the nearest whole number*/

#include <stdio.h>
#include <math.h>
int referptr(int *valptr,size_t count);
int average(int *values, size_t count);
int sum =0;
int cnt;

void main()
{
	int y;
	int val[] = {5,25,50,75};
	//	referptr(val,5);
	/*Way to find the number of elements in any array - sizeof(val)/sizeof(val[0])  */
	y = average(val,sizeof(val)/sizeof(val[0]));
	printf("Average is %d\n", y);
}

int referptr(int *valptr,size_t count)
{
	int x=0;
	for(x=0;x<4;x++)
	{
		printf("%d\n",*(valptr+x));
	}
	return 0;
}

int average(int *values, size_t count)
{
	float avg=0;
	if(count!= 0){
		sum = sum + *(values+count-1);
		count--;
		average(values, count);
		cnt++;
		avg = (sum/(double)cnt);
	}
	//	if(cnt != 0){
	/*Ways to round off*/
	//	avg = 1+((sum-1)/cnt);
	avg = round(avg);
	//	avg = ((sum+cnt-1)/cnt);
	//	}
	return avg;

}
