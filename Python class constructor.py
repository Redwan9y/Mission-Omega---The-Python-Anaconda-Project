class User:
	name = ''
	email = ''
	password = ''
	login = False

	def __init__(self, name, email, password):
		self.name = name
		self.email = email
		self.password = password

	def login(self):
		email = raw_input("Enter email: ")
		password = raw_input("Enter password: ")

		if email == self.email and password == self.password:
			self.login = True
			print("Login Successful!")
		else:
			print("Login Failed!")

	def logout(self):
		self.login = False
		print("Logged Out!")

	def isLoggedIn(self):
		if self.login == True:
			return True
		else:
			return False

	def profle(self):
		if self.isLoggedIn():
			print(self.name,"-",self.email)
		else:
			print("User is not Logged in!")


user1 = User("Redwan", "redwan@testmail.com","123456")

user1.login()
user1.profle()


hello = input()
