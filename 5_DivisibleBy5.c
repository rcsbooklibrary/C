#include<stdio.h>
void main()
{
        signed int x=0;
        printf("Enter a number\n");
        scanf("%d",&x);
        printf("You entered %d\n",x);
        if(x%5 == 0){
                printf("divisiblae by 5\n");
        }else{
                printf("not divisibale by 5\n");
        }
}
