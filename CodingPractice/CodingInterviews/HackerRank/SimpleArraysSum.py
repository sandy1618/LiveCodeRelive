#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
import os
def simpleArraySum(ar):
    pass
if __name__ == "__main__":
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = simpleArraySum(ar)

    fptr.write(str(result) + '\n')

    fptr.close()