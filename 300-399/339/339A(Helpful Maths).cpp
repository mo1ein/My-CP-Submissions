s = input ('')
s=s.split("+")
s=list(map(int,s))
s.sort()
print(*s,sep="+")