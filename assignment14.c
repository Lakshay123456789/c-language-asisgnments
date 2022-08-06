#include<stdio.h>
int main(){
    // question 1

/*int a[10],i,sum=0;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

for(i=0;i<=9;i++)
sum+=a[i];
printf("%d",sum);

  //Question 2
  int a[10],i,sum=0;
  float avg;
for(i=0;i<10;i++)
scanf("%d",&a[i]);

for(i=0;i<10;i++)
sum+=a[i];

avg=sum/10.0;
printf("%f",avg);

  // question 3
  int a[10],i,sumodd=0;
  int sumeven=0;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

for(i=0;i<=9;i++){
    if(a[i]&1)
        sumodd+=a[i];
    else
        sumeven+=a[i];
}
printf("%d\n",sumeven);
printf("%d",sumodd);

    //Question 4
    int a[10],i,max=0;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=1;i<=9;i++){
    if(max<a[i])
        max=a[i];
}
printf("%d",max);

   // Question 5
   int a[10],i,min=0;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
min=a[0];
for(i=1;i<=9;i++){
    if(min>a[i])
        min=a[i];
}
printf("%d",min);

  // question 6
  int a[10],i,j,temp=0;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<=9;i++){
for(j=i+1;j<=9;j++){
    if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
for(i=0;i<=9;i++)
printf("%d ",a[i]);

                                // Question 7
int a[10],i,j,temp=0;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<=9;i++){
for(j=i+1;j<=9;j++){
    if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}

 //printf("%d ",a[8]);  // approch this
for(i=9;i>=1;i--){
    if(a[i]!=a[i-1]){
        printf("%d",a[i-1]);
        break;
    }
}

                  //Question  8
int a[10],i,j,temp=0;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<=9;i++){
for(j=i+1;j<=9;j++){
    if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
for(i=0;i<=8;i++)
if(a[i]!=a[i+1]){
    printf("%d",a[i+1]);
    break;
}


                       // Question 9
int a[10],i;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=9;i>=0;i--)
    printf("%d ",a[i]); */



                        // Question 10
 int a[10],b[10],i;
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
    b[i]=a[i];

  for(i=0;i<=9;i++)
printf("%d ",b[i]);
return 0;

}
