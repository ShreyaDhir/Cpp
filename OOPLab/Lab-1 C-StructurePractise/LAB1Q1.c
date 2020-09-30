#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks[10];
} s;

int main() {
    int i,arr[10];
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s",&s.name);
    //fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    for(i=0;i<5;i++)
    {
    // printf("Enter marks: ");
    scanf("%f", &s.marks[i]);
    }

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s.name);
    printf("Roll number: %d\n", s.roll);

    for(i=0;i<5;i++)
    {
    printf("Marks: %0.2f\n", s.marks[i]);
    }
    return 0;
}
