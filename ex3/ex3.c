#include <stdio.h>

int main(int argc, char *argv[])
{
    int age = 100;
    int height = 72;

    printf("I am %d argc and %s argv.\n", argc, argv[0]);
    printf("I am %d inches tall and %d years old.\n", height, age);

    return 0;
}
