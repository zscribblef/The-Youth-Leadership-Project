#include <iostream> 
#include <string>
#include <vector>

using namespace std;

//Define base classes

class Person {
	protected:
		string name;
		int age;

public:
	Person(string name, int age) :name(name), age(age) {}

	void introduce(){
		cout << "Hi, my name is " << name << ", and I am " << age << " years old. " << endl;
	}
};

class Student : public Person {
	private:
		double gpa;

public:
	Student(string name, int age, double gpa) : Person(name, age), gpa(gpa) {}

	void introduce(){
		cout << "Hi, my name is " << name << ", and I am a student. I'm " << age << " years old and have a GPA of " << gpa << "." << endl;
	}
};

class Leader : public Person {
	private:
		vector<string> responsibilities;

public:
	Leader(string name, int age, vector<string> responsibilities) : Person(name, age), responsibilities(responsibilities) {}

	void introduce(){
		cout << "Hi, my name is " << name << ", and I am a leader. I'm " << age << " years old and I have these responsibilities: " << endl;
		for(auto responsibility : responsibilities){
			cout << responsibility << endl;
		}
	}
};

class Mentor : public Person {
	private:
		string mentee;

public:
	Mentor(string name, int age, string mentee) : Person(name, age), mentee(mentee) {}

	void introduce(){
		cout << "Hi, my name is " << name << ", and I am a mentor. I'm " << age << " years old and I'm mentoring " << mentee << "." << endl;
	}
};

//Define project class

class YouthLeadershipProject {
	private:
		vector<Student> students;
		vector<Leader> leaders;
		vector<Mentor> mentors;
	public:
		void addStudent(Student student){
			students.push_back(student);
		}

		void addLeader(Leader leader){
			leaders.push_back(leader);
		}

		void addMentor(Mentor mentor){
			mentors.push_back(mentor);
		}

		void introduceMembers(){
			cout << "Welcome to the Youth Leadership Project." << endl;
			cout << "We have the following people on our team:" << endl;
			cout << endl;

			//Introduce Students
			cout << "Students:" << endl;
			for(auto student : students){
				student.introduce();
			}

			//Introduce Leaders
			cout << "Leaders:" << endl;
			for(auto leader : leaders){
				leader.introduce();
			}

			//Introduce Mentors
			cout << "Mentors:" << endl;
			for(auto mentor : mentors){
				mentor.introduce();
			}
			cout << endl;
		}
};

//Define main function

int main(){
	YouthLeadershipProject ylp;

	Student student1("John", 17, 4.0);
	Student student2("Pam", 16, 3.5);

	ylp.addStudent(student1);
	ylp.addStudent(student2);

	vector<string> responsibilities;
	responsibilities.push_back("Organizing events");
	responsibilities.push_back("Mentoring younger students");
	responsibilities.push_back("Engaging potential sponsors");

	Leader leader1("Bill", 20, responsibilities);
	ylp.addLeader(leader1);

	Mentor mentor1("Mary", 27, "John");
	ylp.addMentor(mentor1);

	ylp.introduceMembers();

	return 0;
}