from student import Student
from teacher import Teacher

class MyApp:
    app_name = "MyApp"
    university_name = "My University"

    def __init__(self):
        self.students = []
        self.teachers = []

    def launch(self):
        print("Launching", self.app_name)

    def use(self):
        self.create_students()
        self.create_teachers()
        self.print_students()
        self.print_teachers()

    def quit(self):
        print("Quitting", self.app_name)

    def create_students(self):
        for i in range(5):
            student = Student(f"Student {i+1}", 20+i)
            self.students.append(student)

    def create_teachers(self):
        for i in range(5):
            teacher = Teacher(f"Teacher {i+1}", "Mathematics")
            self.teachers.append(teacher)

    def print_students(self):
        print("Students:")
        for student in self.students:
            print(student.name, "- Age:", student.age)

    def print_teachers(self):
        print("Teachers:")
        for teacher in self.teachers:
            print(teacher.name, "- Subject:", teacher.subject)
