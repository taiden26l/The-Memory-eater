#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *buffer;
    int size = 10;
    long long buffer_size = 64LL * 1024 * 1024 * 1024;
    buffer = malloc(buffer_size);
    if (buffer == NULL) {
        printf("Allocation Failure: buffer is NULL\n");
        return 1;
    }
    printf("Memory allocation successful: allocated %lld bytes\n", buffer_size);
    printf("Press Enter to continue...\n");
    getchar();
    for (int i = 0; i < size; i++) {
        buffer[i] = i * 10;
    }
    for (long long i = 0; i < (buffer_size / sizeof(int)); i++) {
        buffer[i] = i * 10;
    }
    printf("Buffer filled.");
    getchar();
    free(buffer);
    buffer = NULL;
    return 0;
}
