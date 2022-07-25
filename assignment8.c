#include<stdio.h>
int main(){
int i,j;

                                               //Question 1


 /*for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
     if(j<=i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }

                                             //Question 2

 for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
     if(j>=6-i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }

                                             //Question 3

 for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
     if(j<=6-i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
  }


                                           // question 4

  for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
     if(j>=i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }

                                             // question 5

  for(i=1;i<=5;i++){
  for(j=1;j<=9;j++){
     if(j>=6-i && j<=4+i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }

                                               //question 6

  for(i=1;i<=5;i++){
  for(j=1;j<=9;j++){
     if(j>=i && j<=10-i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }

                                               //Question 7

  for(i=1;i<=5;i++){
  for(j=1;j<=10;j++){
     if(j<=6-i || j>=5+i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }


                                                  //Question 8

   int k;
   for(i=1;i<=4;i++){
        k=1;
  for(j=1;j<=7;j++){
     if(j>=5-i && j<=3+i){
     printf("%d",k);
     j<4?k++:k--;
     }
     else
      printf(" ");
  }
  printf("\n");
 }

                                                 // Question 9

 int k;
   for(i=1;i<=4;i++){
        k=1;
  for(j=1;j<=7;j++){
     if(j>=i && j<=8-i){
     printf("%d",k);
     j<4?k++:k--;
     }
     else
      printf(" ");
  }
  printf("\n");
 }

                                                     //Question 10

  int k;
   for(i=1;i<=4;i++){
        k=1;
  for(j=1;j<=7;j++){
      if(j!=1)
        printf(" ");
     if(j<=5-i || j>=3+i){
     printf("%d",k);
     j<4?k++:k--;
     }
     else
      printf(" ");
  }
  printf("\n");
 }

                                                //Question 11

   int k;
   for(i=1;i<=5;i++){
        k='A';
  for(j=1;j<=9;j++){
        if(j!=1)
        printf(" ");
     if(j>=6-i && j<=4+i){

     printf("%c",k);
     j<5?k++:k--;

     }
     else
    printf(" ");
  }
  printf("\n");
 }

                                        // question 12
  char k;
   for(i=1;i<=4;i++){
        k='A';
  for(j=1;j<=7;j++){
        if(j!=1)
        printf(" ");
     if(j>=i && j<=8-i){

     printf("%c",k);
     j<4?k++:k--;

     }
     else
    printf(" ");
  }
  printf("\n");
 }

                                              // Question 13
 int k;
   for(i=1;i<=7;i++){
        k='A';
  for(j=1;j<=13;j++){
        if(j!=1)
        printf(" ");
     if((j>=1 && j<=8-i) || (j>=6+i && j<=13)){

     printf("%c",k);
     j<7?k++:k--;

     }
     else
    printf(" ");
  }
  printf("\n");
 }


                                                 //Question 14

  for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
     if(j==1|| j==i || i==5)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }


                                           // Question 15

 for(i=1;i<=5;i++){
  for(j=1;j<=5;j++){
     if(j==6-i || j==5 || i==5)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }

                                                           // question 16

  for(i=1;i<=5;i++){
  for(j=1;j<=9;j++){
     if(j==6-i || j==4+i || i==5)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }

                                                         // Question 17

  for(i=1;i<=5;i++){
  for(j=1;j<=9;j++){
     if(i==1 || j==i || j==10-i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }


                                                            //Question 18

  for(i=1;i<=9;i++){
  for(j=1;j<=9;j++){
  if(i<=5){
     if(j>= 6-i && j<=4+i)
     printf("*");
     else
      printf(" ");
  }
   else {
        if(j>=i-4 && j<=14-i)
        printf("*");
     else
      printf(" ");
        }
  }
  printf("\n");
 } */

                                             // question 19

  for(i=1;i<=3;i++){
  for(j=1;j<=19;j++){
     if((j>=4-i && j<= 6+i) ||( j>=14-i&& j<= 16+i))
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }
 for(i=1;i<=10;i++){
  for(j=1;j<=19;j++){
        if(i==1 && j==7)
        printf("MySirG");
        if((i==1) && (j>=7 && j<=12))
           continue;
     if(i<=j && j<=20-i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }


     /*                                //General form of Question 19
 int n;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
        printf("                     ");
  for(j=1;j<=(n+16);j++){
        if((j>=(n+1)-i && j<= (n+3)+i) ||( j>=(n+11)-i&& j<= (n+13)+i))
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 }
 for(i=1;i<=(n+7);i++){
     printf("                     ");
  for(j=1;j<=(n+16);j++){
        if(i==1 && j==(n+4))
        printf("Harsh");
        if((i==1) && (j>=(n+4) && j<=(n+8)))
           continue;
     if(i<=j && j<=(n+17)-i)
     printf("*");
     else
      printf(" ");
  }
  printf("\n");
 } */



}
