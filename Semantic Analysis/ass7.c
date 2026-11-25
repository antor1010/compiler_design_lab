#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char t[10], n[20], v[50], *e;
    scanf("%9s %19s = %49[^;];", t, n, v);

    int ok = 0;
    if (!strcmp(t, "int")) {
        strtol(v, &e, 10);
        ok = (e != v && *e == 0);
    }
    else if (!strcmp(t, "float") || !strcmp(t, "double")) {
        strtod(v, &e);
        ok = (e != v && *e == 0);
    }
    else if (!strcmp(t, "char")) {
        ok = (strlen(v) == 3 && v[0] == '\'' && v[2] == '\'');
    }
    else if (!strcmp(t, "char*")) {
        int l = strlen(v);
        ok = (l >= 2 && v[0] == '"' && v[l - 1] == '"');
    }

    printf("%s %s = %s : %s\n", t, n, v, ok ? "Valid" : "Type mismatch");
    return 0;
}