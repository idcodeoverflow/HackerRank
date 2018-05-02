n = ''
i = 0
nums = []
sum = 0


i = input()

i -= 1
n = raw_input()
nums = n.split()

sum = reduce(lambda x, y: int(x) + int(y), nums)
	
print(sum)

