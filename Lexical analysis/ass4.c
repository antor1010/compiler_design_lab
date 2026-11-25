#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    scanf("%9s", s);

    const char *ops[] = {
        "+", "-", "*", "/", "%", "=", "<", ">", "!", "&", "|", "^", "~",
        "++", "--", "+=", "-=", "*=", "/=", "%=", "==", "!=", "<=", ">=",
        "&&", "||", "<<", ">>"
    };
    int n = sizeof ops / sizeof ops[0], found = 0;

    for (int i = 0; i < n && !found; i++)
        if (strcmp(s, ops[i]) == 0) {
            printf("%s is a valid operator\n", s);
            found = 1;
        }

    if (!found) printf("%s is not a valid operator\n", s);
    return 0;
}