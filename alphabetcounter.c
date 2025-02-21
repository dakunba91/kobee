#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101 
int main() {
    char input[3][MAX_SIZE]; 
    int alphabetCount[26] = { 0 }; 


    printf("Give a string (max 100 characters) >");
    fgets(input[0], MAX_SIZE, stdin);

    printf("Give a string (max 100 characters) >");
    fgets(input[1], MAX_SIZE, stdin);
    

    printf("Give a string (max 100 characters) >");
    fgets(input[2], MAX_SIZE, stdin);
    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < strlen(input[i]); j++) {
            if (input[i][j] >= 'a' && input[i][j] <= 'z' || input[i][j] >= 'A' && input[i][j] <= 'Z') { 
                alphabetCount[input[i][j] - 'a']++;
                alphabetCount[input[i][j] - 'A']++;
            }
        }
    }

   
    printf("Alphabet Count：\n");
    for (int i = 0; i < 26; i++) {
            printf("%c %d\n", 'a' + i, alphabetCount[i]);
    }

    return 0;
}