T = int(input())

for test_case in range(1, T + 1):
    n, m = map(int, input().split())
    board = []
    max = 0
    
    for _ in range(n):
        tmp_list = [*map(int, input().split())]
        board.append(tmp_list)
    
    for i in range(0, n-m+1):
        for j in range(0, n-m+1):
            tmp = 0
            for k in range(i, i+m):
                for l in range(j, j+m):
                    tmp += board[k][l]
            if tmp > max:
                max = tmp
    
    print(f"#{test_case} {max}")