n = int(input())
outp = []
 
while(n>0):
    entry = str(input())
    lenEntry = len(entry)
    if len(entry) >= 11:
        outp.append(entry[0] + str(lenEntry-2) + entry[lenEntry-1])
    else:
        outp.append(entry)
    n-=1
 
for x in outp:
    print(x)