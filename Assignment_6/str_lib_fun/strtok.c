#include <stdio.h>
#include <string.h>

int main() {
    char str[100], delim[10];
    
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter delimiter: ");
    scanf("%s", delim);
    
    char *token = strtok(str, delim);
    
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    
    return 0;
}

