s=input("enter some word:---").split(' ')
ans=0
print("print whoose word are longest:-")
for word in s:
 if len(word)>ans:
  ans=max(ans,len(word))
  max_word=word
print(max_word)