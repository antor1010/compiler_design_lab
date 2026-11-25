#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct N { char c; struct N *l, *r; } N;
char *p;

N *node(char c, N *l, N *r) {
    N *n = malloc(sizeof *n);
    n->c = c; n->l = l; n->r = r;
    return n;
}
void sk() { while (isspace(*p)) p++; }

N *E();
N *F() {
    sk();
    if (*p == '(') { p++; N *n = E(); sk(); p++; return n; }
    return node(*p++, NULL, NULL);
}
N *T() {
    N *n = F();
    for (sk(); *p == '*' || *p == '/'; sk()) { char o = *p++; n = node(o, n, F()); }
    return n;
}
N *E() {
    N *n = T();
    for (sk(); *p == '+' || *p == '-'; sk()) { char o = *p++; n = node(o, n, T()); }
    return n;
}
void show(N *n, int d) {
    if (!n) return;
    show(n->r, d + 1);
    printf("%*s%c\n", d * 4, "", n->c);
    show(n->l, d + 1);
}

int main() {
    char s[100];
    fgets(s, sizeof s, stdin);
    p = s;
    N *lhs = F(); sk(); p++;
    show(node('=', lhs, E()), 0);
    return 0;
}