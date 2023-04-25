f=open("file32.txt",'r')
a=f.read().split(' ')
dict={}
k=0
print("list of anagram words:--")
for i in range(len(a)):
	list1=[]
	f=0
	list1.append(a[i])
	for j in range(i+1,len(a)):
		if sorted(a[i])==sorted(a[j]):
			list1.append(a[j])
			f+=1
	if f!=0:
		dict[k+1]=list1
		k+=1
print(dict)