#include<stdio.h>
#include<string.h>
int main()
{

                        // Question 1
    /*
int i,j,count;
 char s[5][30];
for(i=0;i<5;i++){
 gets(s[i]);
}

for(i=0;i<5;i++){
    count=0;
for(j=0;s[i][j];j++)
   if(s[i][j]=='a' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u' || s[i][j]=='e' || s[i][j]=='A' || s[i][j]=='I' || s[i][j]=='O' || s[i][j]=='U' || s[i][j]=='E' )
    count++;
printf("number of vowels in %s is %d\n",s[i],count);
}


                                   // Question 2

char str[30];
int i,j,count;
 char s[10][30];
for(i=0;i<10;i++)
 gets(s[i]);

for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
    count=strcmp(s[i],s[j]);
    if(count==1)
    {
        strcpy(str,s[i]);
        strcpy(s[i],s[j]);
        strcpy(s[j],str);
    }
}
}
for(i=0;i<10;i++)
    puts(s[i]);



                              //Question 3

  int i,j,count;
 char s[5][30];
for(i=0;i<5;i++){
 gets(s[i]);
}
for(i=0;i<5;i++){
 for(j=0;s[i][j];j++)
 printf("%c",s[i][j]);
 printf("\n");
}


                           // Question 4
 int i,j,count=1;;
 char s[5][30],str[30];
for(i=0;i<5;i++){
 gets(s[i]);
}
 printf("enter serach string");
 gets(str);
 for(i=0;i<5;i++){
        if(strcmp(str,s[i])==0){
            printf("found the search string at row number %d",count);
            break;
        }
        count++;

}
if(i==5)
   printf("NOT found the search string in given lit of strings");


                                           // Question 5
int i,j,count=1;;
 char s[5][30],str[30];
 printf("enter the 5 emails ");
for(i=0;i<5;i++){
 gets(s[i]);
}
 for(i=0;i<5;i++){
    count=1;
 for(j=i+1;s[i][j];j++){
    if(s[i][j]=='@')
       count=0;
}
if(count)
   printf("%s\n",s[i]);
 }

}
                                            // Question 6
int i;
char s[5][30],str[30];
for(i=0;i<5;i++){
 gets(s[i]);
}
 for(i=0;i<5;i++){
        strcpy(str,s[i]);
        if(strcmp(s[i],strrev(str))==0){
            printf("string are plalindrom %s\n",s[i]);

        }
}




                        // Question 7

int i,j,count=0;
int k;
char s[5][30],str[30];
printf("Enter 5 Ip address\n");
fflush(0);
for(i=0;i<2;i++){
 gets(s[i]);
}
for(i=0;i<2;i++){
        count=0;
        k=0;
 for(j=0;s[i][j];j++){
    if(s[i][j]=='.' && s[i][j+1]!='.'){
        count++;

    }
        str[k]=s[i][k];
        k++;

 }
 if(count==3){
        str[k]='\0';
      checkip(str);

 }
 else
     printf(" The IP addreses is not valid %s\n",s[i]);

}
}
void checkip(char s[])
{
    int count=1;
     char str[100];
    int i,j=0;
   if(apla(s)){
    for(i=0;s[i];i++)
    {
        if(s[i]!='.'){
           str[j]=s[i];
           j++;
        }
        else{

            if(atoi(str)<=255){
                count++;
                j=0;
            }
        }
    }
     if(count==4)
        printf(" The IP addreses is valid %s\n",s);
            else
            printf(" The IP addreses is not  valid %s\n",s);

}
else
    printf(" The IP addreses is not  valid %s\n",s);
}
int apla(char s[])
{
    int i;
    for(i=0;s[i];i++)
        if((s[i]>='65' && s[i]<='90') ||(s[i]>='a' && s[i]<='z'))
        return 0;
     return 1;
} */



                            //Question 9

/*
int i,j,count,n;
 char s[5][30]={"lakshay","harsh","naman","Golu","akash"};
char str[30];
printf("Enter your name\n");
gets(str);
for(i=0;i<5;i++){

        if(strcmp(str,s[i])==0){
        printf("you calculate factorial\n");
        printf("please enter a number\n");
    scanf("%d",&n);
   printf("%d",fact(n));
    break;
        }
}
if(i==5)
   printf("you are not calulcate factorial");

}
int fact(int n){
    if(n==1 || n==0)
        return 1;
    return n*fact(n-1);

}
*/

                                        // Question 8

int i,j,k,count,count1,n=1;;
 char s[5][30]={"akash","lakshay","harsh","naman","Golu","akash"};
char str[30],str1[30];
printf("%d",strlen(s));
printf("Enter your name\n");
gets(str);
printf("Enter your second\n");
gets(str1);

/* state forword logic
for(i=0;i<5;i++){
    if(strcmp(s[i],str)==0){
        count=1;
        for(j=i+1;j<5;j++){
        if(strcmp(s[j],str1)==0){
            n=0;
            printf("%d",count);
            break;
        }
        else
            count++;
        }
        if(n!=0)
            printf("%d",-1);
    }

} */
for(i=0;i<6;i++){
    if(strcmp(s[i],str)==0){
        k=i+1;;
        j=i-1;
        break;
    }
}
 count=1;
    count1=1;
        while(j>=0 || k<6){
            if(strcmp(s[j],str1)==0){
                printf("%d",count);
                n=0;
                break;
            }
            else
            if(strcmp(s[k],str1)==0){
                printf("%d",count1);
                n=0;
                break;
            }
            else{
                count++;
                count1++;
                k++;
                j--;
            }
        }
            if(n!=0){
                printf("%d",-1);
}
}
                   // Question 10
/*
   char s1[100];
   char s2[100],st2[20],p[2];
   char st1[20];
   char str[10][100],str1[10][100];
   int choice,i=0;
   int k,j=0;
   int p1=0;
   while(1){
        printf("                                  authentication system\n");
    printf("1.registration\n");
    printf("2.login\n");
    printf("3.exit\n");

    printf("enter your choice\n");
    scanf("%d",&choice);

    switch(choice){
                case 1:
                    gets(p);
        printf("please enter your name\n");
           gets(s1);
           strcpy(str[j],s1);
           printf("enter your password\n");
          gets(st1);
          strcpy(str1[p1],st1);
          printf("\n");
           printf("you are registration sucessfully\n");
           printf("thank you\n\n");
           j++;
           p1++;
           i++;
           break;
       case 2:
           gets(p);
           if(i!=0){
         printf("please enter your name\n");
           gets(s2);
           printf("enter your password\n");
           gets(st2);
             for(k=0;k<j;k++){
                if(strcmp(str[k],s2)==strcmp(str1[k],st2)){
           //if(strcmp(s1,s2)==strcmp(st1,st2)){
            printf("you are login\n");
           printf("thank you\n\n");
           break;
           }
           }
           if(k==j)
           printf("you enter incorret username and password\n\n");
            }
           else{
                printf("\n\n");
            printf("first registration yourself than login\n");
            printf("\n\n");
           }
           break;
       case 3:
        break;
       default:
        printf("invalid choice\n");
      printf("\n");

    }
    if(choice==3)
        break;
   }


}
*/
