 #include <iostream>
 #include <cstring>
 #include <conio.h>
 #include <stdio.h>
 
 
 class Person{ // this is an abstract class because it has a virtual function at least.
	 
	 //atributes
	 private:
		std::string name;
		std::string surname;
		int age;
	 
	 public:
		//Constructor
		Person(std::string name, std::string surname, int age){
			this->name = name;
			this->surname = surname;
			this->age = age;
		}
		virtual ~Person() = default;
		
		void setName(std::string name){
			this->name = name;
		}
		void setSurName(std::string surname){
			this->surname = surname;
		}
		void setAge(int age){
			this->age = age;
		}
		
		void show() const{ //the const is a keyword that indicate that in this method we are not gonna to change the variables of the member
 			std::cout << "Person's Data:" << std::endl;
			std::cout << "Name: " << name << std::endl;
			std::cout << "Surname: " << surname << std::endl;
			std::cout << "Age: " << age << std::endl;
		}
		
		virtual void present() const = 0; // if we declare a virtual function, the class is ABSTRACT
 };
 
 class Employee : public Person{
	private: 
		std::string type_employee;
		float salary;
	
	public: 
	    Employee(std::string name, std::string surname, int age, std::string type_employee, float salary)
			: Person(name, surname, age)  // Call the constructor of Person (base class)
		{
			this->type_employee = type_employee;
			this->salary = salary;
		}
		~Employee() = default;

		// Setters for Employee-specific data
		void setTypeEmployee(std::string type_employee) {
			this->type_employee = type_employee;
		}

		void setSalary(float salary) {
			this->salary = salary;
		}
		
		void show() const{
			Person::show();
			std::cout << "Type of Employee: " << type_employee << std::endl;
			std::cout << "Salary: " << salary << std::endl;
		}
		
		void present() const override{
			std::cout<<"Im employee"<<std::endl;
		}
	
 };
 
 int main(){
	std::cout<<"PERSON EXAMPLE: "<<std::endl;
	
	/*
	 // Create a Person object
    Person person1("John", "Doe", 30);

    // Show the person's data
    person1.show();

    // Modify the person's data
    person1.setName("Jane");
    person1.setSurName("Smith");
    person1.setAge(28);

    // Show the updated person's data
    person1.show();
	*/
	
	std::cout<<"EMPLOYEE EXAMPLE: "<<std::endl;
	
	Employee employee1("Ale", "Jandro", 40, "PROGRAMMER" , 4000.0f);
	employee1.show();

	getch();
	return 0;
 }