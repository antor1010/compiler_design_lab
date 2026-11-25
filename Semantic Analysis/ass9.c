#include <stdio.h>
#include <string.h>

int main() {
    char line[100];
    int loops = 0, ln = 0;

    while (fgets(line, sizeof line, stdin) && line[0] != '\n') {
        ln++;
        if (strstr(line, "for") || strstr(line, "while") || strstr(line, "do"))
            loops++;
        if (strstr(line, "break") && loops == 0)
            printf("Line %d: break outside loop\n", ln);
        if (strchr(line, '}') && loops > 0)
            loops--;
    }
    return 0;
}