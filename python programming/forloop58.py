print("this program to find max frquency charecter in each string---->")
s=input("enter any sentence:-")
list=s.split(' ')
dict={}
for x in list:
 subdict={}
 ans=0
 for j in range(len(x)):
  f=x.count(x[j])
  if f>ans:
   ans=max(ans,f)
   max_frw=x[j]
 subdict[f'{max_frw}']=ans
 dict[f'{x}']=subdict
print(dict)
   
   
   
   	
