#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    scanf("%99s", s);

    int valid = (isalpha(s[0]) || s[0] == '_');
    for (int i = 1; valid && s[i]; i++)
        if (!isalnum(s[i]) && s[i] != '_')
            valid = 0;

    printf(valid ? "Valid identifier\n" : "Invalid identifier\n");
    return 0;
}