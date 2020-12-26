n,h = map(int,input().split())
l=list(map(int,input().split()))
c = list(map(int,input().split()))
k =0
flagu= False
flagd = True
for i in range(len(c)):
    if c[i]==0:
        break
    if c[i]==3 and flagu == False and l[k]!=0:
        l[k]-=1
        flagu = True
    elif c[i]==4 and flagu== True and l[k]<h:
        l[k]+=1
        flagu = False
    elif c[i]==1:
        if k-1<0:
            pass
        else:
            k-=1
    elif c[i]==2:
        if k+1>len(l)-1:
            pass
        else:
            k+=1
print(*l)
