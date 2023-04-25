n=input("enter no:-")
base=input("enter base:-")
output=input("whome chanege to:-")
dict={'dec':10,'bin':2,'oct':8,'hex':16}
if base in dict:
 temp=dict[base]
 m=int(n,temp)
if output=='dec':
  print(dec(m))
elif output=='bin':
  print(bin(m))
elif output=='oct':
  print(oct(m))
elif output=='hex':
 print(hex(m))


   
 
 	
 	
 
  