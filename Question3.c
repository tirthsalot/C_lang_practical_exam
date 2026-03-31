#include <stdio.h>

void printOdd(int array[], int n) {
    int i;
    printf("Odd elements are:\n");
    for(i = 0; i < n; i++) {
        if(array[i] % 2 != 0)
            printf("%d ", array[i]);
    }
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    printOdd(array, 5);
    return 0;
}
