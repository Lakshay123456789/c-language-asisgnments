#include<stdio.h>
int main(){

int i,j,c=0;
int d=0;
/*int a[3][3];
int b[3][3];
//int c[3][3];

for(i=0;i<3;i++){
for(j=0;j<3;++j){
scanf("%d",&a[i][j]);
   }

}

for(i=0;i<3;i++){
for(j=0;j<3;++j){
scanf("%d",&b[i][j]);
   }
}

                //Question 1

for(i=0;i<3;i++){
for(j=0;j<3;++j){
printf("%d",a[i][j]+b[i][j]);
   }
   printf("\n");
}

for(i=0;i<3;i++){
for(j=0;j<3;++j){
printf("%d",a[i][j]*b[i][j]);
   }
   printf("\n");
}


                    // Question 3
for(i=0;i<3;i++){
for(j=0;j<3;++j){
printf("%d ",a[j][i]);
   }
   printf("\n");
}

                            // Questionn 4
for(i=0;i<3;i++){
for(j=0;j<3;++j){
        if(i==j)
        c+=a[i][j];
   }
}
printf("%d",c);


        //Question 5
int k=2;
for(i=0;i<3;i++){
for(j=0;j<3;++j){
        if(k==j){
        c+=a[i][j];
        k--;
        }
   }
}
printf("%d",c);


                              // question 6
   for(i=0;i<3;i++){
for(j=0;j<3;++j){
        c+=a[i][j];
        d+=a[j][i];
   }
   printf("Total sum of rows %d and colums is %d\n",c,d);
   d=0;
   c=0;
}

                                  //Question 7
for(i=0;i<3;i++){
for(j=0;j<3;++j){
    if(j!=0)
        printf(" ");
       if(j<=i){
        printf("%d",a[i][j]);
       }
        else
           printf("%d",0);

}
printf("\n");
}
                               //Question 8

for(i=0;i<3;i++){
for(j=0;j<3;++j){
    if(j!=0)
        printf(" ");
       if(j>=i){
        printf("%d",a[i][j]);
       }
        else
           printf("%d",0);

}
printf("\n");
}

                // Question 9
int n,m;
scanf("%d%d",&n,&m);
int a[n][m];
int b[n][m];

for(i=0;i<n;i++){
for(j=0;j<m;++j){
scanf("%d",&a[i][j]);
   }

}
for(i=0;i<n;i++){
for(j=0;j<m;++j){
    if(a[i][j]==0)
        c++;

}

}
if(c>(n*m)/2)
    printf("matrix is spare matrix");
else
     printf("matrix is not spare matrix"); */



                  // question 10

int n,m,e;
scanf("%d%d",&n,&m);
int a[n][m];

for(i=0;i<n;i++){
for(j=0;j<m;++j){
scanf("%d",&a[i][j]);
   }

}
for(i=0;i<n;i++){
        e=0;
for(j=0;j<m;++j){
    if(a[i][j]==1)
        e++;

}
if(e>c)
{
    c=e;
    d=i;
}

}
printf("row no in which highest 1s coming %d",d);
return 0;
}
