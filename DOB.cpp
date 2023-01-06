// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string DOB;
    
    while(1){
        cout << "Enter your DOB : " ;
        cin >> DOB;
        
        int days,months,years,age;
        
        // 24/05/2002
        years = stoi(DOB.substr(6,4));
        months = stoi(DOB.substr(3,2));
        days = stoi(DOB.substr(0,2));
        
        if(days > 31 || months > 12 || years > 2023 || DOB.length() != 10){
            cout << "Invalid Input!!!" << endl;
            cout << endl;
            continue;
        }
        
        age = 2023 - years;
        months = abs(stoi(DOB.substr(3,2)) - 1);
        days = stoi(DOB.substr(0,2)) + 5;
        
        cout << "Your age is " << age << " and " << " you are " << age << " years " << months << " months " << days << " days old." << endl;
        
        if(age < 18) cout << "You are young." << endl;
        else if(age < 45) cout << "You are adult." << endl;
        else cout << "You are old." << endl;
        
        cout << endl;
    }

    return 0;
}
