#include <cstdio>

int main()
{
	int n = 0, k = 0, b = 0, bill[100004] = {0}, i = 0, sum = 0, res = 0;
	
	scanf("%d %d", &n, &k);
	
	for(; i < n; i++) {
		scanf("%d", &bill[i]);
		sum += bill[i];
	}
	scanf("%d", &b);
	
	res = (sum - bill[k]) / 2;
	if(b == res)
		printf("Bon Appetit\n");
	else
		printf("%d\n", b - res);
	return 0;
}
