#include <cstdio>
#define ABS(A) ((A < 0) ? (A) * -1 : (A))

int main()
{
	int mat[102][102], i = 0, j = 0, sum_a = 0, sum_b = 0, size = 0;
	
	scanf("%d", &size);
	
	for(; i < size; i++)
		for(j = 0; j < size; j++)
			scanf("%d", &mat[i][j]);
	
	for(i = 0; i < size; i++)
	{
		sum_a += mat[i][i];
		sum_b += mat[i][size - i - 1];
	}
	
	printf("%d\n", ABS(sum_a - sum_b));
	
	return 0;
}
