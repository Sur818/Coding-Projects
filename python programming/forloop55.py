string=input("enter  sentence:-")
list =string.split(' ')
d={}
for i in range(len(list)):
 s=list[i]
 sub_d={}
 for j in range(len(s)):
  x=s.count(s[j])
  sub_d[f'{s[j]}']=x
 d[f'{s}']=sub_d
print(d)
  
  
 
 
 