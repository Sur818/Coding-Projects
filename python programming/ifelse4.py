name=str(input("enter your name:-"))
m1=eval(input("enter firsr subject marks:-"))
m2=eval(input("enter second subject marks:-"))
m3=eval(input("enter third subject marks:-"))
m4=eval(input("enter 4th subject marks:-"))
m5=eval(input("enter 5th subject marks:-"))
if m1<0 or m2<0 or m3<0 or m4<0 or m5<0:
 print("invalid marks:-")
elif m1<33 or m2<33 or m3<33 or m4<33 or m4<33 or m5<33:
 print(name,"you are failed")
else:
 sum=m1+m2+m3+m4+m5
 per=sum/5
 print("percentage=",per)
 if per>=33 and per<=50:
  print(name,"passed with second division")
 elif per>50 and per<=75:
  print(name,"passed with first division")
 else:
  print(name,"passed with hounour")