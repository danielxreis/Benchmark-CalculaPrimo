from math import ceil

def calculaPrimo(numero):
    primo = False
    metade = (numero / 2 + 1)
    metadeDivisao = ceil(metade)
    for x in range(2, metadeDivisao):
        if (numero % x == 0):
            primo = False
            break
        else:
            primo = True
    return primo

listaPrimos = []
for y in range(1, 100000):
    print(f"Checando {y}...")
    if calculaPrimo(y):
        print(f"{y} é primo")
        listaPrimos.append(y)
print("Confira a lista:")
print(listaPrimos)
print(f"Total de números primos {len(listaPrimos)}")