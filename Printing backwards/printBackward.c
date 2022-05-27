#include <stdio.h>
#include <string.h>
int main (){

    char word[10];
    int i, length=0, check;

    printf("Enter your word: ");
    scanf("%s", word);

    printf("your word is: %s\n", word);

    length = strlen(word);
    char backward[2];

    printf("Length of the word is: %d\n", length);

    for (i=length; i>0; i--){

        backward[length-i] = word[i-1];

        printf("%s\t", backward);
    }

    printf("\nword in backward: %s\n", backward);

    check = strcmp(word,backward);

    if (check == 0){
        printf("Word is palindrome");
    }
    else{
        printf("Word is not palindrome");
    }


    return 0;
}