my_data = [10, "sam", 175.5]

print(f"Original list: {my_data}")

print(f"Name is: {my_data[1]}")

my_data.append("Engineer")
print(f"After append:{my_data}")

my_data[0] = 99
print(f"Modified list: {my_data}")

print("--- Loop through list ---")
for item in my_data:
	print(f"Type: {type(item)}, Value: {item}")


