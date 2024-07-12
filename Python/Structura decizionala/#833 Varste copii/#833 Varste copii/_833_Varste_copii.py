x, y = map(int, input().split())

if x > y:
    print("Primul copil este mai mare cu",x-y, "ani")
elif y > x:
    print("Al doilea copil este mai mare cu",y-x ,"ani")
else:
    print("Copiii au varste egale")
