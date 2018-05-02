#include <cstdio>

inline int validate(int *edges)
{
	int i = 0;
	for(; i < 3; i++)
	{
		if(edges[i] <= 0)
			return 0;
		if(edges[i] + edges[(i + 1) % 3] < edges[(i + 2) % 3])
			return 0;
	}
	if(edges[0] == edges[1] && edges[1] == edges[2])
		return 1;
	return 2;
}

int main()
{
	int edges[3], i = 0;
	
	for(; i < 3; i++)
		scanf("%d", &edges[i]);
	
	printf("%d\n", validate(edges));
	return 0;
}
