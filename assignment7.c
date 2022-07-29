#include<stdio.h>
#include<math.h>
int count1(int n);
int main(){
                                         //question 1
 /*int a,b,n,c=0;
 a=-1;
 b=1;
 scanf("%d",&n);
 while(n){
 c=a+b;
 a=b;
 b=c;
 n--;
 }
 printf("%d",c);

                                         //question 2
 int a,b,n,c=0;
 a=-1;
 b=1;
 scanf("%d",&n);
 while(n){
 c=a+b;
 a=b;
 b=c;
 n--;

 printf(" series %d ",c);
 }

                                         //Question 3

 int a,b,n,c=0;
 a=-1;
 b=1;
 scanf("%d",&n);
 while(1){
 c=a+b;
 a=b;
 b=c;
 if(n==c){
    printf("yes");
    break;
 }
 if(n<c)
{
   printf("No");
   break;
 }
 }


                                    //Question 4

 int a,b,min,i;
 scanf("%d%d",&a,&b);
 min=a>b?b:a;
 for(i=min;i<=a*b;i++){
    if(i%a==0 && i%b==0){
        printf("%d",i);
        break;
    }
 }

                                   //Question 5
       int a,b,i,max;
 scanf("%d%d",&a,&b);
 max=a>b?a:b;
 int coprime=1;
         for(i=2;i<=max;i++){
            if(a%i==0 && b%i==0){
                coprime=0;
                break;
            }}
if(coprime)
    printf("numbers are co-prime");
else
    printf("number are not coprime");


                                    //Question 6

     int i,n=2;
     while(n<100){
        for(i=2;i<n;i++){
            if(n%i==0)
                break;
        }
        if(i==n)
            printf("%d ",i);


            n++;
}

 second way solving

int isprime,n=2;
while(n<=100){
        isprime=1;
    for(int i=2;i<=n/2;++i)
    {
    if(n%i==0)
    isprime=0;
    }
    if(isprime)
        printf("%d ",n);
    n++;

}


                           //Question 7
int isprime,n,b;
scanf("%d%d",&n,&b);
while(n<=b){
        isprime=1;
    for(int i=2;i<=n/2;++i)
    {
    if(n%i==0)
    isprime=0;
    }
    if(isprime)
        printf("%d ",n);
    n++;
}


                            //Question 8

int isprime,n;
scanf("%d",&n);
n++;
while(1){
        isprime=1;
    for(int i=2;i<=n/2;++i)
    {
    if(n%i==0)
    isprime=0;
    }
    if(isprime){
        printf("%d ",n);
        break;
    }
    n++;
}
} */

                                  //Question 9
/*

int i,r,p,n,temp,sum;
p=0;
scanf("%d",&n);
int n1=n;
temp=count1(n);
while(n){
    r=n%10;
    sum=1;
    for(i=1;i<=temp;i++){
        sum*=r;
        }
        p+=sum;
        n=n/10;
}
if(n1==p)
        printf("number is armstrong %d",n1);
else
    printf("number is not ArmStrong %d",n1);

return 1;

*/


                                                 Question 10
int i,r,p,n,sum;
p=0;

scanf("%d",&n);

while(n<=1000)  {
    i= n;
    p=count1(n);
    sum=0;
    while(i){
        r=i%10;
        sum=sum+pow(r,p);
        i=i/10;
    }
    if(n==sum)
        printf("%d\n",n);
    n++;
}
return 0;
}




int count1(int n){
    int count=0;
while(n){
    count++;
    n=n/10;
}
return count;
}
