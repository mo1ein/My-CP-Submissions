s = 0
di = {}
for ch in input ("") : di[ch] = di[ch] +1 if ch in di else 1
print ("CHAT WITH HER!") if len(di) % 2 == 0 else print("IGNORE HIM!")
