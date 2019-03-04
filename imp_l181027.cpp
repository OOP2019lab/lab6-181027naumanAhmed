#include "student.h"

//default constructor
Student::Student()
{
	ID = counter;
	quizCapacity = 3;
	quizScore = new float[quizCapacity];
	quizTaken = 0;
	GPA = 0.0;

	counter++;
}

//parameterized constructor
Student::Student(int score, float gpa)
{

	ID = counter;
	quizCapacity = score;
	quizScore = new float[quizCapacity];
	quizTaken = 0;
	GPA = gpa;

	counter++;
}

//copy constructor
Student::Student(const Student &obj)
{
	//copy for stack variables
	ID = obj.ID;
	quizCapacity = obj.quizCapacity;
	quizTaken = obj.quizTaken;
	GPA = obj.GPA;

	//dynamic array deep copied
	if (obj.quizScore != NULL)
	{
		quizScore = new float[quizCapacity];

		for (int i = 0; i < quizTaken; i++)
		{
			quizScore[i] = obj.quizScore[i];
		}

	}

}

//destructor
Student::~Student()
{

	delete[]quizScore;


}

//add quiz score
void Student::addQuizScore(int score)
{

	if (quizTaken < quizCapacity)
	{
		quizScore[quizTaken] = score;
		quizTaken++;

	}
	else
	{
		cout << "Not Enough Space to Store the Data!\n";
	}



}

//setter function for GPA
void Student::setGPA(float s)
{

	GPA = s;

}

//getter function for GPA
float Student::getGPA() const
{

	return GPA;

}

//prints data
void Student::print() const
{

	cout << "ID of student is: " << ID << endl;
	cout << "GPA of student " << ID << " is: " << GPA << endl;
	cout << "Quiz taken by student " << ID << " is: " << quizTaken << endl;
	cout << "Score in each quiz is:\n";

	for (int i = 0; i <quizTaken; i++)
	{
		cout << "Quiz " << i + 1 << ": ";
		cout << quizScore[i] << endl;
	}


}

//compares GPA
bool Student::compare(Student steve)
{

	if (steve.GPA > GPA)
	{
		return true;
	}

	return false;
}

//updates quiz score
void Student::updateScore(int qNo, int score)
{

	if (qNo < quizTaken)
	{
		quizScore[qNo] = score;

	}
	else
		cout << "Quiz " << qNo << " was not Taken!\n";


}





//static member variable initialized
int Student::counter = 1;