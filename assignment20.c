#include<stdio.h>
void swapstring(char*,char*);
int main(){

/*
int a,b;
printf("Enter two number");
scanf("%d%d",&a,&b);
printf("%d %d\n",a,b);
swap(&a,&b);
printf("%d %d",a,b); */
                                // question 2
/*char str1[30]="lakshay";
char str2[30]="lavish";
swapstring(str1,str2);
printf("%s\n",str1);
printf("%s",str2*/



/*                              // Question 3
int i,size;
scanf("%d",&size);
int a[size];
for(i=0;i<size;i++)
    scanf("%d",&a[i]);
sort(a,size);
for(i=0;i<size;i++)
    printf("%d ",a[i]);*/


  /*                            //Question 4
 int a=5;
 int *b,**c,***d;

 b=&a;
 c=&b;
 d=&c;
 //printf("%d %d %d",*b,**c,***d);
// printf("%d ",&b);
// printf("%d %d %d",**d,****&d,*c);

*/

    /*                       // Question 5
 int a,b;
 scanf("%d%d",&a,&b);
 int *p=&a;
 int *q=&b;
*p>*q?printf("largest number %d",*p):printf("largest number %d",*&b);*/


                        // Question 6
/*
char str1[30];
fgets(str1,30,stdin);
int i=lengthstring(str1);
printf("%d",i-1); */

  /*                         // Question 7
char str1[30];
fgets(str1,30,stdin);
//gets(str1);
countvowelconstant(str1);  */

/*
                               // Question 8
int i,size;
scanf("%d",&size);
int a[size];
for(i=0;i<size;i++)
    scanf("%d",&a[i]);
printf("%d",sumarray(a,size)); */


                                         // Question 9

int i,size;
scanf("%d",&size);
int a[size];
for(i=0;i<size;i++)
    scanf("%d",&a[i]);
arrayreverse(a,size);
for(i=0;i<size;i++)
    printf("%d ",a[i]);

                                       // Question 10
/*
char str1[30];
fgets(str1,30,stdin);
stringreverse(str1);
printf("%s",str1); */




return 1;
}
void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}                                       // Question 2
void swapstring(char *p1,char *p2){
char str3[30];
/*strcpy(str3,p1);
strcpy(p1,p2);
strcpy(p2,str3);*/

int i;
for(i=0;*(p1+i);i++){
    str3[i]=i[p1];
    i[p1]='\0';
}
for(i=0;*(p2+i);i++){
    p1[i]=p2[i];
    p2[i]='\0';
}
for(i=0;str3[i];i++)
p2[i]=str3[i];

}

                                                         // Question 3
 void sort(int *p,int size){

 int i,j,temp;
 for(i=0;i<size-1;i++){
    for(j=0;j<size-i-1;j++){
        if(j[p]>p[j+1]){
            temp=j[p];
            j[p]=*(p+j+1);
            p[j+1]=temp;
        }
    }
 }


 }
                                                   // Question 6
int lengthstring(char *p){
 //return strlen(p);

int i=0;
for(i=0;*(p+i);i++);
return i;

}
                           //Question 7
int countvowelconstant(char *p){
char str[20];
int i,j,t=1,count=0,count1=0;
for(i=0;i<strlen(p)-1;i++){
        for(j=0;str[j];j++){
            if(str[j]==p[i])
                t=0;

        }
        if(t!=0){
    if(p[i]=='a'|| p[i]=='e'|| p[i]=='i'|| p[i]=='o'|| p[i]=='u'|| *(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')

             count++;
else
    if((p[i]>'a' && p[i]<='z')||(p[i]>='A' && p[i]<='Z'))
    count1++;
        }

    str[i]=p[i];
    t=1;
}
printf("number of vowels %d\n",count);
printf("number of %d ",count1);
}

                                                 // Question 8
int sumarray(int *p,int size){
int i,sum=0;

for(int i=0;i<size;i++)
{
    sum+=*(p+i);
}
return sum;

}


                                                             //Question 9
 void arrayreverse(int *p,int *size){

 int i,temp=0;

for(int i=0;i<*size/2;i++)
{
        temp =p[i];
        p[i]=p[*size-1-i];
        p[*size-1-i]=temp;
}

 }

                                    // Question 10

void stringreverse(char *p){

 int i,l;
 char temp;
for(l=0;p[l];l++);
l=l-1;
for(int i=0;i<l/2;i++)
{
        temp =p[i];
        p[i]=p[l-1-i];
        p[l-1-i]=temp;
}

 }
