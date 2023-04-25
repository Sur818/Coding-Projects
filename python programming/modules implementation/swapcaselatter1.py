import charecter ,charectermodule

def swapcase_letter(s):
	s1=""
	s=s.split(" ")
	for x in s:
		if charectermodule.alluppercase(x):
			s1+=charecter .decapitallize(x)+" "
		else:
			s1+=charecter .capitallize(x)+" "
	return s1

print(swapcase_letter("suraj ASHWANI rajnikant PAWAN"))
		
		
		