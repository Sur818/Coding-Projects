import stringtools
s=input("enter string:-")
word=input("enter word want to delete:-")
print(stringtools.remove(s,word))

#remove word all---+
print(stringtools.remove_all(s,word))
# longest palindrome substring---->
l=stringtools.palindrome(s)
print(stringtools.longest_length(l))

