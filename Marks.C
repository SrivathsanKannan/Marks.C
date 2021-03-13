#include <stdio.h>

int main()
{
    int mark;
    printf("Please Enter student's marks:-\n");
    scanf("%d", &mark);
    if(mark>84)
    printf("\nThe grade is - A");
    else if(mark>69)
    printf("\nThe grade is - B");
    else if(mark>54)
    printf("\nThe grade is - C");
    else if(mark>39)
    printf("\nThe grade is - D");
    else printf("\nThe grade is - F");
    return 0;
}
