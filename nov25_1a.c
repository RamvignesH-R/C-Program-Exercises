#include<stdio.h>
void main(){
    char ch;
    printf("Enter an alphabetic character\n");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("IT IS A VOWEL LETTER \n");
    }
    else{
        printf("%c IS NOT A VOWEL LETTER\n",ch);
    }
}