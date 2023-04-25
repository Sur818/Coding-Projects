dict={}
name=""
def convert_dict():
	n=int(input("enter no of subject:-"))
	dict1={}
	for i in range(n):
		sub_name=input("enter subject name:-")
		mark=int(input("enter marks:-"))
		dict1[f"{sub_name}"]=mark	
	return dict1
	
def print_topper(dict):
		ans=0
		for x in dict:
			sum1=0
			temp_dict=dict[x]
			sum1=sum(temp_dict.values())
			per=sum1/len(temp_dict)
			if per>ans:
				ans=max(ans,per)
				topper_name=x
				perc=per
		print(x)
		print("percentage=",perc)
		
				
			
		    
			
			
			
		
							
										
n=int(input("how many students:-"))
for i in range(n):
	data=input("enter name of students:-")
	x=convert_dict()
	dict[f"{data}"]=x
print(dict)
print("topper name is =:-")
print_topper(dict)

