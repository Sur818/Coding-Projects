l=eval(input("enter nested list:-"))
ans1=max(l,key=lambda x:len(x))
ans2=min(l,key=lambda x:len(x))
print("sublist whoose length are max=",ans1)
print("sublist whoose length are min=",ans2)





#or---->
#print("sublist whose length are max:-")
#temp=0
#for x in l:
	#if len(x)>temp:
		#temp=max(temp,len(x))
	#	ans=x
#print(ans)





#for x in l:
#	if len(x)<temp:
#		temp=min(temp,len(x))
#		ans=x
#print(ans)	
