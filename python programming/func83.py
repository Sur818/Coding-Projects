def get_iotavalue(power):
	if power%2!=0 :
		if power%4==1 or power==1:
			return '+i'
		else:
			return '-i'
	else:
		if power%4==0 or power==0:
			return +1
		else:
			return -1

n=int(input("enter power:-"))
print(get_iotavalue(n))
	
	
	