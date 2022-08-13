#include<stdio.h>
#include<string.h>
int main(){

char temp,s[30];
//str[10]="akshay";
 int j,l;
 printf("entre first string ");
gets(s);



//l=lengthstring(s);

//printf("%d",strlen(s));

//reverse(s);


 // printf("%d",campare(s,str));

 //uppercase(s);
 //lowercase(s);

 //checkaplanumeric(s);


 /*j=palindrmo(s);
 if(j)
    printf("string is palidrome");
 else
    printf("string is not palidrome"); */

// countword(s);
//wordwise(s);
wordwise1(s);
//repeatedcharater(s);
return 0;
}

     // Question 1

int lengthstring(char s[]){
return strlen(s);
}

    // Question 2

void reverse(char s[]){
int i,l;
char temp;
for(l=0;s[l];l++);
for(i=0;i<l/2;i++){
    temp=s[i];
    s[i]=s[l-1-i];
    s[l-1-i]=temp;
}
printf("%s\n",s);
}


         // Question 3

int campare(char s[],char str[]){
int l,i;
if(strlen(s)==strlen(str)){
    for(i=0;s[i];i++){
        if(s[i]!=str[i]){
            if(s[i]<=str[i])
                return -1;
            else
                return 1;
        }
    }
    return 0;
}
else{
    l=strlen(s)<strlen(str)?strlen(s):strlen(str);
    for(i=0;i<l;i++){
        if(s[i]!=str[i]){
            if(s[i]<=str[i])
                return -1;
            else
                return 1;
        }
}
return -1;
}
}

                             // Question 4

 void uppercase(char s[])
 {
     strupr(s);
     printf("%s\n",s);
 }


                            // Question 5

  void lowercase( char s[])
 {
     strlwr(s);
     printf("%s",s);
 }


                                  // Question 6
void checkaplanumeric(char s[]){
int i,alpha=0;
int digit=0;
for(i=0;s[i];i++){
      if(s[i]=='9' || s[i]=='8'|| s[i]=='7'|| s[i]=='6'|| s[i]=='5' || s[i]=='4'|| s[i]=='3' || s[i]=='2' || s[i]=='1'|| s[i]=='0')
            digit++;
            else
                if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
                    alpha++;

}
if(alpha>0 && digit>0)
    printf("string is aplanumeric");
else
 printf("string is not aplanumeric");
}
                                           //Question 7
 int palindrmo(char s[]){
     int i;
int l=strlen(s);
char str[l];
strcpy(str,s);
reverse(s);
for(i=0;s[i];i++)
{
    if(str[i]!=s[i])
        return 0;

}
return 1;
 }
                                         // Question 8
int countword(char s[]){
//int i,count=1; for word count
int i,count=0; // for space count
for(i=0;i<strlen(s)-1;i++)
{
    if(s[i]==' ' && s[i+1]!=' ')
        count++;

}
//printf("%d",count);
return count;
}

                        // Question 9


void wordwise(char s[]){
    reverse(s);
    int i,k=0;
    char str[30];
    int j=0;
    int count1=0;
   int count=countword(s);
   int l=strlen(s);
   s[l]=' ';
  // printf("%s\n",s);
   for(i=0;s[i];i++){
    if(s[i]!=' '){
        str[k]=s[i];
        k++;

    }
    else{
            count1++;
        str[k]='\0';

    //printf("%s",str);
   reverse1(str);
   printf("%s",str);

          if(count){
            printf(" ");
            count--;
          }
          k=0;
    }
   }

}
void reverse1(char s[]){
int i,l;
char temp;
for(l=0;s[l];l++);
for(i=0;i<l/2;i++){
    temp=s[i];
    s[i]=s[l-1-i];
    s[l-1-i]=temp;
}
}
 void wordwise1(char s[]){
 int i,j=0;
 int k=0;
char str[10],str1[10][20];
 for(i=0;s[i];i++){
     //hprintf("%c",s[i]);
    if(s[i]!=' '){
           // printf("%c",s[i]);
           str[j]=s[i];
        j++;
    }
            str[j]='\0';
            strcpy(str1[k],str);


            k++;
        j=0;
 }
 for(i=0;i<k;i++){
    printf("%s",str1[i]);
 printf(" ");

 }

}                                     // Question 10

void repeatedcharater(char s[]){
int i,j,count;
for(i=0;s[i];i++)
{
    count=0;
     for(j=i+1;j<strlen(s);j++){
    if(s[i]==s[j] && s[i]!=' '){
        count++;
    s[j]='0';
    }
     }
     if(count>0 && s[i]!='0')
        printf("%c ",s[i]);

}
}
