a=input("enter first angle of trangle:-")
b=input("enter second angle of trangle:-")
a=int(a)
b=int(b)
c=180-(a+b)
print("third angle=",c)
if a<90 and b<90 and c<90 :
	print("accute angled trangle:-")
elif a>90 or b>90 or c>90:
	print("obtuse angled trangel:-")
else :
	print(" right angled trangel:-")