# Student Management System

## Project Description
This is a simple Student Management System implemented in Python. The application provides a command-line interface for managing student records including operations such as adding new students, removing existing students, and displaying all student information.

## Features
- **Add Students**: Add new student records with details like roll number, name, age, and marks.
- **Remove Students**: Remove existing students from the system by their roll number.
- **Display Students**: View all student records currently stored in the system.
- **Simple CLI**: Easy-to-use command-line interface with numbered menu options.

## Technical Implementation
- Written in Python
- Object-oriented design with Student and StudentManagement classes
- In-memory data storage (data is not persisted between program runs)

## Usage Instructions
1. Run the application:
   ```
   python student_management.py
   ```

2. Select from the following options:
   - Option 1: Add a new student
   - Option 2: Remove a student
   - Option 3: Display all students
   - Option 4: Exit the program

3. Follow the prompts to enter student information when adding a new student:
   - Roll Number (unique identifier)
   - Name
   - Age
   - Marks

## Example
```
1. Add Student
2. Remove Student
3. Display Students
4. Exit
Enter your choice: 1
Enter Roll No: 101
Enter Name: John Doe
Enter Age: 20
Enter Marks: 85.5
Student added successfully.
```

## Future Enhancements
- Data persistence using file storage or database
- Search functionality
- Updating student information
- Sorting and filtering options
