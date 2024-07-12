x = list(map(int,input().split()))
par, i = 0, 0
while x[i] != 0:
    if x[i] % 2 == 0:
        par += 1
    i += 1
if par :
    print( par )
else:
    print("NU EXISTA")