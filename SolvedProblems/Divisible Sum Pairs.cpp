#include <cstdio>

int main()
{
	int i = 0, j = 0, n = 0, k = 0, res = 0, arr[102] = {0};
	scanf("%d %d", &n, &k);
	for(; i < n; i++)
		scanf("%d", &arr[i]);
	for(i = 0; i < n; i++)
		for(j = 0; j < i; j++)
			if((arr[i] + arr[j]) % k == 0) res++;
		
	printf("%d\n", res);
	return 0;
}
