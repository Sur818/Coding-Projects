import string_slice
s=input("enter sentence:-").split(" ")
s1=""
for x in s:
	per=int(input(f"enter percentage of {x}="))
	s1=s1+" "+string_slice.per_slice(x,per)
print(s1)
	