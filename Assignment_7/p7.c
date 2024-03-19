/*Write a program to accept list of names as command line arguments and display the names.
Modify above program to display names in sorted order.*/
#include <stdio.h>
#include <string.h>

void argu(char* argv[], int argc);
void sort(char *argv[], int argc);

int main(int argc, char* argv[]) {
    printf("argc=%d\n", argc);
    argu(argv, argc);
    if (argc > 1)
        sort(argv, argc);
	argu(argv,argc);
    return 0;
}

void argu(char* argv[], int argc) {
    for (int i = 0; i < argc; ++i) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }
}

void sort(char *argv[], int argc) {
    char temp[256]; 
    for (int i = 1; i < argc; ++i) {
        for (int j = i + 1; j < argc; ++j) {
            if (strcmp(argv[i], argv[j]) > 0) {
                strcpy(temp, argv[i]);
                strcpy(argv[i], argv[j]);
                strcpy(argv[j], temp);
            }
        }
    }
}

