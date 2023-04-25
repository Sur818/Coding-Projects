dict={}
subdict={}
temp=0
n=int(input("enter no of student:-"))
for i in range(0,n):
 name=input("enter name:-")
 for j in range(0,3):
  mark=input("enter sub{} marks=".format(j+1))
  subdict[f"sub{j+1}"]=mark
 dict[f"{name}"]=subdict
print(dict)
for x in dict :
 sum=0
 for i in range(len(dict[x])):
  temp=int(dict[x][f'sub{i+1}'])
  sum=sum+temp
 per=sum/3
 if per>temp:
  max_name=x
  max_per=per
  temp=max_per
print(f"topper name={max_name} &max_per={max_per}")
  

 
 
 

  
 
