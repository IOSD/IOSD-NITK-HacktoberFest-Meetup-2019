def insertionSort(nlist):
   for index in range(1,len(nlist)):

     currentvalue = nlist[index]
     position = index

     while position>0 and nlist[position-1]>currentvalue:
         nlist[position]=nlist[position-1]
         position = position-1

     nlist[position]=currentvalue

num = int(input("Enter number of Elements: "))
numList = []
for i in range(num):
    n = int(input("Enter number: "))
    numList.append(n)
print("Unsorted : {}".format(numList))
insertionSort(numList)
print("Sorted : {}".format(numList))