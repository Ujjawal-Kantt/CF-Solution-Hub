def solve(mid, v, k):
    sm = 0
    n = len(v)
    for i in range(n):
        sm += min(v[i], v[mid])
    return sm >= k

def main():
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        v = list(map(int, input().split()))
        v.sort()
        i = 0
        l, r = 0, n - 1
        while l <= r:
            mid = l + (r - l) // 2
            if solve(mid, v, k):
                i = mid
                r = mid - 1
            else:
                l = mid + 1

        k += i
        print(k)

if __name__ == "__main__":
    main()
