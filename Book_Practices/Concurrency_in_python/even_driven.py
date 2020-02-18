#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'
#
# import asyncio
# async def myCoroutine():
#     print("simple loop eg")
#
# def main():
#     loop = asyncio.get_event_loop()
#     loop.run_until_complete(myCoroutine())
#     loop.close()

# import asyncio
# @asyncio.coroutine
# def hello_world():
#     yield from asyncio.sleep(1 )
#     print('Hello World')
#     asyncio.async(hello_world())
#
# @asyncio.coroutine
# def good_evening():
#     yield from asyncio.sleep(1 )
#     print('good_evening')
#     asyncio.async(good_evening())
#
# print('step: asyncio.get_event_loop()')
# loop = asyncio.get_event_loop()
# try:
#     print('step:loop.run_until_complete()')
#     asyncio.async(hello_world())
#     asyncio.async(good_evening())
#     loop.run_forever()
# except KeyboardInterrupt:
#     pass
# finally:
#     print('ste')

#
# import asyncio
# import time
#
# async  def mWork():
#     print("starting work")
#     time.sleep(5)
#     print('ending work')
#
# def main():
#     loop = asyncio.get_event_loop()
#     loop.run_until_complete(mWork())
#     loop.close()

# # using ensure.future() for scheduling coroutine
# import asyncio
# import time
# @asyncio.coroutine
# def myTask(n):
#     time.sleep(1)
#     print('Processing {}'.format(n))
#
# @asyncio.coroutine
# def myGenerator():
#     for i in range(5):
#         asyncio.ensure_future(myTask(i))
#     print('Completed tasks')
#     yield from asyncio.sleep(2)
#
# def main():
#     loop = asyncio.get_event_loop()
#     loop.run_until_complete(myGenerator())
#     loop.close()

# import asyncio
# import time
#
# async def myCoroutine():
#     print('myCoroutine')
#
# async def main():
#     await asyncio.sleep(1)
#
# loop = asyncio.get_event_loop()
# try:
#     loop.create_task(myCoroutine())
#     loop.create_task(myCoroutine())
#     loop.create_task(myCoroutine())
#
#     pending = asyncio.Task.all_tasks()
#     print(pending)
#     loop.run_until_complete(main())
# finally:
#     loop.close()


# Getting back to basics ; COROUTINES
# first of which is to implement an async def function
# import asyncio
#
# async def myCoroutine():
#     print('my coroutine')
# def main():
#     loop = asyncio.get_event_loop()
#     loop.run_until_complete(myCoroutine())
#     loop.close()

# The second method is to utilize generators in conjunction with the
# @asyncio.coroutine decorator:
# import  asyncio
# @asyncio.coroutine
# def myCoroutine():
#     print("My coroutine ")
# def main():
#     loop = asyncio.get_event_loop()
#     loop.run_until_complete(myCoroutine())
#     loop.close()

#---------using await for chaining async calls ---------
import asyncio
async def compute(x,y):
    print('compute {} + {} '.format(x,y))
    await asyncio.sleep(1)
    return x + y
async def print_sum(x,y):
    result = await compute (x,y)
    print("{} + {} = {}".format(x,y,result))

def main():
    loop = asyncio.get_event_loop()
    loop.run_until_complete(print_sum(1,2))
    loop.close()
if __name__ == "__main__":
    main()