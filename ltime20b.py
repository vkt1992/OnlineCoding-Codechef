import sys

def  powr(base,exp,MOD):
    res=1
    while(exp>0):
       if(exp%2==1): 
       		res=(res*base)%MOD
   
       base=(base*base)%MOD
       exp/=2
    return res%MOD


def func(strg,mod):
	ln=len(strg)
	i=ln-1
	res=1
	while(i >=0):
			pos=0
			num1=0
			while(strg[i]!="*" and i>=0):
				num1=int(strg[i])*powr(10,pos,mod)+num1
				pos=pos+1
				i=i-1
			i=i-2
			num2=0
			pos=0
			while(strg[i]!="*" and i>=0):
				num2=int(strg[i])*powr(10,pos,mod)+num2
				pos=pos+1
				i=i-1
			pwr=powr(num2,num1,mod)
			res=(res*pwr)%mod
			i=i-1
	return res



def main():
	t=input()
	while(t!=0):
		mnstrg=raw_input().split()
		mod=int(mnstrg[0])
		strg=mnstrg[1]
		res=func(strg,mod)
		print res
		t=t-1
main()
sys.exit(0)