def subString(string):
    for i in range(len(string)): 
        for l in range(i+1,len(string)+1): 
            print(string[i: l]); 
  
string = str(input("Enter String :"))
print("The Substrings are :")
subString(string); 