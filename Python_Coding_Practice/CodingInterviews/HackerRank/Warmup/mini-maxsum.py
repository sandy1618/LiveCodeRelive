#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'

def miniMaxSum(arr):# Here remove returns None, thats why we make a new copy list m, then remove hte element
    # and then make a list of sum.
    #then we find minimum and maximum of sum.
    #Agian join takes in iterables of type string only.
    sum_arr =[]
    for element in arr:
        m = arr.copy()
        m.remove(element)
        sum_arr.append(sum(m))
    minimum = min(sum_arr)
    maximum = max(sum_arr)
    print(" ".join(map(str,[minimum,maximum])))

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
