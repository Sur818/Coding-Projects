import math
list=[]
def one_comp(bin):
 for x in bin[::-1]:
  if x=='1':
   list.append(0)
  else:
   list.append(1)
 return list
  
  
def no(s):
 value=0
 k=0
 for i in s[::-1]:
    if i=='1':
    	value = value +int(math.pow(2, k))
    k+=1
    
 return value

	
n=int(input("enter no"))
bin=bin(n)
print(bin)
l=one_comp(str(bin[2::]))
s=''.join(str(e) for e in list)
#print(s)
print('one s complimant to no is:---')
print(no(s))




	
	
	
	
		 
		 
		 
		