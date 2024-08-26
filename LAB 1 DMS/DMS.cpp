#include <iostream>
#include <string>
using namespace std;

// List Files
void listFile() {
    int choice;
    cout << "\tLIST FILE DETAIL\n";
    cout << "----------------------------------\n";
    cout << "1. List of All Files\n";
    cout << "2. List of Extension Files\n";
    cout << "3. List of Name Wise\n";
    cout << "Enter the Number: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nList of All (*.*) Files:\n";
            cout << "file.txt\nfile2.cpp\nreport.doc\nimage.jpg\n(continues...)\n";
            cout << "\nTotal Files: 4\n";
            break;
        case 2:
            cout << "Listing files by extension...\n";
            break;
        case 3:
            cout << "Listing files by name...\n";
            break;
        default:
            cout << "Invalid choice for listing files.\n";
    }

    cout << "Press any key to continue...\n";
    cin.ignore();
    cin.get();
}

// Create Directory
void createDirectory() { 
    string dirName; 
    cout << "Enter the Directory name: ";
    cin >> dirName;
    cout << "Current directory: C:\\Users\\UserName\\Documents\n";
    cout << dirName << " Directory Successfully Created\n";
    cout << "Press any key to continue...\n";     
	cin.ignore();
    cin.get();
}

// Chnage Directory
void changeDirectory() {
    string dirName; 
    int choice;
    cout << "Current Directory: C:\\Users\\UserName\\Documents\n";
    cout << "Change Directory\n";
    cout << "----------------------\n";
    cout << "1. Step by Step Backward\n";
    cout << "2. Goto Root Directory\n";
    cout << "3. Forward Directory\n";
    cout << "Enter the Number: ";
    cin >> choice;
    cout << "\n";

	switch (choice) {
        case 1:
            cout << "Stepping backward...\n";
            break;
        case 2:
            cout << "Going to root directory...\n";
            break;
        case 3:
            cout << "Going to forward directory...\n";
            break;
        default:
            cout << "Invalid choice for changing directory.\n";	
	}

    cout << "Please enter the Directory Name: ";
    cin >> dirName;
    cout << "Current Directory: C:\\Users\\UserName\\Documents\\Projects\n";
    cout << "Press any key to continue...\n";
    cin.ignore();
    cin.get();
}

// Main Menu
void mainMenu() {
    int choice;

    while (true) {
        cout << "\tMAIN MENU\n";
        cout << "---------------------------\n";
        cout << "1. To Display List of Files\n";
        cout << "2. To Create New Directory\n";
        cout << "3. To Change the Working Directory\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; 
        cout << "\n";

        switch (choice) {
            case 1:
                listFile();
                break;
            case 2:
                createDirectory(); 
                break;
            case 3:
                changeDirectory(); 
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } 
}

int main() {
    mainMenu();
    return 0;
}

