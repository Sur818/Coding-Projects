import random
def scrambling(x):
	x=list(x)
	random.shuffle(x)
	return "".join(x)
	
	



l=input("enter string:-").split(' ')
print("scrambling the latters of each word:-")
ans=list(map(scrambling,l))
print(ans)