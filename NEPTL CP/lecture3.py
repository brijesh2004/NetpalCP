#number game 

T = int(input())
golden = (1+ 5**0.5)/2
import math

for j in range(1, T+1):
    a1 , a2,b1,b2 = list(map(int , input().strip().split()))
    ans = 0
    for b in range(b1,b2+1):
        # a1 ..... a2
        # max(a,b)>= phi *min(A,b)
        #b>=phi*a
        # a<= (1/phi) * b
        # a <= (phi - 1)* b
        if (a1>golden*b or (golden-1)*b > a2):
            ans+=(a2-a1+1)
        else:
            ans+=max(0,(a2-math.floor(golden*b)))
            ans+=max(0,math.floor((golden-1)*b) - a1 +1)
    
    print("Case # " + str(j) + ": " + str(ans))


