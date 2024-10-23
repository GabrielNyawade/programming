#include <stdio.h>
#include <stdlib.h>

int main() {
    char *username = getenv("USERNAME");
    printf("%s\n", username);
    int a;
    printf("%d\n", a);
    return 0;

}