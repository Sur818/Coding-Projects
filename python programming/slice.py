

#sclicing property:----->

l=[1,2,3]
l1=[2,2,4,5,6,7]
l[len(l)::]=l1
print(l)





###
l[1:3]=["".join(str(l1).split(' '))]
print(l)
###
l[1:3]=["".join(str(l1[2:4]).split(' '))]
print(l)