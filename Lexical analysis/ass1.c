#include <stdio.h>
#include <string.h>

int main() {
    char s[256];
    fgets(s, sizeof s, stdin);

    char *p = s;
    while (*p == ' ' || *p == '\t') p++;

    if (p[0] == '/' && p[1] == '/')
        printf("Single-line comment\n");
    else if (p[0] == '/' && p[1] == '*' && strstr(p + 2, "*/"))
        printf("Multi-line comment\n");
    else
        printf("Not a comment\n");

    return 0;
}