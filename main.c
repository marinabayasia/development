#include <stdio.h>

int main(void) {
    int sz = 100;

    int a[sz];

    for (int i = 0; i < sz; ++i) {
        a[i] = i * i;
        printf("okie %i dokie blah blah blah\n", a[i]);
    }
}
