#include <stdio.h>
#include <ctype.h>

int main() {
    char line[100], declared[26] = {0};

    while (fgets(line, sizeof line, stdin) && line[0] != '\n') {
        if (line[0] == 'i' && line[1] == 'n' && line[2] == 't') {
            for (char *p = line + 3; *p; p++)
                if (isalpha(*p)) declared[*p - 'a'] = 1;
        } else
            for (char *p = line; *p; p++)
                if (isalpha(*p) && !declared[*p - 'a'])
                    printf("Undeclared variable: %c\n", *p);
    }

    return 0;
}