num = int(input("saale number daal:"))
ll=list()
while num != 0:
    quot = num//2
    rem=num%2
    ll.append(rem)
    num = quot
print("number is",end=' ')
for i in range(len(ll)):
    print(int(ll[i]),end='')
