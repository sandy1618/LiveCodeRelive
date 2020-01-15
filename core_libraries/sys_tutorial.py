#!/home/uncomment/.local/share/virtualenvs/LiveCodeRelive-47bKGGWe/bin/ python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'

if __name__ == "__main__":
    import sys
    import re

    temp_list = []
    for line in sys.stdin:
        for number in re.split('[ ,\n]',line):

            if number.isdigit():
                number = int(number)
                if number is 0:
                    pass
                elif number in temp_list:
                    pass
                else:
                    temp_list.append(number)
            else :
                continue
    for number in temp_list:
      print(number , end= " ")



    # for number in temp_list:
    #     print(number,end = " ")





        # print(line, end="")

    # sys.stderr.write('This is a stderr \n')
    # # sys.stderr.flush()
    # sys.stdout.write('This is tdout text \n')
    # if len(sys.argv) > 1:
    #     print(sys.argv[1])
    # print(sys.path)
    # print(sys.executable)