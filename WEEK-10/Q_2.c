#include <stdio.h>
#include <string.h>

//Write a program that copies "Hello" into a new string using strcpy and prints it.
int main(){
    char word[] = "Hello";
    char word1[20];
    strcpy(word1,word);

    printf("%s", word1);
    
    return 0;
}