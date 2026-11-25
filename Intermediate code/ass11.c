#include <stdio.h>

char *p, nm[50][4];
int k = 0, t = 0;
char *gen(char *a, char o, char *b) {
    char *r = nm[k++];
    sprintf(r, "t%d", ++t);
    printf("%s = %s %c %s\n", r, a, o, b);
    return r;
}
char *id() { char *r = nm[k++]; r[0] = *p++; r[1] = 0; return r; }
char *T() {
    char *a = id();
    while (*p == '*' || *p == '/') { char o = *p++; a = gen(a, o, id()); }
    return a;
}
char *E() {
    char *a = T();
    while (*p == '+' || *p == '-') { char o = *p++; a = gen(a, o, T()); }
    return a;
}
int main() {
    char s[100];
    scanf("%99s", s);
    p = s;
    E();
    return 0;
}