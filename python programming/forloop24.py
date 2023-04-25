n=int(input("enter no of students:-"))
temp=0
for i in range(n):
  name=input("enter name:-")
  sum=0
  for j in range(0,2):
   mark=int(input("enter marks:-"))
   sum=sum+mark
  per=sum/5
  if  per>temp:
   max_name=name
   print(max_name)
   max_per=per
   temp=max_per

print("max per=",max_per,"& student name=",max_name)