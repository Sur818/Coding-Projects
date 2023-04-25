def rotate_list(l,dir,k):
	if dir=='Left':
		return l[k:]+l[:k]
	else:
		return l[-k:]+l[:-k]
		
l=eval(input("enter list:-"))
dir=str(input("enter direction:-"))
k=int(input("enter rotate position:;"))
print(rotate_list(l,dir,k))
