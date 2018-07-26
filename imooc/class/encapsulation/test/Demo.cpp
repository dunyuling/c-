#include <iostream>
using namespace std;

class Student
{
public:
//    Student():m_iAge(1),m_iScore(2){cout<<m_iAge<<","<<m_iScore<<endl;} ;
//    Student() {cout<<"Student()"<<endl;}
    void setAge(int age) { m_iAge = age; }
    int getAge() {return m_iAge;}
//    void setScore(int score) { m_iScore = score; }
    int getScore() {return m_iScore;}
    Student(int age = 3,int score = 4):m_iScore(6) 
    {
        m_iAge = 5;
//        m_iScore = 8;
        cout<<"Student(int age,int score)"<<" "<<getAge()<<" "<<getScore()<<endl;
    }
    
    Student s(){cout<<"Hello"<<endl;} 
private:
    int m_iAge;
    const int m_iScore;
};

class Circle 
{
public:
    //Circle():m_dPi(3.14) {}
    Circle() {cout<<"circle"<<endl;}
    Circle(const Circle &circle) { cout<<"circle &"<<endl;}
    ~Circle() {cout<<"~circle()"<<endl;}
private:
    static const double m_dPi = 3.14;
};

int main()
{
    Student s() ;//不知道这行代码什么意思 
    cout<<endl;
    Student student;
    Student student2(student);
    cout<<"student2:"<<student2.getAge()<<","<<student2.getScore()<<endl;
    student2.setAge(7);
//    student2.setScore(8);
    cout<<"student:"<<student.getAge()<<","<<student.getScore()<<","<<&student<<endl;
    cout<<"student2:"<<student2.getAge()<<","<<student2.getScore()<<","<<&student2<<endl;
    Circle circle;
    Circle circle2(circle);
    return 0;
}
