#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
import sys

from rx import Observable

# argv = Observable.(sys.argv[1:])
## adding capitalize functionality to the data of the observable
argv = Observable.from_(sys.argv[1:]).map(lambda i:i.capitalize())
argv.subscribe(
    on_next = lambda i: print('on_next: {}'.format(i)),
    on_error = lambda e:print("on_error: {}".format(e)),
    on_completed = lambda : print("on_completed")

               )

# def push_five_strings(observer):
#     observer.on_next('alpha')
#     observer.on_next('beta')
#     observer.on_next("Gamma")
#     observer.on_next("Delta")
#     observer.on_next("Epsilon")
#     observer.on_completed()
#
# class PrintObserver(Observer):



if __name__ == "__main__":
    pass