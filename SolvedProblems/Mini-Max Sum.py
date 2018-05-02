
numbers = []

inp = raw_input()

str_numbers = inp.split()

str_numbers = sorted(str_numbers)

min = reduce(lambda x,y: int(x) + int(y), str_numbers[:4])
max = reduce(lambda x,y: int(x) + int(y), str_numbers[-4:])

print("%s %s"% (min, max))
