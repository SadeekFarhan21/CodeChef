def solve():
    n = int(input())
    s = [i for i in input().strip().replace('.', '')]
    # print(s)
    isValid = True
    if (s.count('H') != s.count('T')):
        isValid = False
    for i in range(0, len(s) - 1, 2):
        if s[i] != 'H' or s[i + 1] != 'T':
            isValid = False
            break
    if isValid:
        print('Valid')
    else:
        print('Invalid')

t = int(input())
for i in range(t):
    solve()