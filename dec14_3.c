#include<stdio.h>
#include <string.h>
void main(){
    int i,vowelc=0,consoc=0;
    char word[25];
    printf("enter the word\n");
    scanf("%s",word);/////////////////////////////////////i did mistake
    for(i=0;word[i]!='\0';i++)/////////////////////////////i did mistake
    {
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                vowelc++;
        }
        else{
                consoc++;
        }
    }
    printf("the vowel count is %d\nthe consonant count is %d\n",vowelc,consoc);
}