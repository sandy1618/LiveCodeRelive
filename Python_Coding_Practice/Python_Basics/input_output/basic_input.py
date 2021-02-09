import sys
import fileinput

#Fixed no. of inputs
# t,t2 = map(int,input().split())

#Variable no. of inputs. 
# l = list(map(int, input().split()))

#Taking fix & variable no. of inputs.
s,*t2 = input().split()
t2 = list(map(int,t2))

# print(l)
print(s)
# print(t)
print(t2)







# import fileinput 
# for f in fileinput.input(): 
#     f = f.rstrip()
#     print(f)