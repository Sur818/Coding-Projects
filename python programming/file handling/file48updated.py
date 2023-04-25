f=open("file48.txt",'w+')
l=[" this is suraj singh\n"," i am from jaunpur\n",' i am from sultanpur\n',' i am doing b.tech from REC Banda\n']
f.writelines(l)
f.seek(0)
print(f.read())
f.write("\n hello")


