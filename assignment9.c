#include<stdio.h>
int main(){

           //Question 1
/*
int n;
printf("choose the month number");
scanf("%d",&n);
switch(n){

case 1:
printf("%d",31);
break;

case 2:
printf("%d",28);
break;

case 3:
printf("%d",31);
break;

case 4:
printf("%d",30);
break;

case 5:
printf("%d",31);
break;

case 6:
printf("%d",30);
break;

case 7:
printf("%d",31);
break;

case 8:
printf("%d",30);
break;

case 9:
printf("%d",30);
break;

case10:
printf("%d",31);
break;

case11:
printf("%d",30);
break;

case12:
printf("%d",31);
break;
} */

             //Question 2

int choice,a,b;
while(1)
{
system("cls");
printf("                                              Menu Table Program");
printf("\n1 Addition");
printf("\n2 subtraction");
printf("\n3 Multiplication");
printf("\n4 division");
printf("\n5 Exist\n");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("sum is %d ",a+b);
break;
case 2:
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("subtract is %d ",a-b);
break;
case 3:
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("multiply is %d ",a*b);
break;
case 4:
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("division is %d ",a/b);
break;
case 5:
printf("Press any Key to exist");
getch();
exit(0);
default:
printf("Invalid input");
}
getch();
}
return 0;
}
