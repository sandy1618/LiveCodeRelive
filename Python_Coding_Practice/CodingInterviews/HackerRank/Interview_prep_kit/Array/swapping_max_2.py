#! usr/bin/env python
__author__ = 'Sandeep Kumar Nayak'
__status__ = 'development'

def minimumBribes(original_arr,n):
    temp_arr = original_arr.copy()
    t_swap_count = 0
    people_counter =[0]*n
    for index in range(n-1):
        if temp_arr[index] > temp_arr[index+1]:
            if  people_counter[original_arr.index(temp_arr[index])] <= 2:
                if not (people_counter[original_arr.index(temp_arr[index])] == 2 and index == n-2):

                    people_counter[original_arr.index(temp_arr[index])] +=1
                    temp_arr[index],temp_arr[index+1]=temp_arr[index+1],temp_arr[index]
                    t_swap_count+=1
                else :
                    return('Too chaotic')
            else :
                return ("Too chaotic")
    return (t_swap_count)


if __name__ == "__main__":
    test_case = int(input().rstrip())
    for _ in range(test_case):
        n = int(input().rstrip())
        arr = list(map(int,input().rstrip().split()))
        result = minimumBribes(arr,n)
        print(result)