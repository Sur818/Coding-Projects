import string_module
s="suraj singh suraj suraj"
#print(string_module.replace_count(s,'suraj',"hello",3))
#print(string_module.replace_range(s,2,4,"hello"))
s="hello my name is suraj singh suraj singh is a good boy   always respect all"
#print(string_module.replace_all(s,"suraj","ashwani"))


# odd places word reverse------->
s=input("enter string:-").split()
for i in range(len(s)):
	if (i+1)%2!=0:
		s1=s[i][::-1]
		s[i]=s1
print(" ".join(s))





	
	


