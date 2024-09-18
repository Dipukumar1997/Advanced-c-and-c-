#include <stdio.h>

int main() {
    register int i;  // Hint to store 'i' in a CPU register

    for (i = 0; i < 10; i++) {
        printf("%d\n", i);  // 'i' might be accessed faster
    }

    return 0;
}
