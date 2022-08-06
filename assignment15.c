#include<stdio.h>
int largestelement(int a[],int n);
int smallestelement(int [],int);
void sort(int [],int);
void rotateposition(int a[],int n,int n1,int d);
int adjacentduplication(int a[],int n);
void reversearray(int a[],int n);
int numberofDuplication(int a[],int n);
void unique(int a[],int n);
void meragetwoarray(int a[],int b[],int n);
void sortd(int a[],int n);
void frequency(int a[],int n);
int traverse(int a[],int p,int n);
int main(){


  /*int a[10],i;
 int d,n1;
for(i=0;i<=4;i++)
scanf("%d",&a[i]); */

//int max=largestelement(a,10);
//printf("%d",max);

//int min=smallestelement(a,10);
//printf("%d",min);
  //sort(a,5);

  /*
 printf(" 1 for left and 2 for right");
 scanf("%d",&d);
 printf("number of times of left or right shift");
 scanf("%d",&n1);
  rotateposition(a,5,n1,d);
  for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

  int b= adjacentduplication(a,5);
  if(b==-1)
    printf("array have no dulpication elements");
  else
    printf("%d",b); */

    int n;
    scanf("%d",&n);
    int a[n],b[n],i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);

/*printf("enter second array elements ");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
//reversearray(a,n);

//printf("%d",numberofDuplication(a,n));
 //unique(a,n);

meragetwoarray(a,b,n); */

frequency(a,n);

return 0;
}
   // Question 1

int largestelement(int a[],int n){
int i,max;
max=a[0];
for(i=1;i<n;i++){
if(max<a[i])
max=a[i];
}
return max;
}
                      //Question 2

int smallestelement(int a[],int n){
int i,min;
min=a[0];
for(i=1;i<n;i++){
if(min>a[i])
min=a[i];
}
return min;
}
                            //Question 3
void sort(int a[],int n){
    int i,j,temp=0;
    for(i=0;i<n-1;i++){
        for(j=i+1.;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
//    for(i=0;i<n;i++){
//        printf("%d ",a[i]);
   // }
}

                             //Question 4
 void rotateposition(int a[],int n,int n1,int d)
 {
     int i,temp;
     if(d==1){
     while(n1){
        temp=a[0];
        for(i=0;i<n-1;i++)
            a[i]=a[i+1];

    a[i]=temp;
    n1--;
     }
     }
     else{
        while(n1){
        temp=a[n-1];
        for(i=n-1;i>=1;i--)
            a[i]=a[i-1];

    a[i]=temp;
    n1--;
     }
     }
}

                             //question 5
int adjacentduplication(int a[],int n){
      sort(a,n);
      int i;
      for(i=0;i<n-1;i++){
        if(a[i]==a[i+1])
        return a[i];
      }
      if(i==n-1)
        return -1;


}

                                      // Question 6
void reversearray(int a[],int n){
int i,temp;
for(i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
}

for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
                              //Question 7
int numberofDuplication(int a[],int n){
    sort(a,n);
int i,count=0;
for(i=0;i<n-1;i++)
    if(a[i]==a[i+1])
    count++;
return count;

}

                               // Question 8
void unique(int a[],int n){
int i,j;
for(i=0;i<n;i++){

    for(j=0;j<n;j++){

    if(i!=j){
        if(a[i]==a[j])
        break;
    }
    }
    if(j==n)
        printf("%d ",a[i]);
}
}
                              // Question 9

void meragetwoarray(int a[],int b[],int n){
 int k=0;
 int i=0;
 int j=1;

 //sortd(a,n);
 //sortd(b,n);
 int c[n*2];
 for(i=0;i<n;i++)
    c[i]=a[i];
 for(i=n;i<n*2;i++){
    c[i]=b[n-j];
  j++;
 }
 sortd(c,n*2);

 // secondway of solving tis question
 /*
while(i!=n || j!= n){

    if(j==n){
        c[k]=a[i];
        i++;
    }
    else{
        if(i==n){
            c[k]=b[j];
        j++;
        }
        else{
            if(b[j]>a[i]){
                c[k]=b[j];
                j++;
            }
            else{
                c[k]=a[i];
                i++;
            }
        }

    }
    k++;
}
for(i=0;i<n*2;i++)
printf("%d ",c[i]); */
}


void sortd(int a[],int n){
    int i,j,temp=0;
    for(i=0;i<n-1;i++){
        for(j=i+1.;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
  for(i=0;i<n;i++){
        printf("%d ",a[i]);
}
}
                           //question 10


void frequency(int a[],int n){
int b[5]={-1};
int i,j,c,count,k,p=0;
for(i=0;i<n;i++){
        p=a[i];
   c =traverse(b,p,n);
 if(c){
      count=0;
    for(j=0;j<n;j++){
        if(a[i]==a[j])
        count++;
    }
    printf("%d - %d\n",a[i],count);

 }
b[i]=a[i];
}

}
int traverse(int a[],int p,int n){
 int i;
 for(i=0;i<n;i++)
  if(a[i]==p)
    return 0;
    return 1;


}
