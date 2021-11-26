t=int(input())
for i in range(t):
    n=int(input())
    newlist=[]
    mini=1000000
    for k in range(n):
        newlist.append(int(input()))
        if (newlist[k]<mini):
            mini = newlist[k]
    print(mini*(n-1))        