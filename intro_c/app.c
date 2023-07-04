#include <stdio.h>

int main()
{
    int age = 16;
    int* address_age = &age;
    scanf("%d", address_age);
    printf("%s %s - Son âge : %d - addr %ld / %p \n", "Valentin", "Le BG", age, (long)address_age, address_age);
    scanf("%d", address_age);
    return 0;
}
    