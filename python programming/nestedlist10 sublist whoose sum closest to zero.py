import sys
l=eval(input("enter nested list:-"))
print("sublist whoose sum closest to zero:-")
diff=sys.maxsize
for x in l:
	if abs(sum(x)-0)<diff:
		diff=abs(sum(x)-0)
		ans=x
print(ans)

	