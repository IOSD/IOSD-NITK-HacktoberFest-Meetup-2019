
def largest(num):
    return max(numList)

num = int(input("Enter number of Elements: "))
numList = []
for i in range(num):
	n = int(input("Enter number: "))
	numList.append(n)

max = largest(numList)

print("Largest number in the list is {}".format(max))