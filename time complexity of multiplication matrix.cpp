#include <stdio.h>
#include <time.h>
void multiply_matrices(int matrix1[][3], int matrix2[][3], int result[][3]) 
{
    clock_t start_time, end_time;
    double time_complexity;
    start_time = clock();
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) 
			{
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    end_time = clock();
    time_complexity = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Result:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    printf("Time Complexity (in seconds): %f\n", time_complexity);
}
int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];
    multiply_matrices(matrix1, matrix2, result);
    return 0;
}
