import sys
diff=sys.maxsize
def longest_subcl0(l,m):
	for x in l:
		if abs(sum(x)-m)<diff:
			res=x
		elif abs(sum(x)-m)==abs(sum(res)-m) and len(x)>len(res):
			res=x
	return x
			
			
		

l=eval(input("enter nested list:-"))
m=int(input("enter target:-"))
print("print  longest sublist whoose sum is closest to target:-")
print(longest_subcl0(l,m))