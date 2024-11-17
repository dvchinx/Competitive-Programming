n = int(input())
nums = []
bucle = n
contador = 0
contTot = 0
 
while(bucle>0):
    nums = str(input()).split(" ")
    for i in nums:
        if i == "1":
            contador+=1
    if contador >=2:
        contTot+=1
    bucle-=1
    contador=0
 
print(contTot)