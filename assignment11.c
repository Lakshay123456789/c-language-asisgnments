#include<stdio.h>
#include "assignment10.c"
int HCF(int,int);
int LCM(int,int);
int isprime(int);
void isprimeN(int);
int isprimenext(int);
void isprimebetween(int ,int);
void series(int);
int square(int);
void pascaltraingle(int);
void sumseries(int);
 main(){

     //question 1
 /*int a,b;
  scanf("%d%d",&a,&b);
  int c=HCF(a,b);
 printf("%d",c);

 //question 2
 /*int a,b;
  scanf("%d%d",&a,&b);
  int c=LCM(a,b);
 printf("%d",c);

 // question 3
 int n;
 scanf("%d",&n);
 int c=isprime(n);
  if(c==1)
    printf("given number is prime");
  else
    printf("given number is not prime");

    //question 4
    int n;
 scanf("%d",&n);
 int c=isprimenext(n+1);
    printf("the next prime number is %d ",c);


    //question 5
    int n;
 scanf("%d",&n);
 isprimeN(n);


 //question 6
 int a,b;
  scanf("%d%d",&a,&b);
  isprimebetween(a,b);

  //question 7
  int n;
 scanf("%d",&n);
 series(n); */

 // question 8
 int n;
 scanf("%d",&n);
 pascaltraingle(n);

 //question 9
 /*int n;
 scanf("%d",&n);
 int c=square(n);
 printf("%d",c);

 //question 10
 int n;
 scanf("%d",&n);
 sumseries(n); */

   }
   int HCF(int b,int a){
  int min=a>b?b:a;
  for(int i=min;i>=1;i--){
    if(a%i==0 && b%i==0)
        return i;
  }
}
int LCM(int b,int a){
  int max=a<b?b:a;
  for(int i=1;i<=a*b;i++){
    if(max%a==0 && max%b==0)
        return max;
        max++;
  }
}
int isprime(int n){
    int i;
 for(i=2;i<n;i++){
    if(n%i==0)
        break;
 }
 if(n==i)
    return 1;
    return 0;
}
int isprimenext(int n){
    int i;
    while(1){
 for(i=2;i<n;i++){
    if(n%i==0)
        break;
 }
 if(n==i)
    return n;
    n++;
}
}
void isprimeN(int n){
    int i,count=n;
    n=2;
    while(count){
 for(i=2;i<n;i++){
    if(n%i==0)
        break;
 }
 if(n==i){
    printf("%d ",i);
    count--;
 }
    n++;
}
}
void isprimebetween(int a,int b){
    int i;
    while(a<=b){
 for(i=2;i<a;i++){
    if(a%i==0)
        break;
 }
 if(a==i){
    printf("%d ",i);
    }
    a++;
}
}
void series(int n){
    int a,b,c=0;
    a=-1;
    b=1;
    while(n){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;
    }
}
int square(int n){
return n*n;
}


void pascaltraingle(int n){
int i;
for(i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i>=j)
     printf("%d",Combinations(i,j));
    }
    printf("\n");
}

}
 void sumseries(int n){
     int i,sum=0;
     for(i=1;i<=n;i++){
        sum=sum + fact(i)/i;
     }
     printf("%d",sum);

 }
