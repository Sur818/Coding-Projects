s="suraj"
per=int(len(s)*50/100)
s=s[per::-1]+s[per+1::]
print(s)