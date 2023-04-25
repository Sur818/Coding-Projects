from itertools import groupby
from operator import itemgetter

l=input("enter word:-").split(' ')
for latter,wordsl in groupby(sorted(l),key=itemgetter(0)):
	print(latter)
	for word in words:
		print(word)