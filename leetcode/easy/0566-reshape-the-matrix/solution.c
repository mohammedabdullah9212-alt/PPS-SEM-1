#include <stdlib.h>

int** matrixReshape(int** mat, int matSize,
                    int* matColSize, int r, int c,
                    int* returnSize,
                    int** returnColumnSizes) {

    int rows = matSize;
    int cols = matColSize[0];

    if (rows * cols != r * c) {
        *returnSize = rows;
        *returnColumnSizes = matColSize;
        return mat;
    }

    int** result = (int**)malloc(r * sizeof(int*));
    *returnColumnSizes = (int*)malloc(r * sizeof(int));

    *returnSize = r;

    for (int i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    for (int i = 0; i < rows * cols; i++) {
        result[i / c][i % c] = mat[i / cols][i % cols];
    }

    return result;
}