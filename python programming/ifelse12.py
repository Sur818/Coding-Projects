x,y=input("enter cordinates :-").split(",")
x=int(x)
y=int(y)
if x>0 and y>0:
	print("first qudrant:-")
elif x<0 and y>0:
	print("second quadrant:-")
elif x<0 and y<0:
	print("third quadrant:-")
else:
	print("4th quadrant:-")
