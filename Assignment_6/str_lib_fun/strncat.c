#include <stdio.h>
#include <string.h>

int main() {
    char dest[100], src[100];
    
    printf("Enter destination string: ");
    scanf("%s", dest);
    printf("Enter source string: ");
    scanf("%s", src);
    
    strncat(dest, src, sizeof(dest) - strlen(dest) - 1);
    
    printf("Concatenated string: %s\n", dest);
    
    return 0;
}

