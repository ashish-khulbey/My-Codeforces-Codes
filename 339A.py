# Problem Link : https://codeforces.com/problemset/problem/339/A#

s = input()
nums = list(s[0:len(s):2])
nums.sort()
j = 0
for i in range(len(s)):
    if i%2 == 0:
        print(nums[j], end="")
        j += 1
    else:
        print("+", end="")
