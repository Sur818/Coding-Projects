s=input("enter string:-").split(" ")
ans= list(filter(lambda x : True if x==x[::-1] else False ,s))
print(" ".join(ans))