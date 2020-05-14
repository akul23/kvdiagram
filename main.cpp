#include <iostream>
#include <windows.h>


#pragma comment(lib, "user32")

using namespace std;


#define VHODI 3
#define KOMBS 8


bool izhodi[KOMBS];
const bool vars[KOMBS][VHODI] = {
        {0, 0, 0},
        {0, 0, 1},
        {0, 1, 0},
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 1},
        {1, 1, 0},
        {1, 1, 1},
};




void welcomeScreen(){
    cout << "|=================================================|" << endl;
    cout << "|           Welcome to auto-zaponpsek             |" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                                                 |" << endl;
    cout << "|   Press enter to continue                       |" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                                                 |" << endl;
    cout << "|   To quit press CTRL+C                          |" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                    (c) Dejan | patent pending.  |" << endl;
    cout << "|=================================================|" << endl << endl << endl;

    system("pause > nul");
}





int main() {


    //Full screen console window
    ::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);

    //I dont know, why did I even set title to borderless-window.
    system("title Auto Zaponsek");

    //Set green text for better look
    system("color a");


    while (1) {
        welcomeScreen();


        cout << endl << endl << "(Write 0 or 1, then press enter)" << endl;

        cout << "A | B | C | izhod " << endl;

        for (int i = 0; i < KOMBS; i++) {

            for (int j = 0; j < VHODI; j++) {

                cout << vars[i][j] << " | ";


            }

            cin >> izhodi[i]; //TODO: check valid type
            //cout << " " << (izhodi[i] ? 1 : 0) << "";

        }


        cout << endl << endl << "              A         " << endl;
        cout << "     -----------------" << endl;
        cout << "  | |=======================================|" << endl;
        cout << "B | |  " << izhodi[6] << "     |    " << izhodi[7] << "     |    " << izhodi[3] << "     |    "
             << izhodi[2] << "   |" << endl;
        cout << "  | |=======================================|" << endl;
        cout << "    |  " << izhodi[4] << "     |    " << izhodi[5] << "     |    " << izhodi[1] << "     |    "
             << izhodi[0] << "   |" << endl;
        cout << "    |=======================================|" << endl;
        cout << "               ----------------           " << endl;
        cout << "                      c                  " << endl << endl << endl;


        cout << endl << "Thanks for using" << endl;

        system("pause > nul");
        system("cls");


    }

    return 0;
}
