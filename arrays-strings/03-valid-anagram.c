#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[])
{
    int count[26] = {0};
    int i;

    if (strlen(s) != strlen(t))
        return 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    // Test Case 1: Typical case
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test Case 1:\n");

    if (isAnagram(s1, t1))
        printf("Anagram\n");
    else
        printf("Not an Anagram\n");

    // Test Case 2: Edge case
    char s2[] = "rat";
    char t2[] = "car";

    printf("\nTest Case 2:\n");

    if (isAnagram(s2, t2))
        printf("Anagram\n");
    else
        printf("Not an Anagram\n");

    return 0;
}