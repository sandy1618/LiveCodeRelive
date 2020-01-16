#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
import sys
import datetime
if __name__ == "__main__":
    t = int(input())
    # print(t)
    _string = []
    date = 0
    name = 1
    price = 2
    qty =3
    _date_dict = {} # my date dictionary
    _date_list  = []
    _name_list = []
    _price_list = []
    _qty_list = []
    _total_price = []
    _total_qty = []
    previous = 0
    for i in range(1, t+1):
        _list = input().split()
        # print(_list)


    # if date list is none then -d0- # should run only once
        if not _date_list :
            _date_list.append(_list[date])
            _name_list.append(_list[name])
            _price_list.append(_list[price])
            _qty_list.append(_list[qty])
            _total_price.append(int(_list[price]) * int(_list[qty]))
            _total_qty.append(int(_list[qty]))
            # print("In loop 1")
            # print(previous)
         #else  if new date is equal to previous date -do-
        else:
            # print(previous)
            # print(_list[date])
            # print(_date_list[previous])
            if _list[date] == _date_list[previous]:
            # if new name is equal to previoes -do-
                if _list[name] == _name_list[previous]:
                    _total_price[previous] += (int(_list[price]) * int(_list[qty]))
                    _total_qty[previous] += int(_list[qty])
                    # print("In loop 2")
            # else (new name not equal to previos -do
                else : # note for simplicity, this does not take cares of same date but unordered name
                    _date_list.append(_list[date])
                    _name_list.append(_list[name])
                    _price_list.append(_list[price])
                    _qty_list.append(_list[qty])
                    _total_price.append(int(_list[price]) * int(_list[qty]))
                    _total_qty.append(int(_list[qty]))
                    previous+=1
                    # print("In loop 3")
                    #else if new date not equal to previous date

            elif _list[date] != _date_list[previous]:
                # get the index of maximum total price
                index = _total_price.index(max(_total_price))
                # print the informaiton out in the string.\
                print("{} {} {}".format(_date_list[index], _name_list[index], _total_qty[index]))
                # print("In loop 4")
            #empty everything and start agisin
                # flush list
                _date_list = []
                _name_list = []
                _price_list = []
                _qty_list = []
                _total_price = []
                _total_qty = []

                # add presest data to _date_list
                _date_list.append(_list[date])
                _name_list.append(_list[name])
                _price_list.append(_list[price])
                _qty_list.append(_list[qty])
                _total_price.append(int(_list[price]) * int(_list[qty]))
                _total_qty.append(int(_list[qty]))

                previous=0
                continue

    print("{} {} {}".format(_date_list[index], _name_list[index], _total_qty[index]))




    #     _date_dict[_list[date]] = {}
    #
    #     _string.append(input().split())
    # print(_string)
    # # handling datetime
    # _datetime = []
    # for text in _string:
    #     _datetime.append(datetime.datetime.strptime(text[0],"%Y-%m-%d"))
    # print(_datetime[0].year)
    # converting to a dictionary

    # appended list of the max_day value






    # """
    # Using sys.stdin for reading inputs
    # """
    # lines = sys.stdin.readline().rstrip('\n')
    # t = int(lines)
    # _string = []
    # for i in range(1,t+1):
    #     _string.append(sys.stdin.readline().rstrip('\n'))
    #
    # print(_string)