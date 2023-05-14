t=int(input())

for i in range(t):
    n=int(input())
    lr=input()
    if ('RL' in lr):
        print(0)
        continue
    elif (not('L' in lr) or not('R' in lr)):
        print(-1)
        continue
    else:
        print(lr.find('LR')+1)

