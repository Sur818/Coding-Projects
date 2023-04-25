import csv
with open('protagonist.csv', 'w') as file:
    writer = csv.writer(file, delimiter = '\t')
    writer.writerow(["SN", "Movie", "Protagonist"])
    writer.writerow([1, "Lord of the Rings", "Frodo Baggins"])
    writer.writerow([2, "Harry Potter", "Harry Potter"])
    
f=open('protagonist.csv','r')
rd=csv.reader(f)
for x in rd:
	print(x)
