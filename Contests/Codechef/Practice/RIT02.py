from sys import stdin,exit
def main():
	n=int(raw_input())
	x=map(int,stdin.readline().split())
	while len(x):
		print len(x)
		mn=min(x)
		x= map(lambda e:e-mn, x)
		x[:]=[i for i in x if i]
		
		
	exit(0)
 
if __name__=="__main__":
	main() 