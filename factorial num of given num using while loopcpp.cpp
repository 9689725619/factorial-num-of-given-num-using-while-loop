#include<stdio.h>
int main()
{

int num,fact=1;

printf("\n Enter the number");
scanf("%d",&num);

while(num>0){
	
	fact=fact*num;
	num--;
	
}
printf("the factorial of number %d  is %d", fact);
return 0;
}
