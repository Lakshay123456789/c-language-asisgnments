int main(){


int n,sum=0;
scanf("%d",&n);
// question 1
 /*while(n){
sum+=n;
n--;
}
printf("%d",sum);

// question 2

 while(n){
    sum+=n*2;
    n--;
 }
 printf("%d",sum);

 //question 3
 while(n){
    sum+=n*2-1;
    n--;
 }
 printf("%d",sum);


 //question 4
 for(int i=1;i<=n;i++){
    sum+=i*i;
 }
 printf("%d",sum);

 //question 5
 for(int i=1;i<=n;i++){
    sum+=i*i*i;
 }
 printf("%d",sum);

 //question 6
int i=1;
while(n){
    i*=n;
    n--;
}
printf("factorial of %d is %d",n,i);


//question 7
int i=n;
while(n){
    sum++;
    n=n/10;

}
printf("number digits %d number is %d",i,sum);


//question 8
int i;
for(i=2;i<n;i++){
    if(n%i==0)
        break;
}
if(i==n)
printf("number %d is prime number",n);
else
 printf("number %d is not a prime number",n); */


 //question 9
 int a,b,max;
 printf("Enter two number");
 scanf("%d %d",&a,&b);
 max=a<b?b:a;
 while(max){
    if(max%a==0 && max%b==0)
        break;

    max++;
 }
 printf("%d",max);
return 0;
}
