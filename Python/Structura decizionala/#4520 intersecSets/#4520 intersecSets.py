x = list(map(int,  input().split()))

a = max( x[0], x[2] ) 
b = min( x[1], x[3] )
if a > b:
    print(-1,-1)
else:
    print(a, b)