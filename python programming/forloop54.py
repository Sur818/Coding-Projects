dict={}
subdict={}
ans=0.0
sum=0
ans1=100.0
n=int(input("enter no of student:-"))
for i in range(0,n):
 name=input("enter name:-")
 for j in range(0,3):
  mark=input("enter sub{} marks=".format(j+1))
  subdict[f"{name}_sub{j+1}"]=mark
 dict[f"{name}"]=subdict
 subdict={}
print(dict)
for x in dict :
 sum=0
 for i in range(len(dict[x])):
  temp=int(dict[x][f'{x}_sub{i+1}'])
  sum=sum+temp
 per=sum/3
 if per>ans:
  max_name=x
  max_per=per
  ans=max(ans,per)
 if per<ans1:
  min_name=x
  min_per=per
  ans1=min(ans1,per)
  
print(f"topper name={max_name} &max_per={max_per}")
print(f'studen name has min per={min_name},&min_per={min_per}')
  

 
 
 

  
 
