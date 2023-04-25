n=input("enter no:-").split(" ")
print(n)
dict={}
sum=0
for i in range(len(n)):
	dict[f"k{i+1}"]=int(n[i])
	sum=sum+int(n[i])
print(dict)
print("sum of values of dictionary={}".format(sum))	
	