
inp_time = input()

tokens = inp_time.split(":")

suffix = (tokens[2])[2:]
hour = int(tokens[0]) 
min = tokens[1]
sec = (tokens[2])[:2]
outcome = ""

if suffix == "PM" or suffix == "pm":
	if hour == 12:
		outcome = ":".join(["12", min, sec])
	else:
		outcome = ":".join([str(hour + 12), min, sec])
else:
	if hour == 12:
		outcome = ":".join(["00", min, sec])
	else:
		res_hour = ""
		if(hour < 10):
			res_hour = "0" + str(hour)
		outcome = ":".join([res_hour, min, sec])
		
print(outcome)