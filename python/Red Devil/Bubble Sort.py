lst = list(map(str, input("Enter the list elements separated by space").split())) #To input a string array
for i in range(len(lst)):
    for j in range(len(lst)-i-1):
        if (len(lst[j]) > len(lst[j + 1])): #If length of element at j is bigger than j+1 then interchange them
            lst[j], lst[j + 1] = lst[j + 1], lst[j] #To interchange elements of array at index j and j+1
        elif (len(lst[j]) == len(lst[j + 1])):  #If length of element at j is equal to j+1 then run a loop from 0 to their legth
            for k in range(len(lst[j])):  
                if (lst[j][k] > lst[j + 1][k]): #Check each element of both strings and if string at l is bigger than string at l+1
                    lst[j], lst[j + 1] = lst[j + 1], lst[j] #To interchange elements of array at index j and j+1
print(last)



lst = list(map(str, input("Enter the list elements separated by space").split()))
if lst[j]> lst[j + 1]:
    lst[j], lst[j + 1] = lst[j + 1], lst[j]
print(lst) #Apparently this works too😂😂😂😂
