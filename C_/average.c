#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;
    int counter = 1;
    while (counter <= 10)
    {
        int student_mark;
        printf("Enter student mark >>> ");
        scanf("%d", &student_mark);
        total = total + student_mark;
        counter = counter + 1;
    }
    float average = (float)total / counter;
    printf("Average: %.2f\n", average);

    return 0;
}