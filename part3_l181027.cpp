#include "student.h"

//prints array of objects
void printStudentArray(Student* S,const int size)
{

	for (int i = 0; i <size; i++)
	{
		S[i].print();
	}

}

//returns students having gpa > 2.0 
Student* getGpaAboveTwo(Student* S, const int size)
{
	
	Student *temp;

	for (int i = 0; i < size; i++)
	{
		
			if (S[i].getGPA() >= 2.0)
			{
				temp = S;  //calling copy constructor
			}
		
	}
	
	return temp;
}



//sorts objects according to GPA
void sortStudent(Student* S, const int size)
{

	Student temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (S[j].getGPA() < S[j + 1].getGPA())
			{
				temp = S[j];
				S[j] = S[j+1];
				S[j + 1] = temp;
			}
		}
	}
}

int main()
{

	Student stackArray[3] = { Student(3, 1.6), Student(3, 3.0), Student(4, 2.33) };

	stackArray[0].addQuizScore(1);
	stackArray[0].addQuizScore(4);
	stackArray[0].addQuizScore(10);

	stackArray[1].addQuizScore(10);
	stackArray[1].addQuizScore(4);
	stackArray[1].addQuizScore(9);

	stackArray[2].addQuizScore(9);
	stackArray[2].addQuizScore(8);
	stackArray[2].addQuizScore(7);

	printStudentArray(stackArray, 3);

	cout << "*****************sort*************\n";
//	sortStudent(stackArray, 3);

	printStudentArray(stackArray, 3);

	cout << "*****************getGPA*************\n";
//	getGpaAboveTwo(stackArray, 3);

	printStudentArray(stackArray, 3);
}





