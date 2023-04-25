s=input("enter string:-").split(" ")
s1=input("enter word/substring want to delete:-").split(' ')
ans=list(filter(lambda x :True if x not in s1 else False ,s))
print(" ".join(ans))