a=eval(input("enter yout age:-"))
if a>100 or a<0:
   print("invalid age:-")
elif a<18:
	print('you are child:-')
elif a>=18 and a<=25:
	print('you are boy:-')
elif a>=25 and a<=40:
	print("you are men:-")
elif a>=40 and a<=60:
	print('you are adult:-')
else:
 print("you are old:-")