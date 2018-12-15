#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<conio.h>
using namespace std;
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
/** The user's emial and password are private*/
class user{
    private:
        string email;
        char password[16];
        int i=0;
        char ch;
    public:
        void login(){
        int i=0;
        char ch;
        printf("############## LOG IN ##############\n");
        printf("ENTER EMAIL: ");
        cin>>email;
        printf("\n");
        printf("PASSWORD: ");
        while(1){
            ch = getch();
            if(ch == ENTER){
                password[i]='\0';
                break;
            }
            else if(ch == BKSP){
                if(i>0){
                    i--;
                    printf("\b \b");
                }
            }
            else if(ch==TAB || ch == SPACE){
                continue;
            }
            else{
                password[i] = ch;
                i++;
                printf("*");

            }
        }   
    }   
        string get_mail(){
            return email;
        }
};
int main(int argc, char const *argv[])
{
    user login;
    login.login();
    cout<<endl;
    cout<<login.get_mail()<<endl;
    return 0;
}

