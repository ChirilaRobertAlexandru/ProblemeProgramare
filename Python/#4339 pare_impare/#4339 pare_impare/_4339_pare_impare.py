a, b, c = map(int, input().split())
pare = 0

if a % 2 == 0:
    pare += 1
if b % 2 == 0:
    pare += 1
if c % 2 == 0:
    pare += 1

if pare > 1:
    print("pare")
else:
    print("impare")