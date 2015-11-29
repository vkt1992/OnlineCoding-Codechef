
tmp=raw_input().split()
y=int(tmp[1])
x=int(tmp[0])
arr=[[]]
for i in range(0,5001):
	arr[i][0]=0
	arr[0][i]=0
	
for i in range(1,5001):
	for j in range(1,5001):
		if(i==1 and j==1):
			arr[i][j]=1
		else:
			arr[i][j]=arr[i][j-1]+arr[i-1][j]
			
print arr[x+1][y+1]
	