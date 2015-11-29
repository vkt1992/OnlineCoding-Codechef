tc=input()
tc=int(tc)
while (tc >=1):
	aa=raw_input().split()
	a=int(aa[0])
	b=int(aa[1])
	mul=a*b
	while mul >10:
		res=0
		while (mul > 0):
			res=res+mul%10
			mul=mul/10
		mul=res
	print mul
	tc=tc-1

	
