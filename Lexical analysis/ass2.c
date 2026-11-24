#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%99s", s);
    int n = strlen(s), i = 0;

    if (strcmp(s, "a") == 0)
        printf("Matches: a\n");

    else if (strcmp(s, "abb") == 0)
        printf("Matches: abb\n");

    else {
        while (s[i] == 'a') i++;
        int j = i;
        while (s[j] == 'b') j++;

        if (j > i && j == n)
            printf("Matches: a*b+\n");
        else
            printf("Rejected\n");
    }

    return 0;
}