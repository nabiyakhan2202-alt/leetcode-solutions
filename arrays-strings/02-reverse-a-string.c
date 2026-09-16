#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int i, j;
    char temp;

    i = 0;
    j = strlen(str) - 1;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    // Test Case 1: Typical case
    char str1[] = "hello";

    printf("Test Case 1:\n");
    printf("Before: %s\n", str1);

    reverseString(str1);

    printf("After: %s\n", str1);

    // Test Case 2: Edge case
    char str2[] = "a";

    printf("\nTest Case 2:\n");
    printf("Before: %s\n", str2);

    reverseString(str2);

    printf("After: %s\n", str2);

    return 0;
}