#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'

if __name__ == "__main__":
    """
     Standard input files read like a files.
    So basic operations such as reading input and out files and various types of strings
    are the most important.
     MY_PROGRAM < large_input.txt
    for streaming both input and outpput 
    python3 solution.py < input_file.txt > output_file.txt
    ref: (https://code.google.com/codejam/resources/quickstart-guide )
    """
    # import sys
    # for line in sys.stdin:
    #     print(line, end = '')


    # Google way
    t = int(input()) # read a line with single integer
    print(t)
    for i in range(1, t+1): # range does not include last number
        n, m = [int(s) for s in input().split()]
        print("case #{}:{} {}".format(i, n, m))