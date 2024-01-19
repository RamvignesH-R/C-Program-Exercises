#include<stdio.h>
void main(){
    char nam[20],fat[20],mot[20],schl[60];
    int roll,eng,math,phy,che,bio,tam,tot,result;
    printf("\nEnter the following student details:-");
    printf("\nCandidate Name:");
    scanf("\n%s",nam);
    printf("\nRoll Number:");
    scanf("\n%d",&roll);
    printf("\nFather's Name:");
    scanf("\n%s",fat);
    printf("\nMother's Name:");
    scanf("\n%s",mot);
    printf("\nSchool Name:");
    printf("\n");
    scanf("\n%[^\n]",schl);     
    printf("\nEnglish core marks:");
    scanf("\n%d",&eng);
    printf("\nMathematics marks:");
    scanf("\n%d",&math);
    printf("\nPhysics marks:");
    scanf("\n%d",&phy);
    printf("\nChemistry marks:");
    scanf("\n%d",&che);
    printf("\nBiology marks:");
    scanf("\n%d",&bio);
    printf("\nTamil marks:\n");
    scanf("\n%d",&tam);
    //scanf("\n%s \n%d \n%s \n%s \n%s \n%d \n%d \n%d \n%d \n%d \n%d",nam,&roll,fat,mot,schl,&eng,&math,&phy,&che,&bio,&tam);
    tot=eng+tam+phy+che+bio+math;
    if(eng>=45&&tam>=45&&bio>=45&&math>=45&&che>=45&&phy>=45){
      result=1; 
    }
    else{
        result=0;
    }
    printf("***************************************************\n");
    printf("\n--------YOUR MARKSHEET--------");
    printf("\nCandidate Name: %s",nam);
    printf("\nRoll Number:%d",roll);
    printf("\nFather's Name:%s",fat);
    printf("\nMother's Name:%s",mot);
    printf("\nSchool Name:%s",schl);
    printf("\nEnglish core marks:%d",eng);
    printf("\nMathematics marks:%d",math);
    printf("\nPhysics marks:%d",phy);
    printf("\nChemistry marks:%c",che);
    printf("\nBiology marks:%d",bio);
    printf("\nTamil marks:%d",tam);
    printf("\nYour Total Marks:%d",tot);
    result==1?printf("\nYour result: PASS"):printf("\nYour result: FAIL");
    printf("\n***************************************************\n");
}