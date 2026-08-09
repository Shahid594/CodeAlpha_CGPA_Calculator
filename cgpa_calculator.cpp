#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int num_courses;
    cout << "--- CGPA Calculator ---\n";
    cout << "Enter the number of courses: ";
    cin >> num_courses;

    vector<double> grades(num_courses);
    vector<double> credits(num_courses);
    double total_credits = 0;
    double total_grade_points = 0;

    for (int i = 0; i < num_courses; i++) {
        cout << "\nCourse " << i + 1 << ":\n";
        cout << "Enter grade (e.g., 9.0, 8.5): ";
        cin >> grades[i];
        cout << "Enter credit hours: ";
        cin >> credits[i];

        total_credits += credits[i];
        total_grade_points += (grades[i] * credits[i]);
    }

    double cgpa = total_grade_points / total_credits;

    cout << "\n--- Final Result ---\n";
    for (int i = 0; i < num_courses; i++) {
        cout << "Course " << i + 1 << " -> Grade: " << grades[i] << " | Credits: " << credits[i] << "\n";
    }
    
    cout << "\nOverall CGPA: " << fixed << setprecision(2) << cgpa << "\n";

    return 0;
}