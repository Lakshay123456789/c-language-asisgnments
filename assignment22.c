#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void length(int n); // Question 1
void userinput(int);// question 2
void sum(int);      // Question 3
char* input();      // Question 4
void sum1();        // Question 5
void largest();     // Question 6
void leakmemory();   // Question 7
int* danglingpointer();  // Question 8
void usermemory();       // Question 9
int* findminmax();       // Question 10
int main(){
    /*
printf("entre the numbers ");
int n;
scanf("%d",&n);
length(n); */
//int n;
//printf("how many number you entered\n");
//scanf("%d",&n);
//userinput(n);
//sum(n);

//char *p=input();
//printf("%s",p);
//largest();
//leakmemory();
//int *p=danglingpointer();
//printf("%d",*p);
//usermemory();
//int *p=findminmax();
//printf("largest number is %d\n smallest number is %d",p[0],*(p+1));
char *str,c;
int i=0,j=1;
str=(char*)malloc(sizeof(char));
printf("enter string:- ");
while(c!='\n'){
    c=getc(stdin);
    j++;
    str=(char*)realloc(str,j*sizeof(char));
    str[i]=c;
    i++;
}
str[i]='\0';
printf("\nThe entered string is : %s",str);
free(str);
return 1;
}

                              //Question 1
void length(int n){
char str[n];
fflush(stdin);
char *p=malloc(n);
printf("enter string");
fgets(str,n,stdin);

 strcpy(p,str);

 printf("%s",p);
free(p);
p=NULL;
}
void userinput(int n){
int i,sum=0;
float f;
int *p=(int*)calloc(n,sizeof(int));
if(p==NULL){
    printf("memory Allocation Failed\n");
    exit(0);
}
printf("entre the %d values",n);
for(i=0;i<n;i++)
    scanf("%d",p+i);
for(i=0;i<n;i++)
    sum+=*(p+i);
f=sum/n;
printf("%f",f);
free(p);
p=NULL;
}
void sum(int n){

int i,sum=0;
int *p=(int*)malloc(n*sizeof(int));
printf("entre the %d values",n);
for(i=0;i<n;i++)
    scanf("%d",p+i);
for(i=0;i<n;i++)
    sum+=*(p+i);
    printf("sum is %d number %d",n,sum);
    free(p);
    p=NULL;
}
void sum1(int n){

int i,sum=0;
int *p=(int*)calloc(n,sizeof(int));
printf("entre the %d values",n);
for(i=0;i<n;i++)
    scanf("%d",p+i);
for(i=0;i<n;i++)
    sum+=*(p+i);
    printf("sum is %d number %d",n,sum);
    free(p);
    p=NULL;
}
char* input(){

char n;
char *p=(char*)malloc(30*sizeof(char));
printf("entre the string\n");
gets(p);
return p;
}
void largest(){

int *p=(int*)malloc(2*sizeof(int));
printf("enter the two numbers");
scanf("%d",p);
scanf("%d",p+1);
*p>*(p+1)?printf("largest number %d",*p):printf("largest number is %d",p[1]);
free(p);

}
void leakmemory(){

int *p=(int*)malloc(2*sizeof(int));
printf("enter the two numbers");
scanf("%d",p);
scanf("%d",p+1);
*p<*(p+1)?printf("smallest is number %d",*p):printf("smallest number is %d",p[1]);


}
int* danglingpointer(){

int x=5;
int *p;
{
    int y;
    p=&y;
}
*p=6;
return p;


}
void usermemory(){
int n,t;
printf("choose any\n");
printf("1 for char\n");
printf("4 for int\n");
printf("8 for double\n");
scanf("%d",&n);
system("cls");

switch(n){
case 1:
    printf("how many block you  char type");
    scanf("%d",&t);
char *p=(char*)malloc(t*sizeof(char));
break;
case 4:
    printf("how many block you create int type");
    scanf("%d",&t);
 int *q=(int*)malloc(t*sizeof(int));
 break;
 case 8:
     printf("how many block you create double type");
    scanf("%d",&t);
 double *r=(double*)malloc(t*sizeof(double));
 break;
 default:
    printf("invalid choice");
    break;

}
}
int* findminmax(){
    int i,n;
int *p=(int*)malloc(2*sizeof(int));
printf("how many element you entered\n");
scanf("%d",&n);
int *q=(int*)calloc(n,sizeof(int));
printf("entre the elements\n");
for(i=0;i<n;i++)
    scanf("%d",q+i);
p[0]=q[0];
p[1]=q[0];
for(i=1;i<n;i++){
    if(p[0]<q[i]){
        p[0]=q[i];
    }
     if(p[1]>q[i]){
        p[1]=q[i];
    }
}
return p;
}

