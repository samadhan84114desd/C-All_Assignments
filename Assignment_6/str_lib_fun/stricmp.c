//strcmp()

#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int result = stricmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}

