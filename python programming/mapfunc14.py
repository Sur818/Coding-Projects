from operator import eq
def count_samepair(l1,l2):
	ans=sum(map(eq,l1,l2))
	return ans
	


n=int(input("enter no: of term:-"))
l1=[int(input(f"l[{i+1}]=")) for i in range(n)]
print('\n')
l2=[int(input(f"l[{j+1}]=")) for j in range(n)]
print("same pair=",count_samepair(l1,l2))
