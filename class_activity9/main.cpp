//
//  main.cpp
//  class_activity9
//
//  Created by Sonia Lopchan on 9/15/24.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string citizenship, degree;
    int experience;
    
    cout << "Are you a US citizen? (Yes/No): ";
    cin >> citizenship;
    
    if (citizenship != "Yes") {
        cout << "You're not eligible for a job" <<endl;
        return 0;
    }
    
    cout << "Do you have a bachelor's degree? (Yes/No): ";
    cin >> degree;
    
    if (degree != "Yes") {
        cout << "How many years of experiences do you have? ";
        cin >> experience;
        
        if (experience < 2) {
            cout << "You need at least two years of experience to qualify for this job"<< endl;
            return 0;
        }
    }
    cout << "You're eligible to apply for this job" << endl;
    
    return 0;
}
