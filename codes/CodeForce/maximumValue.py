n = int(input())
array = list(map(int,input().split()))
array.sort(reverse = True)
#print(array)
maxi = 0
for i in range(n):
    for j in range(i+1,n):
        #print(f"I: {array[i]} J:{array[j]} MOD:{array[i]%array[j]}")
        maxi = max(maxi,array[i]%array[j])
print(maxi)