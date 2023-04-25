n=input("enter no:-").split(" ")
print(n)
dict={}
for i in range(len(n)):
	dict[f"k{i+1}"]=int(n[i])
print(dict)	
	