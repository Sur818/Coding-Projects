name=input("enter name:-")
unit=int(input("enter unit consumed:-"))
if unit<200:
  amt=unit*1.20
  print(name,"your billing is:-",amt)
elif unit>=200 and unit<400:
  amt=(unit-199)*1.5+199*1.2
  if amt>=400:
     surcharge=(amt*15)/100
     if surcharge>100:
       amt=amt+surcharge
     else:
       amt=amt+100
  print(name,"your billing is",amt)
elif unit>=400 and unit<600:
 amt=(unit-399)*1.8+200*1.5+199*1.2
 surcharge=(amt*15)/100
 if surcharge>100:
	  amt=amt+surcharge
 else:
	  amt=amt+100
 print(name,"your billing is",amt)
elif unit>=600:
 amt=(unit-599)*2+200*1.8+200*1.5+199*1.2
 surcharge=(amt*15)/100
 if surcharge>100:
	  amt=amt+surcharge
 else:
	  amt=amt+100
 print(name,"your billing is:-",amt)
	  