def remove_dup(str):
 str1=''
 for i in str:
  if i not in str1:
   str1=str1+i
 print(str1)

       
s=input("enter sentence:-")
s=s.split(' ')
for x in s:
	remove_dup(x)