s=input("enter string:-")
per=int(input("enter percentage:-"))
per=int(len(s)*per/100)
s1=s[:per]
s2=s[per:]
print(s1+" "+s2)