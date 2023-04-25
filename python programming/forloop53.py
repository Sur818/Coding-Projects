s=input("enter sentence:-")
list=s.split(' ')
st=set(list)
for x in st:
 f=list.count(x)
 print(f'frequncy of word  {x} in sentence={f}')
	
