#include <stdbool.h>  

#define QTD_COL 100 

bool ehDiagonal(int mat[][QTD_COL], int lin, int col) {
    if (lin != col) {
        return false;  
    }
    
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            if (i != j && mat[i][j] != 0) {
                return false;  
            }
        }
    }
    
    return true;  
}

int main() {
    int mat1[3][3] = { {1, 0, 0}, 
                       {0, 2, 0}, 
                       {0, 0, 3} };
    int mat2[3][3] = { {0, 0, 0}, 
                       {0, 2, 0}, 
                       {0, 0, 2} };
    int mat3[3][3] = { {1, 0, 0}, 
                       {0, 2, 0}, 
                       {1, 0, 2} };

    if (ehDiagonal(mat1, 3, 3)) {
        printf("mat1 é uma matriz diagonal.\n");
    } else {
        printf("mat1 não é uma matriz diagonal.\n");
    }

    if (ehDiagonal(mat2, 3, 3)) {
        printf("mat2 é uma matriz diagonal.\n");
    } else {
        printf("mat2 não é uma matriz diagonal.\n");
    }

    if (ehDiagonal(mat3, 3, 3)) {
        printf("mat3 é uma matriz diagonal.\n");
    } else {
        printf("mat3 não é uma matriz diagonal.\n");
    }
    
    return 0;
}
