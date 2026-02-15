#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "<----SYSTEM SETUP---->"<< endl;
    cout << "Enter the numbers of student: ";
    cin >> n;
    
    vector <int> marks(n);
    cout << "Enter the marks of student: " << endl;
    for(int i =0; i <n; i++){
        cout<< "Student " << i+1 << ": ";
        cin >> marks[i];
    }

    int choice;
    do{
        cout << "\n<===WELCOME TO STUDENT MARKS MANAGER===> " << endl;
                cout << "1. View All Marks." << endl;
                cout << "2. View Total and Average Marks." << endl;
                cout << "3. View Highest and Lowest Marks." << endl;
                cout << "4. View From lowest to highest Marks." << endl;
                cout << "5. View Grade System." << endl;
                cout << "6. Exit." << endl;
        cout << "\nPlease choose your function: ";
        cin >> choice;
        switch(choice){
            case 1:
               cout << "\n==You Choose to view all marks.="<< endl;
               for(int i =0; i < n;i++){
                  cout << "Student " << i + 1 << ": " << marks[i] << endl;
               }
            break;
            case 2:{
               int total =0;
               float avg;
               cout << "You Choose to total and average marks."<< endl;
               for(int i =0; i <n;i++){
                  total += marks[i];
               }
               avg = (float)total/n;
               cout << "The toal marks of student is " << total << "."<< endl;
               cout << "The average marks od student is "<< avg << "." << endl;
            break;
            }
            case 3:{
               int max = marks[0], min = marks[0]; 
               cout << "You Choose to view Highest and Lowest Marks."<< endl;
               for(int i=0; i < n;i++){
                  if(marks[i] > max){
                     max = marks[i];
                  } 
                  if(marks[i] < min){
                     min = marks[i];
                  }
               }
               cout << "Highest mark of a student is " << max << "." << endl;
               cout << "Lowest mark of a student is " << min << "." <<endl;
            break;}
            case 4:
               cout << "You Choose to view marks from lowest to highest."<< endl;
            break;
            case 5:
               cout << "You Choose to view Grade System."<< endl;
            break;
            case 6:
               cout << "Exiting from Menu."<< endl;
            break;
            default:
               cout << "Input Error"<< endl;
            break;
        } 
    }while(choice != 6);
    
    return 0;
}