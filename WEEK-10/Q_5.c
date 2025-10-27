#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "Programming";
    char word2[5];   

    strncpy(word2, word, 4);  
    word2[4] = '\0';         

    printf("string is : %s", word2);

    return 0;
}
