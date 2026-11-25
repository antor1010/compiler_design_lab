#include <stdio.h>

char in[100];
int ip = 0;

int A() {
    if (in[ip] == '+') {
        ip++;
        if (in[ip] != 'i') return 0;
        ip++;
        return A();
    }
    return 1;
}

int E() {
    if (in[ip] != 'i') return 0;
    ip++;
    return A();
}

int main() {
    scanf("%99s", in);
    puts(E() && in[ip] == '\0' ? "Accepted" : "Rejected");
    return 0;
}