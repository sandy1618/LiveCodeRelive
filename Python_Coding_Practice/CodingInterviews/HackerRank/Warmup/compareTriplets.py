#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
def compareTriplets(a,b):
    a_rating = 0
    b_rating = 0
    for a_val,b_val in zip(a,b):
        if a_val > b_val:
            a_rating+=1
        elif a_val < b_val:
            b_rating+=1
        else:
            continue
    return [a_rating,b_rating]
if __name__ == "__main__":

    a = list(map(int, input().rstrip().split()))
    b = list(map(int, input().rstrip().split()))
    result = compareTriplets(a,b)
    print(result)

