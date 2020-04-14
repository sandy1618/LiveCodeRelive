#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
# def plusMinus(arr):
#     postive_count = 0
#     negative_count = 0
#     zero_count = 0
#     for item in arr:
#         if item > 0:
#             postive_count+=1
#         elif item < 0:
#             negative_count+=1
#         else:
#             zero_count+=1
#     arr_count = len(arr)
#     positive_ratio = postive_count/arr_count
#     negative_ratio = negative_count / arr_count
#     zero_ratio = zero_count / arr_count
#     print('{0:.6f}'.format(positive_ratio))
#     print('{0:.6f}'.format(negative_ratio))
#     print('{0:.6f}'.format(zero_ratio))

#Second way of doing it.
def plusMinus(arr):
    c1 = len(list(filter(lambda x: x > 0, arr)))
    c2 = len(list(filter(lambda x: x < 0, arr)))
    c3 = len(list(filter(lambda x: x == 0, arr)))
    print('{0:.7f}'.format(c1/n))
    print('{0:.7f}'.format(c2/n))
    print('{0:.7f}'.format(c3/n))


if __name__ == "__main__":
    n = int(input().strip())
    arr = list(map(int,input().rstrip().split()))
    plusMinus(arr)
