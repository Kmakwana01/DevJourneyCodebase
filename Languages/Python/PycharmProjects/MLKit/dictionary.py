customer={
    "name" : "ravi bhatti",
    "age" : 22,
    "address" : "Bhavnagar"
}
print(f"\tthe name of the customer is: {customer['name']}\n")
print(f"\tCustomer Age:{customer['age']}\n")
print(f"\tCustomer Address:{customer['address']}\n")

call=input("\nEnter your phone number:")
digit={
    "1" : "One",
    "2" : "Two",
    "3" : "Three",
    "4" : "Four",
    "5" : "Five",
    "6" : " Six",
    "7" : "Seven",
    "8" : "Eight",
    "9" : "Nine",
    "0" : "Zero"
}
output = ""
for ch in call:
    output += digit.get(ch," ! ")+ " "
print(output)
