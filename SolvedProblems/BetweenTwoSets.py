from sets import Set
import math

factors = Set()
temp_set = Set()

def get_factors(n):
	for i in range(1, n + 1):
		if n % i == 0:
			factors.add(i)
	factors.add(int(n))
	if n % 2 == 0:
		factors.add(int(n) / 2)
	


raw_input()

a = raw_input()

b = raw_input()

for n in b.split():
	get_factors(int(n))

for n in a.split():
	temp_set = Set(factors)
	for factor in temp_set:
		if factor % int(n) != 0:
			factors.discard(factor)	
			
for n in b.split():
	temp_set = Set(factors)
	for factor in temp_set:
		if int(n) % factor != 0:
			factors.discard(factor)	
	
		
print(len(factors))
