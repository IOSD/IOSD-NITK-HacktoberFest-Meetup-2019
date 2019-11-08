def bubble_sort(array):
    while True:
        swapped = False
        for j in range(len(array)-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
                swapped = True
        if not swapped:
            break


if __name__ == '__main__':
    amount = input("How many numbers you would like to sort:")
    array = [
        int(input("Enter {} number:".format(i)))
        for i in range(int(amount))
    ]

    print("The values input are as follows: {}".format(array))
    bubble_sort(array)
    print("The sorted list is: {}".format(array))
