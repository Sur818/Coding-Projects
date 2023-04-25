s=input("enter string:-").split(' ')
ans=list(map(lambda x:x[::-1] ,s))
print(" ".join(ans))