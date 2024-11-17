commands = int(input())

result = 0

for _ in range(commands):
    orden = input() 

    # Verificar si el comando contiene '+'
    if '+' in orden:
        result += 1
    else:
        result -= 1

print(result)
