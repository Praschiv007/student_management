class Student:
    def __init__(self, roll_no, name, age, marks):
        self.roll_no = roll_no
        self.name = name
        self.age = age
        self.marks = marks

    def display(self):
        print(f"Roll No: {self.roll_no}, Name: {self.name}, Age: {self.age}, Marks: {self.marks}")


class StudentManagement:
    def __init__(self):
        self.students = []

    def add_student(self, roll_no, name, age, marks):
        student = Student(roll_no, name, age, marks)
        self.students.append(student)
        print("Student added successfully.")

    def remove_student(self, roll_no):
        for student in self.students:
            if student.roll_no == roll_no:
                self.students.remove(student)
                print("Student removed successfully.")
                return
        print("Student not found.")

    def display_students(self):
        if not self.students:
            print("No students to display.")
        else:
            for student in self.students:
                student.display()


def main():
    sm = StudentManagement()
    while True:
        print("\n1. Add Student")
        print("2. Remove Student")
        print("3. Display Students")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            roll_no = input("Enter Roll No: ")
            name = input("Enter Name: ")
            age = int(input("Enter Age: "))
            marks = float(input("Enter Marks: "))
            sm.add_student(roll_no, name, age, marks)
        elif choice == '2':
            roll_no = input("Enter Roll No to remove: ")
            sm.remove_student(roll_no)
        elif choice == '3':
            sm.display_students()
        elif choice == '4':
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()