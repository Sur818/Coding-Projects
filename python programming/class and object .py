# find set of  three  no whoose is zero:---
class set_of:
	def func(self,l,target):
		i=0
		dict={}
		while i<len(l):
			for j in range(i+1,len(l)):
				if target-(l[j]+l[i]) in dict:
					return (i,dict[target-(l[j]+l[i])],j)
				else:
					dict[l[j]]=j
			i+=1

l=eval(input("enter list:-"))
target=eval(input("enter target:-"))
obj=set_of()
print("index1=%d,index2=%d,index3=%d"%obj.func(l,target))			
			
			
		