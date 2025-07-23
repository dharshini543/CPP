#include <stdio.h>

struct Example {
    int x;
    char a[20];
    char b[20];
};

int main() {
    struct Example e;

    printf("Size of struct: %zu\n", sizeof(e));
    printf("Address of struct: %p\n", (void*)&e);
    printf("Address of x: %p\n", (void*)&e.x);
    printf("Address of a: %p\n", (void*)&e.a);
    printf("Address of b: %p\n", (void*)&e.b);

    printf("Offset of x: %ld\n", (long)((char*)&e.x - (char*)&e));
    printf("Offset of a: %ld\n", (long)((char*)&e.a - (char*)&e));
    printf("Offset of b: %ld\n", (long)((char*)&e.b - (char*)&e));

    // Check if struct size is multiple of 4
    if (sizeof(e) % 4 == 0)
        printf("✅ Struct size is a multiple of 4.\n");
    else
        printf("❌ Struct size is NOT a multiple of 4.\n");

    return 0;
}
