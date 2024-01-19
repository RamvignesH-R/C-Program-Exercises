#include<stdio.h>
void main()
{
    int Hnum,lastc,prec,conc;
    float amt;
    char name[20];
    printf("Enter the House Number:\n");
    printf("Enter the House Holder's name:\n");
    printf("Enter the last current units:\n");
    printf("Enter the present current units:\n");
    scanf("\n%d \n%s \n%d \n%d",&Hnum,&name,&lastc,&prec);
    conc=prec-lastc;
    if(conc<=100){
        amt=0;
    }
    else if(conc>100&&conc<=200)
    {
        amt=0+(conc-100);
    }
    else if(conc>200&&conc<=300)
    {
        amt=0+100+(1.5*(conc-200)); 
    }
    else if(conc>300&&conc<=400){
        amt=100+150+(2*(conc-300));
    }
    else if(conc>400){
        amt=100+150+200+(2.5*(conc-400));
    }
    else{
        printf("Enter an valid input\n");
    }
    printf("********************************************************");
    printf("\nHouse Number: %d",Hnum);
    printf("\nHouse Holder's name: %s ",name);
    printf("\nConsumed units: %d",conc);
    printf("\nBill Amount: %.2f",amt);
    printf("\n********************************************************");
}