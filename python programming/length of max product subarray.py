def length_sub(l):
	zero_index=[]
	for i in range(len(l)):
		if l[i]==0:
			zero_index.append(i)
	if len(zero_index)==0:
		return len(l)
	else:
		maxlen=zero_index[0]
		for i in range(len(zero_index)-1):
			if zero_index[i+1]-zero_index[i]-1>maxlen:
				maxlen=zero_index[i+1]-zero_index[i]-1
		if len(l)-zero_index[len(zero_index)-1]-1>maxlen:
			maxlen=len(l)-zero_index[len(zero_index)-1]-1
	return maxlen

l=eval(input("enter list:-"))
print(length_sub(l))