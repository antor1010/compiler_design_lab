#include <stdio.h>
#include <string.h>
#include <ctype.h>

int prec(char c) { return c == '*' || c == '/' ? 2 : c == '+' || c == '-' ? 1 : 0; }

int main() {
    char s[100], st[100];
    int top = -1;
    scanf("%99s", s);

    for (char *p = s; *p; p++) {
        if (isalnum(*p)) putchar(*p);
        else if (*p == '(') st[++top] = *p;
        else if (*p == ')') {
            while (top >= 0 && st[top] != '(') putchar(st[top--]);
            top--;
        } else {
            while (top >= 0 && prec(st[top]) >= prec(*p)) putchar(st[top--]);
            st[++top] = *p;
        }
    }

    while (top >= 0) putchar(st[top--]);
    putchar('\n');
    return 0;
}