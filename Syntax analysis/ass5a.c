#include <stdio.h>
#include <string.h>

const char *rule(char N, char t) {
    if (N == 'E' && t == 'i') return "iA";
    if (N == 'A' && t == '+') return "+iA";
    if (N == 'A' && t == '$') return "";
    return NULL;
}

int main() {
    char in[100], st[100] = "$E";
    int top = 1, ip = 0;
    scanf("%98s", in);
    strcat(in, "$");

    while (st[top] != '$') {
        char X = st[top], a = in[ip];
        if (X == 'E' || X == 'A') {
            const char *r = rule(X, a);
            if (!r) break;
            top--;
            for (int k = strlen(r) - 1; k >= 0; k--)
                st[++top] = r[k];
        } else if (X == a) { top--; ip++; }
        else break;
    }

    puts(st[top] == '$' && in[ip] == '$' ? "Accepted" : "Rejected");
    return 0;
}