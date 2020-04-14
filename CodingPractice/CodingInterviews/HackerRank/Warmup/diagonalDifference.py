#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
def diagonalDifference(arr):
    right_diagonal = [arr[i][i] for i in range(n)]   
    left_diagonal = [arr[i][n - 1 - i] for i in range(n)]
    return abs(sum(right_diagonal)-sum(left_diagonal))

if __name__ == "__main__":
    n = int(input().strip())
    # making the input as 2D list, list of lsit
    arr = []
    for _ in range(n):
        arr.append(list(map(int,input().rstrip().split())))
    # print(arr)
   

    result = diagonalDifference(arr)
    print(result)