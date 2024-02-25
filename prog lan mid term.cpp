#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

struct student{
    string lesname;
    string stuname;
    int lessons;
    string list;
    string sec;
    int num;
};

struct security {
    int login;
    string password;
};

void id(security word){
    int login = 120604;
    string password = "rainday1";
    cout << endl << "Please enter your login and password\n\n";
    cout << "Login:";
    cin >> word.login;
    cout << "Password:";
    cin >> word.password;
    
    if ((word.login == login) & (word.password == password))
    {
        int main;
    } else {
        cout << endl << "! Incorrect login or password ! \n";
        cout << "-------------------------------\n";
        security word;
        id(word);
    }
}
void table(student stu) {
    double grade1, grade2, grade3, grade4, grade5, grade6, grade7, grade8, grade9, grade10, grade11, grade12, grade13, grade14, grade15, grade16, grade17, grade18;
    string b = "    ";
    for (int i=0; i<stu.lessons; i++){
    cout << i+1 << ")" << " ";
    cin >> stu.lesname;
    stu.list = stu.list + b + stu.lesname;
    }
    cout << endl;
    cout << "Enter student's first name: ";
    cin >> stu.stuname;
    cout << endl;
    cout << "Enter student's last name: ";
    cin >> stu.sec;
    cout << endl;
    cout << "Enter student's ID number: ";
    cin >> stu.num;
    cout << endl;
    cout << "--------------------------------------------------" << endl << endl;
switch (stu.lessons) {
    case 1:
    cout << "Enter grade out of 100 for lesson: ";
    cin >> grade1; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card of student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b << " " << grade1;
    cout<< endl << b << "\n Average: " << grade1;
    cout<< endl << b << "\n GPA: " << (grade1/100)*4;
    if (grade1>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
    } else if (grade1>50 && grade1<86){
        cout << "\n\nCongratulation! You pass the semester!";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
    }
    break;
    case 2:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card of student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b << " " << grade1 << b << "  " << grade2;
    cout<< endl << b << "\n Average: " << (grade1+grade2)/2;
    cout<< endl << b << "\n GPA: " << (((grade1+grade2)/2)/100)*4;
    if (((grade1+grade2)/2)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade2)/2)>50 && ((grade1+grade2)/2)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 3:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2)/3;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2)/3)/100)*4;
    if (((grade1+grade3+grade2)/3)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2)/3)>50 && ((grade1+grade3+grade2)/3)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 4:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4)/4;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4)/4)/100)*4;
    if (((grade1+grade3+grade2+grade4)/4)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4)/4)>50 && ((grade1+grade3+grade2+grade4)/4)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 5:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4+grade5)/5;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5)/5)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5)/5)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5)/5)>50 && ((grade1+grade3+grade2+grade4+grade5)/5)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 6:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << "Enter grade out of 100 for the sixth lesson: ";
    cin >> grade6; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5 << b << "  " << grade6;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4+grade5+grade6)/6;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5+grade6)/6)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5+grade6)/6)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5+grade6)/6)>50 && ((grade1+grade3+grade2+grade4+grade5+grade6)/6)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 7:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << "Enter grade out of 100 for the sixth lesson: ";
    cin >> grade6; cout << endl;
    cout << "Enter grade out of 100 for the seventh lesson: ";
    cin >> grade7; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5 << b << "  " << grade6 << b << "  " << grade7;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4+grade5+grade6+grade7)/7;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5+grade6+grade7)/7)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7)/7)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7)/7)>50 && ((grade1+grade3+grade2+grade4+grade5+grade6+grade7)/7)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break; 
    case 8:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << "Enter grade out of 100 for the sixth lesson: ";
    cin >> grade6; cout << endl;
    cout << "Enter grade out of 100 for the seventh lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eighth lesson: ";
    cin >> grade7; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5 << b << "  " << grade6 << b << "  " << grade7<< b << "  " << grade8;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade8)/8;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade8)/8)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade8)/8)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade8)/8)>50 && ((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade8)/8)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 9:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << "Enter grade out of 100 for the sixth lesson: ";
    cin >> grade6; cout << endl;
    cout << "Enter grade out of 100 for the seventh lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eighth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the nineth lesson: ";
    cin >> grade7; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5 << b << "  " << grade6 << b << "  " << grade7<< b << "  " << grade8<< b << "  " << grade9;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8)/9;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8)/9)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8)/9)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8)/9)>50 && ((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8)/9)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 10:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << "Enter grade out of 100 for the sixth lesson: ";
    cin >> grade6; cout << endl;
    cout << "Enter grade out of 100 for the seventh lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eighth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the nineth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the tenth lesson: ";
    cin >> grade7; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5 << b << "  " << grade6 << b << "  " << grade7<< b << "  " << grade8<< b << "  " << grade9<< b << "  " << grade10;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10)/10;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10)/10)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10)/10)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10)/10)>50 && ((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10)/10)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 11:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << "Enter grade out of 100 for the sixth lesson: ";
    cin >> grade6; cout << endl;
    cout << "Enter grade out of 100 for the seventh lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eighth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the nineth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the tenth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eleventh lesson: ";
    cin >> grade7; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5 << b << "  " << grade6 << b << "  " << grade7<< b << "  " << grade8<< b << "  " << grade9<< b << "  " << grade10<< b << "  " << grade11;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11)/11;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11)/11)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11)/11)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11)/11)>50 && ((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11)/11)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 12:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << "Enter grade out of 100 for the sixth lesson: ";
    cin >> grade6; cout << endl;
    cout << "Enter grade out of 100 for the seventh lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eighth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the nineth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the tenth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eleventh lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the twelfth lesson: ";
    cin >> grade7; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" <<stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5 << b << "  " << grade6 << b << "  " << grade7<< b << "  " << grade8<< b << "  " << grade9<< b << "  " << grade10<< b << "  " << grade11<< b << "  " << grade12;
    cout<< endl << b << "\n Average: " << (grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12)/12;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12)/12)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12)/12)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12)/12)>50 && ((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12)/12)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    case 13:
    cout << "Enter grade out of 100 for the first lesson: ";
    cin >> grade1; cout << endl;
    cout << "Enter grade out of 100 for the second lesson: ";
    cin >> grade2; cout << endl;
    cout << "Enter grade out of 100 for the third lesson: ";
    cin >> grade3; cout << endl;
    cout << "Enter grade out of 100 for the fourth lesson: ";
    cin >> grade4; cout << endl;
    cout << "Enter grade out of 100 for the fifth lesson: ";
    cin >> grade5; cout << endl;
    cout << "Enter grade out of 100 for the sixth lesson: ";
    cin >> grade6; cout << endl;
    cout << "Enter grade out of 100 for the seventh lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eighth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the nineth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the tenth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the eleventh lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the twelfth lesson: ";
    cin >> grade7; cout << endl;
    cout << "Enter grade out of 100 for the thirteenth lesson: ";
    cin >> grade7; cout << endl;
    cout << endl << "--------------------------------------------------" << endl;
    cout << "Report card for student №" << stu.num << " " << stu.sec << " " << stu.stuname << endl << endl;
    cout << stu.list << endl << endl;
    cout << b<< " " << grade1 << b << "  " << grade2 << b << "  " << grade3 << b << "  " << grade4 << b << "  " << grade5 << b << "  " << grade6 << b << "  " << grade7<< b << "  " << grade8<< b << "  " << grade9<< b << "  " << grade10<< b << "  " << grade11<< b << "  " << grade12<< b << "  " << grade13;
    cout << endl << b <<  "\n Average: " << (grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12+grade13)/13;
    cout<< endl << b << "\n GPA: " << (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12+grade13)/13)/100)*4;
    if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12+grade13)/13)>85){
        cout << "\n\nCongratulation! You pass the semester and got a scholarship!";
        cout << "\n------------------------------------------------------------";
    } else if (((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12+grade13)/13)>50 && ((grade1+grade3+grade2+grade4+grade5+grade6+grade7+grade9+grade8+grade10+grade11+grade12+grade13)/13)<86){
        cout << "\n\nCongratulation! You pass the semester!";
        cout << "\n--------------------------------------";
    }else {
        cout << "\n\nSorry, you did not pass the semester";
        cout << "\n------------------------------------";
    }
    break;
    default:
    cout << "Too many lessons";
}
}

int main()
{
    security word;
    id(word);
    student stu;
    
    int choice, choice2;
    char c[50];
    cout << endl << " ----------------------------\n" ;
    cout << " Good morning Professor Atai!\n";
    cout << " ----------------------------\n";
    cout << endl << "What do you want to do?\n\n" << "1. Fill out the student report card\n" << "2. Exit\n\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    if (choice==1){
    cout << endl << "Enter quantity of lessons: ";
    cin >> stu.lessons;
    cout << endl;
    cout << "Names of lessons: \n";
    
    table(stu);
    student stu;
    
    cout <<endl << endl << "Enter any sign to continue \n";
    cin >> c;
    cout <<endl << endl << "Do you want to fill report card for another student? \n";
    cout << "1. YES\n";
    cout << "2. No\n";
    cin >> choice2;
    
    if (choice2=1){
        table(stu);
        student stu;
    } else {
        return 0;
    }

} else {
    security word;
    id(word);
}
    return 0;
}





