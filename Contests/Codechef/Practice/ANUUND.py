from sys import stdin,exit
 
if __name__ == "__main__":
	t = input()
	while t:
		n = map(int,stdin.readline().split())[0]
		a = sorted(map(int,stdin.readline().split()))
		a_f = a[:n/2]
		a_s = a[n/2:]
		#print a_f,a_s
		
		if n % 2:
			for i in xrange(n/2):
				print a_f[i],a_s[-1-i],
			print a_s[0]
		else:
			for i in xrange(n/2):
				print a_f[i],a_s[-1-i],
			print
 
 
 
		t-=1 