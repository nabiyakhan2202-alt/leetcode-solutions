#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char* strs[], int strsSize)
{
    static char prefix[100];
    int i, j;

    strcpy(prefix, strs[0]);

    for (i = 1; i < strsSize; i++)
    {
        j = 0;

        while (prefix[j] != '\0' && strs[i][j] != '\0' &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main()
{
    // Test Case 1
    char *strs1[] = {"flower", "flow", "flight"};

    printf("Test Case 1:\n");
    printf("Longest Common Prefix: %s\n",
           longestCommonPrefix(strs1, 3));

    // Test Case 2 - Edge case
    char *strs2[] = {"dog", "racecar", "car"};

    printf("\nTest Case 2:\n");
    printf("Longest Common Prefix: %s\n",
           longestCommonPrefix(strs2, 3));

    return 0;
}