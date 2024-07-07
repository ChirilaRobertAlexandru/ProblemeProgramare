
a, b = map(int, input().split())

if int(a/100) > int(b/100):
    z = int(a/100)*10+int(b/100)
else:
    z = int(b/100)*10+int(a/100)
    
if int(a/10)%10 > int(b/10)%10 :
    y = int(a/10)%10*10+int(b/10)%10
else:
    y = int(b/10)%10*10+int(a/10)%10

if a%10 > b%10:
    x = a%10*10+b%10
else:
    x = b%10*10+a%10
print(z, y, x)