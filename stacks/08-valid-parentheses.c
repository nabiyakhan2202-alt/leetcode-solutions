#include <stdio.h>
#include <string.h>

int isValid(char* s)
{
    char stack[10000];
    int top = -1;
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
            {
                return 0;
            }

            if ((s[i] == ')' && stack[top] != '(') ||
                (s[i] == ']' && stack[top] != '[') ||
                (s[i] == '}' && stack[top] != '{'))
            {
                return 0;
            }

            top--;
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1
    char s1[] = "()[]{}";

    printf("Test Case 1:\n");
    printf("Valid: %s\n", isValid(s1) ? "Yes" : "No");

    // Test Case 2 - Edge case
    char s2[] = "(]";

    printf("\nTest Case 2:\n");
    printf("Valid: %s\n", isValid(s2) ? "Yes" : "No");

    return 0;
}