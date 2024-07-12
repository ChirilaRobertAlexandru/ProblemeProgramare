n,m = map(int, input().split())

if n % 2 == 1:
    n += 1
if m % 2 == 1:
    m += 1
    
print((n//2)*(m//2))