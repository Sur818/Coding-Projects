def CountFrequency(my_list):
	freq={}
	for x in my_list:
		if x in freq:
			freq[x]+=1
		else:
			freq[x]=1
	for key,val in freq.items():
		print(f"{key} occurs in {val} times:-")
			

l=eval(input("enter data in list:- "))
CountFrequency(l)