#program to remove duplicacy--->
s=input("enter any string:-")
i=0
s1=''
for x in s:
 if s.index(x)==i:
  s1+=x
 i+=1
print(s1)