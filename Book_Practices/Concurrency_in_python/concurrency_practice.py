#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'

# ###---------------Sequential ----------------########
# import urllib.request
# def DownloadImage(imagepath,filename):
#     print("Downlo. img from",imagepath)
#     urllib.request.urlretrieve(imagepath,filename)
# def startdownload():
#     imagepath = "http://lorempixel.com/400/200/sports"
#     for i in range(10):
#         imagename  = "image-" + str(i) + ".jpg"
#         DownloadImage(imagepath,imagename)


import threading
import urllib.request
import time

def downloadImage(imagePath,fileName):
    print('Downloading Image from ', imagePath)
    urllib.request.urlretrieve(imagePath,fileName)
    print('Completed Download')
    
def executeThread(i):
    imageName = 'temp/image-' + str(i) + ".jpg"
    downloadImage("http://lorempixel.com/400/200/sports",imageName)
def startdownload():
    t0 = time.time()
    # creating an array that stores ref. to all our threads.
    threads = []
    # create 10 new tread objects and append them into to threads list
    for i in range(10):
        thread = threading.Thread(target=executeThread, args=(i,))
        threads.append(thread)
        thread.start()
    #Ensuring all threads have completed their execution before logging totaltime
    for i in threads:
        i.join() # this is a method specifically of thread class.
        # This blocks the calling thread until the thread whose join() method is called terminates
    t1 = time.time()
    totaltime = t1 - t0
    print(totaltime)

if __name__=="__main__":
    startdownload()

