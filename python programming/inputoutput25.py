p=eval(input("enter initial principle amout:-"))
r=eval(input("enter intret rate:-"))
n=eval(input("enter time"))
temp1=1+(r/100)
temp2=temp1**n
a=p*temp2-p
print("final amount={}".format(a))
