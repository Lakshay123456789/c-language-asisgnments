#include<stdio.h>
#include<string.h>
int main(){
int i,count;
/*
                              //Question 1
char s[20]="Lakshay";
for(i=0;s[i];i++);
printf("%d",i);



                                  // Question 2
   char n;
scanf("%c",&n);
char s[20]="aabbaaaaba abaa";
for(i=0;s[i];i++){
    if(s[i]==n)
        count++;
}
  printf("%d",count);

                                // Question 3

char s[20]="aioubcsoIO";
for(i=0;s[i];i++)
    if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e' || s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='E' )
        count++;
  printf("%d",count);

                                  // Question 4

char s[20];
fgets(s,20,stdin);
for(i=0;s[i];i++){
    if(s[i]>='a' && 'z'>=s[i])
        s[i]=s[i]-32;
}
  printf("%s",s);

                                  // Question 5
char s[20];
fgets(s,20,stdin);
for(i=0;s[i];i++){
    if(s[i]>='A' && 'Z'>=s[i])
        s[i]=s[i]+32;
}
  printf("%s",s);



                                     // Question 6

 char s,str[20];
 int l;
fgets(str,20,stdin);
for(l=0;str[l];l++);
for(i=0;i<l/2;i++){
    s=str[i];
    str[i]=str[l-1-i];
    str[l-1-i]=s;
}
printf("%s",str);
                                    // Question 7


     int apl=0;
     int digit=0;
     int sepcial=0;
char s[50];
fgets(s,50,stdin);
//gets(s);
i=0;
while(s[i]){
    if(s[i]=='9' || s[i]=='8'|| s[i]=='7'|| s[i]=='6'|| s[i]=='5' || s[i]=='4'|| s[i]=='3' || s[i]=='2' || s[i]=='1'|| s[i]=='0')
        digit++;
    else
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') )
            apl++;
        else
            sepcial++;
i++;

}
  printf("number of alpabets %d\n",apl);
  printf("number of digit %d\n",digit);
  printf("number of special %d\n",sepcial-1);


                                          // Question 8
     char s[50],str[50];
fgets(s,50,stdin);
for(i=0;s[i];i++)
       str[i]=s[i];
printf("%s",str);

                                       // Question 9
 char temp,s[50];
 int j,l;
fgets(s,50,stdin);
for(i=0;s[i];i++){
for(j=i+1;s[j];j++){
    if(s[i]>s[j]){
        temp =s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}
}

printf("%s",s); */


                                   //Question 10
char temp,s[50];
 int j,l;
fgets(s,50,stdin);
for(i=0;i<strlen(s)-1;i++){
        count =0;
for(j=0;s[j];j++)
    if(s[i]==s[j])
       count++;
    printf("frequency of %c is %d \n",s[i],count);
}
return 0;

}
