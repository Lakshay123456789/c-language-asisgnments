#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee input();
struct student inputstudent();
struct studentmarks Input();
struct employee{
 int id;
 char name[30];
 float salary;
};
struct timeperiod{

int hr;
int min;
int sec;

};
struct student{

int rollno;
char name[30];
char branch[10];


};
struct studentmarks{

int rollno;
char name[30];
int phy;
int ch;
int mt;


};
int main(){
    int i;
/*
                              // Question 1
struct employee e1={1,"C",100.0};
struct employee e2;
e2.id=2;
strcpy(e2.str,"CPP");
e2.salary=200.0;
printf("%d ",e1.id);
printf("%s ",e1.str);
printf("%f\n",e1.salary);
 printf("%d ",e2.id);
printf("%s ",e2.str);
printf("%f",e2.salary);*/

   /*                            //  user input            Question 2
struct employee e3;
printf("enter id number");
scanf("%d",&e3.id);
fflush(stdin);
printf("enter name number");
fgets(e3.str,30,stdin);
printf("enter salary number");
scanf("%d",&e3.salary);
 */


                                    // Question 3
/*

struct employee e[3];
 for(i=0;i<3;i++){
    printf("Enter the employee details %d\n",i+1);
    e[i]=input();
    printf("\n");
 }

 for(i=0;i<3;i++){
    display(e[i]);
    printf("\n");
 }
*/
                                 // Question 4
//maxsalary(e,3);

                               // Question 5
//sortsalary(e,3);
                                 // Question 6
 //sortname(e,3);
 /*
for(i=0;i<3;i++){
    display(e[i]);
    printf("\n");
 } */


                          // Question 7
  struct timeperiod t1,t2;
  printf("entre start period\n\n");
printf("enter starts hour" );
scanf("%d",&t1.hr);
printf("enter start minute ");
scanf("%d",&t1.min);
printf("enter start seconds ");
scanf("%d",&t1.sec);
printf("\n");
printf("entre stop period\n\n");
printf("enter end hour ");
scanf("%d",&t2.hr);
printf("enter end minute ");
scanf("%d",&t2.min);
printf("enter end seconds ");
scanf("%d",&t2.sec);

differenceperiod(t1,t2);




    /*                       // Question 8
struct student s1[10];
for(i=0;i<10;i++){
s1[i]=inputstudent();
}
 for(i=0;i<10;i++)
    displaystudent(s1[i]);


                              // Question 9
int n;
printf("how many students\n");
scanf("%d",&n);
   struct student s1[n];
for(i=0;i<n;i++){
s1[i]=inputstudent();
}
 for(i=0;i<n;i++)
    displaystudent(s1[i]);

                                // Question 10

 struct studentmarks s1[3];
for(i=0;i<3;i++){
s1[i]=Input();
}
 for(i=0;i<3;i++)
    displaystudent1(s1[i]); */
return 0;
}



struct employee input(){
    struct employee e3;
printf("enter id number");
scanf("%d",&e3.id);
fflush(stdin);
printf("enter name number");
fgets(e3.name,30,stdin);
e3.name[strlen(e3.name)-1]='\0';
printf("enter salary number");
scanf("%f",&e3.salary);

return e3;
}
void display(struct employee b){
printf("%d %s %f",b.id,b.name,b.salary);

}
maxsalary(struct employee a[],int size){
int i;
struct employee e,temp;
e=a[0];
for(i=1;i<size;i++){
    if(e.salary<a[i].salary)
    {
     temp=e;
     e=a[i];
     a[i]=temp;
    }
}
display(e);
}

 void sortsalary(struct employee *p,int size){

 int i,j;
 struct employee temp;
 for(i=0;i<size-1;i++){
    for(j=0;j<size-1-i;j++){
        if((*(p+j)).salary>p[j+1].salary){
            temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
    }

 }

 }

void sortname(struct employee *p,int size){

 int i,j;
 struct employee temp;
 for(i=0;i<size-1;i++){
    for(j=0;j<size-1-i;j++){
        if(strcmp(p[j].name,p[j+1].name)==1){
            temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
    }

 }

 }
void differenceperiod(struct timeperiod t1,struct timeperiod t2){
struct timeperiod t3;
printf("difference period ");
while(t2.sec>t1.sec){
    t1.min--;
    t1.sec+=60;
}
while(t2.min>t1.min){
    t1.hr=t1.hr-1;
    t1.min+=60;
}
printf("%d:",abs(t1.hr-t2.hr));
printf("%d:",abs(t1.min-t2.min));
printf("%d:",abs(t1.sec-t2.sec));

}
struct student inputstudent(){
    struct student s1;
printf("enter student rollno");
scanf("%d",&s1.rollno);
fflush(stdin);
printf("enter student name");
fgets(s1.name,30,stdin);
s1.name[strlen(s1.name)-1]='\0';
printf("enter student branch");
fgets(s1.branch,10,stdin);
s1.branch[strlen(s1.branch)-1]='\0';

return s1;
}
void displaystudent(struct student s){
printf("%d %s %s\n",s.rollno,s.name,s.branch);


}
struct studentmarks Input(){
struct studentmarks s;
printf("entre your rollno");
scanf("%d",&s.rollno);
fflush(stdin);
printf("enter student name");
fgets(s.name,30,stdin);
s.name[strlen(s.name)-1]='\0';
printf("entre phyices marks");
scanf("%d",&s.phy);
printf("entre chemistry marks");
scanf("%d",&s.ch);
printf("entre mathematices marks");
scanf("%d",&s.mt);
return s;
}
void displaystudent1(struct studentmarks s){
int temp=s.phy+s.ch+s.mt;
printf("%s %d\n",s.name,temp/3);


}
