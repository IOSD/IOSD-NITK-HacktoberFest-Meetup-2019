def substring(string, sub):
    return sub in string

string = str(input("Enter String: "))
sub = str(input("Enter Substring: "))
ans = substring(string, sub)

if ans:
	print("{} is present in {}".format(sub, string))
else:
	print("{} is not present in {}".format(sub, string))