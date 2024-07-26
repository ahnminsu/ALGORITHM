def d(n):
    n=n+sum(map(int,str(n)))
    return n

nonselfnumber=set()

for i in range(1,10001):
    nonselfnumber.add(d(i))
  
for j in range(1,10001):
  if j not in nonselfnumber:
    print(j)