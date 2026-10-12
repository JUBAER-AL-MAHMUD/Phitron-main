class Student:
    def __init__(self, name, level , id):
        self.name = name
        self.level = level
        self.id = id
        # self.stu = []
    def __repr__(self) -> str:
        return f"Student Name: {self.name}, Level: {self.level}, ID: {self.id}"

class Teacher:
    def __init__(self, name, subject , id):
        self.name = name
        self.subject = subject
        self.id = id
        # self.teach = []
    def __repr__(self) -> str:
        return f"Teacher Name: {self.name}, Subject: {self.subject}, ID: {self.id}"

class School:
    def __init__(self, name):
        self.name = name
        self.students = []
        self.teachers = []

    def add_teacher(self, name , subject , id):
        id = len(self.teachers) + 100
        teacher = Teacher(name, subject , id)
        self.teachers.append(teacher)
    

    def add_student(self, name , level , fee):
        if fee < 1000:
            return'Fee must be at least 1000'
        else:
            id = len(self.students) + 100
            student = Student(name, level , id)
            self.students.append(student)
            return f'student {name} added successfully with ID: {id}, extra fee: {fee - 1000}'


    def __repr__(self) -> str:

        print ('welcome to school')
        print ('welcome to ' , self.name)
        print ('---------Our Teachers---------')
        for teacher in self.teachers:
            print (teacher)

        print ('---------Our Students---------')
        for student in self.students:
            print (student)

    

mbhsc = School("MBHSC")
mbhsc.add_student("Alia", "10th", 1500)
mbhsc.add_student("Zisan", "11th", 800)
mbhsc.add_student("fahim", "12th", 2000)
mbhsc.add_student("tahin", "10th", 1200)

mbhsc.add_teacher("Firoz", "Math", 200)
mbhsc.add_teacher("Rafi", "Science", 201)
mbhsc.add_teacher("Rana", "English", 202)

print(mbhsc)
    


    







