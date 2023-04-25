str=input("enter string:---")
str1=''
s=[]
for x in str:
 if x not in str1:
  str1=str1+x
  s.append(x)
print(''.join(s))
