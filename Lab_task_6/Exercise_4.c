#include <stdio.h>
#include <string.h>

int main(){
    char username[6],password[30],user_name[6],pass_word[30];
    printf("Enter Username (5 Alphabets)\n");
    scanf("%s", username);
    printf("Enter password (password must include atleast 1 numeric , 1 capital and 1 small letter)\n");
    scanf("%s", password);

    printf("Account Created Succesfully\n");

    printf("Enter username and password to log in to your account\n");

    while (1) {
        printf("Enter Username: ");
        scanf("%s", user_name);
        printf("Enter Password: ");
        scanf("%s", pass_word);

        if (strcmp(username, user_name) == 0 && strcmp(password, pass_word) == 0) {
            printf("Welcome %s , you are now logged in\n", username);
            break;
        } else {
            printf("Incorrect Username or Password. Try again\n\n");
        }
    }

    return 0;
}
