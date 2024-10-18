//*二次元配列**```
#include <stdio.h>

int sum_matrix(int (*matrix)[3], int rows)
{
    int total = 0;
    int i = 0;     // 行のインデックス
    int j;         // 列のインデックス

    while (i < rows)
    {
        j = 0;
        while (j < 3)
        {
            total += matrix[i][j];
            j++;
        }
        i++;
    }
    return total;
}

int main()
{
    int matrix[2][3] = {
        {1, 0, 0},
        {1, 1, 1}
    };
    int total = sum_matrix(matrix, 2);
    printf("Total: %d\n", total); 
    return 0;
}
//```
//||Total: 4||