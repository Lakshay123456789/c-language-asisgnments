#include<stdio.h>
int main(){
 //question 1
 int n;
 scanf("%d",&n);

/*  //question 1
   natural(n);
  printf("\n");

  // question 2
  naturalreverse(n);
  printf("\n");

  //question 3
  oddnu(n);
  printf("\n");

  //question 4
 oddreverse(n);
  printf("\n");

  //question 5
  evennu(n);
  printf("\n");

  //question 6
  evenreverse(n);
  printf("\n");

  //question 7
  square(n);
  printf("\n");

  //question 8
  int c=binary(n);
  printf("%d",c);
  printf("\n");

  //question 9
  int d=octal(n);
  printf("%d",d); */
 // printf("\n");

 //question 10
  int e=reverse(n);
  printf("%d",e);
}
void natural(int n){
if(n>0){
natural(n-1);
printf("%d ",n);
}
}
void naturalreverse(int n){
if(n>0){
printf("%d ",n);
natural(n-1);
}
}
 void oddnu(int n){
if(n>0){
    oddnu(n-1);
    printf("%d ",2*n-1);
}
}
 void oddreverse(int n){
if(n>0){
    printf("%d ",2*n-1);
    oddnu(n-1);
}
}
void evennu(int n){
if(n>0){
    evennu(n-1);
    printf("%d ",2*n);
}
}
void evenreverse(int n){
if(n>0){
    printf("%d ",2*n);
    evenreverse(n-1);

}
}
void square(int n){
if(n>0){
    square(n-1);
    printf("%d ",n*n);
}
}
int binary(int n){
    if(n==0 || n==1)
        return n;
int c=binary(n/2);
printf("%d",c);
return n%2;
}
int octal(int n){
    if(n<=7)
        return n;
int c=octal(n/8);
printf("%d",c);
return n%8;
}
int reverse(int n){
    if(n<10)
        return n;
    printf("%d",n%10);
    return reverse(n/10);
}

