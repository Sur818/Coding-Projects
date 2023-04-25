s=input("enter any no:-")
l=[]
for i in range(len(s)):
 if i!=0 and i!=len(s)-1:
  l.append(s[i])
print(s[-1]+''.join(l)+s[0])
