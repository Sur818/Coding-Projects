import math
cp=eval(input("enter cost price:-"))
sp=eval(input("enter selling price:-"))
ans=(sp-cp)
per_ans=abs((ans/cp)*100)
if ans>0:
	print("profit=",ans,"\nand percentage profit={}".format(per_ans))
elif ans<0:
	print("loss=",abs(ans),"\nand percentage loss={}".format(per_ans))
else :
	 print("no profit no loss")
	 

