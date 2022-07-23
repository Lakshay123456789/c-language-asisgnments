main(){
int a,b,c,d,e,z,p;
scanf("%d%d%d",&a,&b,&c);
/* if(a>32&&b>32&&c>32){


    printf("pass\n");
    z=(a+b+c)/3.0;
  if(z>80)
    printf("divison is first");
    else
    if(z>60)
    printf("divison is second");
     else
        if(z>40)
        printf("divison is third");
     else
     printf("divison is fourth");

}

else
    printf("fail");*/
    if(a>32){
z=a;
if(b>32){
z=z+b;
if(c>32){
z+=z;
   printf("pass\n");
    z=z/3.0;
  if(z>80)
    printf("divison is first");
    else
    if(z>60)
    printf("divison is second");
     else
        if(z>40)
        printf("divison is third");
     else
     printf("divison is fourth");

}
else{
printf("fail");
}
}
else{
printf("fail");
}
}
else{
printf("fail");
}
}


