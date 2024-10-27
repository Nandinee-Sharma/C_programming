#include <stdio.h>
#include <stdlib.h>

struct Student {
    char *name;  
    int regno;
    float marks;
};

int main() {
    struct Student student; 
    student.name = (char *)malloc(50 * sizeof(char));
    if (student.name == NULL) {
        printf("Memory allocation for name failed!\n");
        return 1; 
    }
    printf("Enter details for the student:\n");
    printf("Name: ");
    scanf("%s", student.name);
    printf("Registration Number: ");
    scanf("%d", &student.regno);
    printf("Marks: ");
    scanf("%f", &student.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s, Registration No: %d, Marks: %.2f\n", student.name, student.regno, student.marks);
    free(student.name);

    return 0;
}
