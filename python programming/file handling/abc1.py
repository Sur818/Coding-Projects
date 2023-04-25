import pickle
l=[{1:100,2:200,3:300,4:{1:100,2:200}},{5:500,6:600,7:700,8:{8:800,9:900}}]
f=open("gen.dat",'wb')
pickle.dump(l,f)