# Pasul 1: Citirea datelor din fișierul maxim.in
with open('maxim.in', 'r') as file:  #deschide fisierul maxim.in pentru citire
    linie = file.readline() #citeste prima linie
    numere = linie.split()  #desparte cele 2 numere cautat spatiul dintre ele si creaza o lista
    numar1 = int(numere[0])
    numar2 = int(numere[1])

# Pasul 2: Calcularea maximului
maxim = max(numar1, numar2)

# Pasul 3: Scrierea rezultatului în fișierul maxim.out
with open('maxim.out', 'w') as file:    #deschide fisierul pentru scriere
    file.write(str(maxim) + '\n')       #scrie maximul in fisier
