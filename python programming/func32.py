def freq(n):
 s=str(n)
 for x in set(s):
  f=s.count(x)
  print(f"frequency of {x}in {s}=",f)


n=int(input("enter no:-"))
freq(n)
