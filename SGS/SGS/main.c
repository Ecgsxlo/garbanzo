#include<stdio.h>
#include<conio.h>
#include<windows.h>

#define High 50
#define Wide 50

void meunPrint(char **sentence, int curr) {
    return ;
}



void mMenu() {
    char ch;
    char sentence[3][10] = {"登陆", "注册", "退出"};
    int curr = 0;
    system("cls");
    meunPrint(sentence, curr);
    while (ch = getch()) {
        if (ch == '\244') {
            ch = getch();
            if (ch == '\72') { //up
                curr = (curr + 1) % 3;
                system("cls");
                meunPrint(sentence, curr);
            }
            if(ch == '\80') {
                curr = (curr + 2) % 3;
                system("cls");
                meunPrint(sentence, curr);
            }
        }
        if (ch != '\n') {
            continue;
        }
        if (curr == '0') {
            loginMenu();
            system("cls");
            curr == 0;
        }
        if (curr == '1') {
            registerMeun();
            system("cls");
            curr == 0;
        }
        if (curr == '2') {
            exit(0);
        }
        
    }
}

int main() {
    mMenu();
    return 0;
}
