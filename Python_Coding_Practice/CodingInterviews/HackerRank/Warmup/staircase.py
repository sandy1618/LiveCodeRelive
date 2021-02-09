#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
def staircase(n):
    for i in range(n):
        space = ' '
        hash = '#'
        print(space*(n-(i+1))+hash*(i+1))
if __name__ == "__main__":
    n=int(input())
    staircase(n)