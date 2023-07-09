#!/usr/bin/python3
print("REDWAN's DIGITAL CLOCK ")


import time
 
t = time.localtime(time.time())
localtime = time.asctime(t)
str = "Current Time:" + time.asctime(t)
 
print(str);
