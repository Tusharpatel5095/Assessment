#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Lecturer 
{
	public:
    	string name;
    	string subject;
    	string course;
    	int numOfLectures;
    	Lecturer(string lecturerName, string lecturerSubject, string lecturerCourse, int numLectures) 
		{
        	name = lecturerName;
        	subject = lecturerSubject;
        	course = lecturerCourse;
        	numOfLectures = numLectures;
    	}
    
	void displayLectureDetails() 	
	{
        cout << "\n\n\t Lecturer Name: " << name;
        cout << "\n\n\t Subject: " << subject;
        cout << "\n\n\t Course: " << course;
        cout << "\n\n\t Number of Lectures: " << numOfLectures;
        cout << "\n\n\t -------------------------------";
    }
};

class LectureManagementSystem 
{
	private:
    vector<Lecturer> lecturers;	

	public:
   
    void addLecture(string name, string subject, string course, int numOfLectures) 
	{
        Lecturer newLecturer(name, subject, course, numOfLectures);
        lecturers.push_back(newLecturer); 
    }

    void displayAllLectures() 
	{
        if (lecturers.empty()) 
		{
            cout << "No lecture details available!";
        } 
		else 
		{
            for (size_t i = 0; i < lecturers.size(); i++) 
			{
                lecturers[i].displayLectureDetails(); 
            }
        }
    }
};
int main() 
{
    LectureManagementSystem system;
    system.addLecture("\n\n\t Dr. Smith", "Mathematics", "MSc Mathematics", 30);
    system.addLecture("\n\n\t Prof. Johnson", "Physics", "BSc Physics", 40);
    system.addLecture("\n\n\t Dr. Taylor", "Chemistry", "BSc Chemistry", 35);
    system.addLecture("\n\n\t Dr. Williams", "Computer Science", "MSc Computer Science", 50);
    system.addLecture("\n\n\t Prof. Brown", "Biology", "BSc Biology", 25);
    cout << "\n\n\t Lecture Details:";
    system.displayAllLectures();
}

