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
    for i in range(1, t+1):
        _list = input().split()
        print(_list)
        previous = i-1
    # if date list is none then -d0-
        if not _date_list :
            _date_list.append(_list[date])
            _name_list.append(_list[name])
            _price_list.append(_list[price])
            _qty_list.append(_list[qty])
            _total_price.append(int(_list[price]) * int(_list[qty]))
            _total_qty.append(int(_list[qty]))
            print("1")
         #else  if new date is equal to previous date -do-
        else:
            if _list[date] is _date_list[previous]:
            # if new name is equal to previoes -do-
                if _list[name] is _name_list[previous]:
                    _total_price[previous] += (int(_list[price]) * int(_list[qty]))
                    _total_qty[previous] += int(_list[qty])
                    print("2")
            # else (new name not equal to previos -do
                elif _list[name] is not _name_list[previous]: # note for simplicity, this does not take cares of same date but unordered name
                    _date_list.append(_list[date])
                    _name_list.append(_list[name])
                    _price_list.append(_list[price])
                    _qty_list.append(_list[qty])
                    _total_price.append(int(_list[price]) * int(_list[qty]))
                    _total_qty.append(int(_list[qty]))
                    print("3")
                    #else if new date not equal to previous date

            elif _list[date] is not _date_list[previous]:
                # get the index of maximum total price
                index = _total_price.index(max(_total_price))
                # print the informaiton out in the string.\
                print("{} {} {}".format(_date_list[index], _name_list[index], _total_qty[index]))
                print("4")
            #empty everything and start agisin
                _date_list = []
                _name_list = []
                _price_list = []
                _qty_list = []
                _total_price = []
                _total_qty = []

                continue






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