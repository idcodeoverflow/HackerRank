
raw_input()

condition = True

count_mag = {}
count_msg = {}

magazine = raw_input()
msg = raw_input()

for word in magazine.split(' '):
	try:
		count_mag[word] = 1 + count_mag[word]
	except:
		count_mag[word] = 1 
	
for word in msg.split(' '):
	try:
		count_msg[word] = 1 + count_msg[word]
	except:
		count_msg[word] = 1 

for key in count_msg.keys():
	try:
		if count_mag[key] < count_msg[key]:
			condition = False
			print('No Error')
			print('key %s message %d mag %d'% (key, count_msg[key], count_mag[key]))
	except:
		condition = False
		print('Error')
		break

if condition:
	print('Yes')
else:
	print('No')