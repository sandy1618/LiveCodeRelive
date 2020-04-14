#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
import math
def gradingStudents(l):
    grade_result = []
    for num in l:

        #threshold = (int(num/5) +1)*5
        threshold = math.ceil(num/5)*5
        if num >= 38:
            if abs(threshold-num)<3:
                grade_result.append(threshold)
            else :
                grade_result.append(num)
        else:
            grade_result.append(num)
    return grade_result
if __name__ == "__main__":
    n = int(input().strip())
    l=[int(input().strip()) for _ in range(n)]
    print(gradingStudents(l))