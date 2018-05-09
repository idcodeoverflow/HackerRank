
pages = input()
goal = input()

start = goal // 2

end = (pages - goal) // 2
if pages % 2 == 0:
	end += goal % 2

if end > start:
	print(start)
else:
	print(end)
	
