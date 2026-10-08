N = int( input())
a = list (map(int , input().split()))

b= a.copy()
b.reverse()

if a == b:
    
    print("YES")
else:
    print("NO")