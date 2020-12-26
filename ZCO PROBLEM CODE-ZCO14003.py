l = []
for _ in range(int(input())):
    t = int(input())
    l.append(t)
m = -1
l.sort()
n = len(l)
for i in range(n):
    m = max(m,l[i]*(n-i))
print(m)
