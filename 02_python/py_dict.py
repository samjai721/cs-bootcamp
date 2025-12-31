student = {
	"name": "sam",
	"age": 30,
	"height": 175.5
}

print(f"Origunal dictionary: {student}")

print(f"Name: {student['name']}")
print(f"age: {student['age']}")

student["age"] = 31
print(f"New Age: {student['age']}")

student["city"] = "Taipei"
student["job"] = "Engineer"

print("--- After adding fields ---")
print(student)

if "city" in student:
	print(f"Student live in: {student['city']}")


