

int sum(int,int);
int simpleInterset(int p,int t,int r);
int tocheck(int n);
void national(int n);
void oddnu(int n);
int fact(int);
int Combinations(int,int);
int Arrangement(int,int);
void checknu(int n,int r);
void primefactors(int);

 /*int main(){
                   //question 1
int a,b,c;
 scanf("%d%d",&a,&b);
c=sum(a,b);
printf("%d",c);

               //Question 2

int p,t,r;
printf("enter principal,time and rate\n");
scanf("%d%d%d",&p,&t,&r);
int s=simpleInterset(p,t,r);
printf("%d",s);

//question 3
int n;
scanf("%d",&n);
int c=tocheck(n);
if(c==1)
    printf("number is odd");
else
    printf("number is even");

    //Question 4
   int n;
scanf("%d",&n);
national(n);


     //Question 5
      int n;
scanf("%d",&n);
oddnu(n);

     //Question 6
      int n;
scanf("%d",&n);
int c=fact(n);
printf("%d",c);

 // Question 7
        int n,r;
 scanf("%d%d",&n,&r);
  int c=Combinations(n,r);
 printf("%d",c);

           //Question 8
   int n,r;
 scanf("%d%d",&n,&r);
  int c=Arrangement(n,r);
   printf("%d",c);

               //Question 9
    int n,r;
 scanf("%d%d",&n,&r);
 checknu(n,r);

               //question 10
  int n;
 scanf("%d",&n);
    primefactor(n);




return 0;
} */

 // all functions

int sum(int a,int b){
return a+b;
}
int simpleInterset(int p,int t,int r){
return p*t*r/100;
}
int tocheck(int n){
 return n&1;
}
void national(int n){
    int i=1;
 while(i<=n){
   printf("%d ",i);
   i++;
 }
}
void oddnu(int n){
    int i=1;
    while(i<=n){
        printf("%d ",2*i-1);
        i++;
    }

}
int fact(int n){
    int f=1;
if(n==0 || n==1)
    return 1;
    while(n){
        f*=n;
        n--;
    }
return f;
}
int Combinations(int n,int r){
return fact(n)/(fact(r)*fact(n-r));
}
int Arrangement(int n,int r){
 return fact(n)/fact(n-r);
}

void checknu(int n,int r){
int p;
  while(n){
    p=n%10;
    if(p==r){
        printf("yes");
        break;
    }
    n=n/10;
  }

}
void primefactor(int n){
int i=2;
while(n!=1){
    if(n%i==0){
        printf("%d ",i);
        n=n/i;
    }
else
    i=prime(i+1);
}

}
int prime(int n){
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
