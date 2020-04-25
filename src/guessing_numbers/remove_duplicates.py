import collections

def remove_duplicates(infilename, outfilename):
	infile = open(infilename)
	outfile = open(outfilename, "w")
	counter = collections.Counter(l for l in infile)
	for element in counter:
		outfile.write(element)