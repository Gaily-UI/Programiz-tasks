#include <stdio.h>
#include <stdarg.h>

void print_integers(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        printf("%d ", num);
    }

    va_end(args);
}

int main() {
    print_integers(3, 10, 20, 30);
    return 0;
}
