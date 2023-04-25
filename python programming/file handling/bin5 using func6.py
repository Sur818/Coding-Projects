import pickle
def create_file():
	f=open("bin5_func.dat",'wb')
	pickle.dump(input("enter sententences:-"),f)
	

def find_longestsentence():
	f=open("bin5_func.dat",'rb')
	sentence = pickle.load(f)
	sentence_list = sentence.split(".")
	length_of_sentence = [len(i) for i in sentence_list]
	return sentence_list[length_of_sentence.	index(max(length_of_sentence))]

create_file()
print("sentence having maximum length=",find_longestsentence())