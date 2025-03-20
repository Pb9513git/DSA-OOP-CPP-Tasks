#include <iostream>
using namespace std;
main()
{
    int score;
    cout << "Enter Your Score : ";
    cin >> score;
    char grade = (score < 100 && score >= 85) ? 'A' : (score < 85 && score >= 70) ? 'B'
                                                  : (score < 70 && score >= 60)   ? 'C'
                                                  : (score < 60 && score >= 50)   ? 'D'
                                                  : (score < 50 && score >= 30)   ? 'E'
                                                  : (score > 100)                 ? 'Z'
                                                                                  : 'F';
    // cout << grade;
    switch (grade)
    {
    case 'A':
        cout << "Your Grade : A" << endl
             << "Excellent Work!";
        break;
    case 'B':
        cout << "Your Grade : B" << endl
             << "Well Done!";
        break;
    case 'C':
        cout << "Your Grade : C" << endl
             << "Good Job!";
        break;
    case 'D':
        cout << "Your Grade : D" << endl
             << "You Passed , but you could do Better!";
        break;
    case 'E':
        cout << "Your Grade : E" << endl
             << "Just Passed!";
        break;
    case 'F':
        cout << "Your Grade : F" << endl
             << "Sorry!,You Failed";
        break;

    default:
        cout << "Invalid score!";
        break;
    }
    if (grade <= 'D')
    {
        cout << endl
             << "Congratulations! You are eligible for the next level";
    }
    else
    {
        cout << endl
             << "Please Try Again Next Time.";
    }
}
