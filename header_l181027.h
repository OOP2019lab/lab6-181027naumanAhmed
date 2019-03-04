#include <iostream>
using namespace std;


class Student
{

private:

	static int counter;
	int ID;
	float *quizScore;
	int quizCapacity;
	int quizTaken;
	float GPA;

public:

	Student();
	Student(int, float);
	Student(const Student &);
	~Student();
	void addQuizScore(int);
	void setGPA(float);
	float getGPA() const;
	void print() const;
	bool compare(Student);
	void updateScore(int, int);

};

