# num=list(input("numbr daal"))
# for j in range(len(num)):
#     for i in num:
#         print(i,end='')
#         print('\n')
#     num.append(num.pop(0))


ask=input("Enter the number: ")
for a in range(len(ask)):
    x=ask[a:len(ask)]+ask[0:a]
    print(x)
