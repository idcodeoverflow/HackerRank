#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

int compare(std::string a, std::string b)
{
	int size_a = a.length(), size_b = b.length(), i = 0;
	
	if(size_a != size_b)
		return size_a < size_b;
	
	for(; i < size_a; i++)
		if(a[i] != b[i])
			return a[i] < b[i];
	return 0;
}

int main()
{
	std::string words[200000];
	int n = 0, i = 0;
	
	scanf("%d", &n);
	
	for(; i < n; i++)
		std::cin>>words[i];
	
	std::sort(words, words + n, compare);
	
	for(i = 0; i < n; i++)
	{
		printf("%s\n", words[i].c_str());
	}
	
	return 0;
}
