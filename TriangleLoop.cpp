#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <thread>
using namespace std;

void StdTri(){
    int rows;
    int TotalPrinted = 0;

    cout << "Triangle Rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++){
        for(int k = 1; k <= rows - i; k++){
            cout << " ";
        }
        for(int h = 1; h <= i; h++){
            TotalPrinted++;
            cout << "O ";
        }
    cout << "\n";
    }
    cout << "\nPrinted: " << TotalPrinted;
}

void InvTri(){
    int rows;
    int TotalPrinted = 0;

    cout << "Triangle Rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++){ 
        for(int k = 1; k <= i; k++){
            cout << " ";
        }
        for(int h = rows; h >= i; h--){
            cout << "O ";
            TotalPrinted++;
        }
        cout << "\n";
    }
    cout << "TotalPrinted: " << TotalPrinted;
}


void ClearScreen() {
#ifdef _WIN32
    system("cls"); 
#endif
}

void ChristmasTri(){
    int rows = 0;
    srand(time(0)); 

    cout << "Triangle Rows: ";
    if (!(cin >> rows) || rows <= 0) {
        cout << "Invalid input.\n";
        return;
    }

    string Special = "\033[31mO\033[0m";       
    string SpecialBlink = "\033[93mO\033[0m";  
    string Stem = "\033[38;5;94m|\033[0m";
    string Leaves = "\033[92mD\033[0m";

    
    while (true) {
        ClearScreen(); 
        int TotalPrinted = 0;

        for(int i = 1; i <= rows; i++){
            
            for(int k = 1; k <= rows - i; k++){
                cout << " ";
            }

            int leavesCount = (2 * i) - 1;
            vector<string> thisRow(leavesCount, Leaves);
            
            int randomIndex = rand() % leavesCount;
            
            if (rand() % 2 == 0) {
                thisRow[randomIndex] = SpecialBlink;
            } else {
                thisRow[randomIndex] = Special;
            }

            for(int p = 0; p < leavesCount; p++){
                cout << thisRow[p];
                TotalPrinted++;
            }
            cout << "\n";
        }

        int stemWidth = (rows >= 10) ? 5 : ((rows <= 5) ? 3 : 4);
        int padding = rows - (stemWidth / 2) - 1;

        for(int t = 1; t <= 2; t++){
            for(int f = 0; f < padding; f++){
                cout << " "; 
            }
            for(int g = 0; g < stemWidth; g++){
                cout << Stem;
            }
            cout << "\n";
        }

        cout << "\nPrinted Characters: " << TotalPrinted << "\n";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

int main(){
    StdTri();
}