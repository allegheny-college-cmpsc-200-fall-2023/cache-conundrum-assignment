#include <stdio.h>
#include <stdlib.h>

#include "headers/heap.h"
#include "headers/cache.h"
#include "headers/timing.h"
#include "pico/stdlib.h"

float averageMat_v1(int **mat, int n) {
    int i, j, total = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Note indexing: [i][j]
            total += mat[i][j];
        }
    }
    return (float) total / (n * n);
}

float averageMat_v2(int **mat, int n) {
    int i, j, total = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Note indexing: [j][i]
            total += mat[j][i];
        }
    }
    return (float) total / (n * n);
}

int **genRandomMatrix(int n, int max) {
    int i, j;
    int **mat = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        mat[i] = malloc(n * sizeof(int));
        for (j = 0; j < n; j++) {
            mat[i][j] = 1 + rand() % max;
        }
    }
    return mat;
}

void free_all(int **mat, int n) {
    int i;
    for (i = 0; i < n; i++) {
        free(mat[i]);
    }
    free(mat);
}

int main(int argc, char **argv) {
    stdio_init_all();

    int i;
    float res;
    float timer;
    int n = 100;
    srand(time(NULL));
    struct timeval tstart, tend;
    int ** matrix = genRandomMatrix(n, 100);

    // Version 1
    // TODO: Set up beginning time
    res = averageMat_v1(matrix, n);
    // TODO: Set up ending time
    // TODO: Calculate cache miss and hit counts
    // TODO: Calculate cache hit and miss rates
    // TODO: Calculate net_time, store as timer
    printf("v1 average is: %.2f; time is %g\n", res, timer);

    reset_cache();

    // Version 2
    //TODO: Set up beginning time
    res = averageMat_v2(matrix, n);
    // TODO: Set up ending time
    // TODO: Calculate cache miss and hit counts
    // TODO: Calculate cache hit and miss rates
    // TODO: Calculate net_time, store as timer
    printf("v2 average is: %.2f; time is %g\n", res, timer);

    // Free memory used by matrix generation
    free_all(matrix, n);
    return 0;
}
