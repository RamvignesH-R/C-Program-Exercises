//students form details with their marks
#include<stdio.h>
void main()
{
int age,phnum,phy,math,bio,che,eng;
float avg;
char name[100],address[124],gender[15],email[50],category[20];
printf("enter the name\n");
scanf("%s",name);
printf("enter phone number\n");
scanf("%d",&phnum);
printf("enter the age of the candidate\n");
scanf("%d",&age);
printf("enter the email address\n");
scanf("%s",email);
printf("enter the home address(write without space use _ for space and , for continuation )\n");
scanf("\n%s",address);
printf("enter the gender\n");
scanf("\n%s",gender);
printf("enter the category(OBC/GEN...)\n");
scanf("\n%s",category);
printf("enter class 12 marks\nenter mathematics marks\n");
scanf("%d",&math);
printf("enter physics marks\n");
scanf("%d",&phy);
printf("enter chemistry marks\n");
scanf("%d",&che);
printf("enter biology marks\n");
scanf("%d",&bio);
printf("enter english marks\n");
scanf("%d",&eng);
printf("the total mark of the candidate is %d\n",math+phy+che+bio+eng);
avg=(math+phy+che+bio+eng)/5.0;
printf("the average marks scored by the candidate is %f\n",avg);

}