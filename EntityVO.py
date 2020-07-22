class EntityVO:
    def __init__(self):
        self.userName = ""
        self.password = ""
        self.createdAt = ""

    def set_user_name(self, user_name):
        self.userName = user_name

    def get_user_name(self):
        return self.userName

    def set_password(self, password):
        self.password = password

    def get_password(self):
        return self.password

    def set_created_at(self, time_str):
        self.createdAt = time_str

    def get_created_at(self):
        return self.createdAt
