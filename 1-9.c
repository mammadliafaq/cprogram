#include <stdio.h>

int main()
{
    int c, d;
    d=0;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            if (d == ' ') {
                putchar(d);
                putchar(c);
            } else
                putchar(c);
        }
        d = c;
    }
    system("PAUSE");
    return 0;
}

