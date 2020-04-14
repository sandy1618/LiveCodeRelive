#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'

def countApplesAndOranges(s, t, a, b, apples, oranges):
    count_apple = 0
    count_orange = 0
    for apple in apples:
        if s <= apple + a <= t:
            count_apple += 1
    for orange in oranges:
        if s <= orange + b <= t:
            count_orange += 1

    print(count_apple)
    print(count_orange)

if __name__ == "__main__":
    s,t = map(int,input().rstrip().split())
    a,b = map(int, input().rstrip().split())
    no_of_apple, no_of_orange =map(int, input().rstrip().split())
    apple_distances = map(int,input().rstrip().split())
    orange_distances = map(int, input().rstrip().split())
    countApplesAndOranges(s,t,a,b,apple_distances,orange_distances)