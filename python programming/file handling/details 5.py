f=open("details.txt",'r')
a=f.readlines()
print(a)
txt_line=input("enter txt line which want to insert:-")
txt_line=txt_line+'\n'
txt_line=txt_line
line=int(input("enter line no after which you want to insert:-"))
a.insert(line,txt_line)
#for line in a:
	#print(line,end='')
f=open("detailupdates3.txt",'w')
f.writelines(a)


