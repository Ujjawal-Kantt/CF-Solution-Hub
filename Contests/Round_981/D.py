def solve():
    t = int(input())  
    for _ in range(t):
        n = int(input())  
        a = list(map(int, input().split()))  
        mpp = {0: 1} 
        prevSum = 0  
        ans = 0 
        for i in range(n):
            prevSum += a[i]  
            if prevSum in mpp:
                ans += 1
                mpp.clear()  
                mpp[0] = 1 
                prevSum = 0 
            mpp[prevSum] = mpp.get(prevSum, 0) + 1
        print(ans)  

if __name__ == "__main__":
    solve()
