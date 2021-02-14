from random import randint

def sortear_dado():
    return randint (1,7)

for i in range (1,7):
    if i % 2 == 1:
        continue
    
if sortear_dado() == i:
    print ("ACERTOU", i)
else: 
    print ("Não acertou o número")
    