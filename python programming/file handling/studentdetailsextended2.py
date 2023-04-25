import pickle
def show_topper(resukt,per):
	for x in dict:
		print(x,"=",dict[x])
	print("percantege=",per,'%')
temp=0
f=open('studentdetails.dat','rb')
a=pickle.load(f)
print("topper details:-")
for dict in a:
	ans=dict['acedmic_details']
	if sum(ans.values())>temp:
		result=dict
		per=sum(ans.values())/len(ans)
		temp=sum(ans.values())
show_topper(result,per)

	
	