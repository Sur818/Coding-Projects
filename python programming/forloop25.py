n=int(input("enter no of students:-"))
temp=100
for i in range(n):
 name=input("enter name:-")
 sum=0
 for j in range(0,5):
  mark=int(input("enter marks:-"))
  sum=sum+mark
 per=sum/5
 if  per<temp:
  min_name=name
  min_per=per
  temp=min_per
print("min per=",min_per,"& student name=",min_name)