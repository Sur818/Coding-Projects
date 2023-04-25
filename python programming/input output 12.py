dob=input("enter dob:-")
dob=dob.split("/")
print(dob)
#print(type(dob))
date=dob[0]
month=dob[1]
year=dob[2]
print("date=",date,"month=",month,"year=",year)
dob='-'.join(dob)
print(dob)
#print(type(dob))
