from sys import stdin

l = [*range(1, 31)]
for _ in range(28):
    n = int(stdin.readline())
    l.remove(n)
for elem in l:
    print(elem)