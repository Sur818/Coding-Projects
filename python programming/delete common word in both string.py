from collections import Counter
def remove_CommonWords(s1, s2):
    s1=list(s1.split())
    s2=list(s2.split())
  
    freq1=Counter(s1)
    freq2=Counter(s2)
    word=0 
    for i in range(len(s1)):
        if s1[word] in freq2.keys():
            s1.pop(word)
            word=word-1
        word+=1
    word=0
    for i in range(len(s2)):
        if s2[word] in freq1.keys():
            s2.pop(word)
            word = word-1
              
        word += 1
    print(*s1)
    print(*s2)  




sent1=input("enter first sentence:-")
sent2=input("enter second sentence:-")
remove_CommonWords(sent1, sent2)