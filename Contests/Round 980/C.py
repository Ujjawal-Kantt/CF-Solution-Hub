def main():
    MOD = 10**9 + 7
    t = int(input())
    for _ in range(t):
        arr = int(input())
        pairs = []
        values = []
        for _ in range(arr):
            a, b = map(int, input().split())
            pairs.append((a, b))
            values.extend([a, b])
        values.sort()
        value_mpp = {}
        i = 1
        for value in values:
            if value not in value_mpp:
                value_mpp[value] = i
                i += 1
        temp = [
            (value_mpp[a], value_mpp[b]) for a, b in pairs
        ]
        ans = [
            (ca + cb, a, b) for (ca, cb), (a, b) in zip(temp, pairs)
        ]
        ans.sort(key=lambda x: x[0])
        for _, a, b in ans:
            print(a, b, end=" ")
        print()

if __name__ == "__main__":
    main()
