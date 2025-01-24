#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }
    return array;
}

int main() {
    int size = 5;
    int* array = createArray(size);
    if (array != NULL) {
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        free(array);
    }
    return 0;
}