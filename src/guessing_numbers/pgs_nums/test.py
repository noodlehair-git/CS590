

infile = open("linkedin30k_markov.txt")

N = 0
cracked = 0

for line in infile:
	line = line.split('\t')
	if(float(line[1]) > 0.0 and float(line[1]) < 70000000):
		cracked += 1
	N += 1

print(N)
print(cracked)

print(cracked / N)