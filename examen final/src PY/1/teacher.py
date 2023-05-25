class Teacher:
    app_name = "MyApp"

    def __init__(self, name, subject):
        self.name = name
        self.subject = subject

    def set_name(self, name):
        self.name = name

    def get_name(self):
        return self.name

    def set_subject(self, subject):
        self.subject = subject

    def get_subject(self):
        return self.subject
    
