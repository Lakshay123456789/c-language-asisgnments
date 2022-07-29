#include<stdio.h>
int sumNationa(int); // question 1
int oddNatural(int); // question 2
int evenNatural(int); // question 3
int squareNatural(int); // question 4
int sumdigits(int); // question 5
int factorial(int); // question 6
int series(int); // question 7
int HCF(int); // question 8
int countdigits(int); // question 9
int Power(int,int); // question 10

int main(){
 /* int n;
scanf("%d",&n);

 int a=sumNatural(n);
printf("%d",a);
printf("\n");

int b=oddNatural(n);
printf("%d",b);
printf("\n");

int c=evenNatural(n);
printf("%d",c);
printf("\n");

int d=squareNatural(n);
printf("%d",d);
printf("\n");

int e=sumdigits(n);
printf("%d",e);
printf("\n");

int f=factorial(n);
printf("%d",f);
printf("\n");

int g=series(n);
printf("%d",g); */

int a,b;
scanf("%d%d",&a,&b); /*
int min=a<b?a:b;
int c =HCF(a,b,min);
printf("%d",c);
printf("\n");

int h=countdigits(n);
printf("%d",h);
printf("\n"); */

int k=Power(a,b);
printf("%d",k);
printf("\n");

return 0;
}


int sumNatural(int n){
if(n==0)
return ;
return n+sumNatural(n-1);
}
int oddNatural(int n){
if(n==0)
    return ;
return 2*n-1 + oddNatural(n-1);
}
int evenNatural(int n){
if(n==0)
    return ;
return 2*n + evenNatural(n-1);
}
int squareNatural(int n){
if(n==0)
    return ;
return n*n + squareNatural(n-1);
}
int sumdigits(int n){
if(n<=9)
    return n;
return n%10 + sumdigits(n/10);
}
int factorial(int n){
if(n==0 || n==1)
    return 1;
return n*factorial(n-1);
}
int series(int n){
if(n==1 || n==2)
    return 1;
return series(n-1)+series(n-2);
}
int HCF(int a,int b,int min){
if(a%min ==0 && b%min==0)
    return min;
    return HCF(a,b,min-1);

}
int countdigits(int n){
    int a=0;
if(n<=9)
    return 1;
       a=countdigits(n/10);
        a++;
        return a;
}
int Power(int a,int b){
if(b==1)
    return a*b;
return a*Power(a,b-1);

}
