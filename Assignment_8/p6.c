
/*Write a structure to store school student information. The student result is one of the members
of this information. Note that till 4th standard school follows grade scheme (A / B / C) and after
4th standard it follows percentage pattern. Accept the information of 3 students from the user
and display it again.*/
#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    int stdd;
    struct {
        char grade;
        float percentage;
    } result;
};

void accept_student(struct student *std);
void display_student(struct student *std);

int main() {
    struct student std;
    accept_student(&std);
    display_student(&std);
    return 0;
}

void accept_student(struct student *std) {
    printf("Enter rollno: ");
    scanf("%d", &std->rollno);
    printf("Enter name: ");
    scanf("%s", std->name);
    printf("Enter standard: ");
    scanf("%d", &std->stdd);
    if (std->stdd <= 4) {
        printf("Enter grade: ");
        scanf(" %c", &std->result.grade); // Note the space before %c to consume newline character
    } else {
        printf("Enter percentage: ");
        scanf("%f", &std->result.percentage);
    }
}

void display_student(struct student *std) {
    printf("roll_no=%d\nname=%s\nstandard=%d\n", std->rollno, std->name, std->stdd);
    std->stdd <= 5 ? printf("Grade=%c\n", std->result.grade) : printf("percentage=%f\n", std->result.percentage);
}







