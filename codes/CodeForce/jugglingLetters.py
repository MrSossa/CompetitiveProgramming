t = int(input())
for i in range(t):
    n = int(input())
    hash = {}
    for string in range(n):
        word = input()
        for char in word:
            if char in hash.keys():
                hash[char] += 1
            else:
                hash[char] = 1
    possible = True
    for key in hash.keys():
        if hash[key] % n != 0:
            possible = False
    print("YES" if possible else "NO")
    