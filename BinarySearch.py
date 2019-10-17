
def binarySearch(item_list,item):
    first = 0
    last = len(item_list)-1
    found = False
    position = None
    while( first<=last and not found):
        mid = (first + last)//2
        if item_list[mid] == item :
            found = True
            position = mid
        else:
            if item < item_list[mid]:
                last = mid - 1
            else:
                first = mid + 1 
    return found, position
  
num = int(input("Enter number of Elements: "))
numList = []
for i in range(num):
    n = int(input("Enter number: "))
    numList.append(n)
search = int(input("Enter number to be searched: "))
# Function call 
result, position = binarySearch(numList, search) 
  
if result: 
    print("Element is present at index {}".format(position))
else: 
    print("Element is not present in array")