def bubbleSort(nlist):
    for passnum in range(len(nlist)-1,0,-1):
        for i in range(passnum):
            if nlist[i]>nlist[i+1]:
                temp = nlist[i]
                nlist[i] = nlist[i+1]
                nlist[i+1] = temp

num = int(input("Enter number of Elements: "))
numList = []
for i in range(num):
    n = int(input("Enter number: "))
    numList.append(n)
print("Unsorted : {}".format(numList))
bubbleSort(numList)
print("Sorted : {}".format(numList))