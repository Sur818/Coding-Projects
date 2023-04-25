dict={}
sum=0;
for i in range(5):
 dict[i+1]=int(input('enter no:-'))
print(dict)
#print(dict.get(8,'notfound'))
for i in range(len(dict)):
	 sum=sum+dict[i+1]
print(sum)	 