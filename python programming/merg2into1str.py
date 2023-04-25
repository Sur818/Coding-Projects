def solve(n, m):
   i = j = 0
   result = ("")
   while i < len(n) and j < len(m):
      result += n[i] + m[j]
      i+=1
      j+=1
   while i < len(n):
      result += n[i]
      i += 1
   while j < len(m):
      result += m[j]
      j += 1
      return result
n = "Farhan"
m = "Siddiqui"
print(solve(n, m))