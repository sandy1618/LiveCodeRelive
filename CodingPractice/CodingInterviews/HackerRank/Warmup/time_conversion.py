#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
import re
def timeConversion(s):
    PM_identifier = re.compile(r'PM')
    match = PM_identifier.search(s)
    hour = int(s[:2])


    if match.group() == 'PM':
        hour_str = str(hour + 12)
    else:
        hour_str = str(hour)
    return (hour_str + s[2:-2])

if __name__ == "__main__":
    s = input()
    result = timeConversion(s)
    print(result)