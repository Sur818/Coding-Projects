s=input("enter string:-").split(' ')
ans=list(filter(lambda x:True if x[::-1]==x else False, s))
print("palindrome word present in sentence:-")
print(" ".join(ans))