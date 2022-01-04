#include <conio.h>
#include <stdlib.h>
#define _WIN32_WINNT 0x0500
#include<windows.h>
#include<iostream>
#include<ashugraphics.h>
#include<fstream>

#include "ashustud.cpp"
#include "ashuteach.cpp"

using namespace std;

class admin : public student, public faculty
{
private :
    char user[30],pass[30],user2[30],pass2[30];
public:
    void startPage(void);
    void aportal(void);
    void god1(void);
    void god2(void);
    void studportal(void);
    void fportal(void);
    void s2portal(void);
    void f2portal(void);
    void mainmenu1(void);
    void mainmenu2(void);
    void mainmenu3(void);
    void mainmenu4(void);
};

void admin :: startPage()
{
    SetColor(3);
    DRectangle(2,1,132,34);
    SetColor(15);
    //SRectangle(28,11,105,32);
    //SRectangle(28,5,105,34);
    SetColor(15);
    DRectangle(35,3,98,6);
    gotoxy(43,5);
    SetColor(6);
    cout<<"Vishwakarma Institute of Informantion Technology ";
   /* SetColor(15);
    SLine(60,10,75,11);
    SLine(60,11,75,12);
    gotoxy(61,11);
    SetColor(13);
    cout<<" LOGIN PORTAL";*/
    mainmenu1();
}

void admin::aportal()
{
        SetColor(8);
        DRectangle(48,2,87,6);
        SetColor(11);
        DRectangle(40,10,95,30);
        gotoxy(57,4);
        SetColor(12);
        cout<<"Admin Login Portal"<<endl;

        gotoxy(50,17);
        SetColor(14);
        cout<<"UserName : ";
        SetColor(15);
        SRectangle(62,16,88,18);

        gotoxy(50,21);
        SetColor(14);
        cout<<"Password : ";
        SetColor(15);
        SRectangle(62,20,88,22);

        aa1:

        gotoxy(73,17);
        cout<<"          ";
        gotoxy(73,21);
        cout<<"          ";
        gotoxy(73,17);
        SetColor(14);
        cin>>user;

        if(!strcmp(user,"admin"))
        {
            gotoxy(53,32);
                SetColor(0);
                cout<"                                     ";
                gotoxy(70,21);
                cout<<"         ";
                gotoxy(73,21);
                SetColor(14);
                cin>>pass;
            if(!strcmp(pass,"pass"))
                {
                    system("cls");
                    god1();
                }
            else
                goto aa1;
        }
        else
            goto aa1;

}

void admin ::god1()
{
        int key;
        SetColor(12);
        DRectangle(48,2,87,6);
        SetColor(13);
        DRectangle(25,10,105,32);
        gotoxy(57,4);
        SetColor(6);
        cout<<"Admin Login Portal"<<endl;

        gotoxy(50,17);
        SetColor(1);
        DRectangle(35,17,60,26);
        SetColor(12);
        gotoxy(42,22);
        cout<<"  Student ";

        gotoxy(50,21);
        SetColor(14);
        DRectangle(70,17,95,26);
        gotoxy(78,22);
        SetColor(12);
        cout<<" Teacher ";
        mm1:
      {
          gotoxy(69,28);
        int key =_getch();

        if(key==13)
        {
            gotoxy(4,31);
            system("cls");
            s2portal();
        }

        if(key==0||key==224)
        {
            switch(_getch())
            {
            case 80 :
                    god2();
                    break;
            case 77:
                    god2();
                    break;
            case 75:
                    god2();
                    break;
            case 72:
                    god2();
                    break;
            default :
                    god1();
            }
        }

         if((key!=13)||(key!=72)||(key!=80))
         {
            goto mm1;
         }
      }
}


void admin ::god2()
{
        int key;
        SetColor(12);
        DRectangle(48,2,87,6);
        SetColor(13);
        DRectangle(25,10,105,32);
        gotoxy(57,4);
        SetColor(6);
        cout<<"Admin Login Portal"<<endl;

        gotoxy(50,17);
        SetColor(14);
        DRectangle(35,17,60,26);
        SetColor(12);
        gotoxy(42,22);
        cout<<"  Student ";

        gotoxy(50,21);
        SetColor(1);
        DRectangle(70,17,95,26);
        gotoxy(78,22);
        SetColor(12);
        cout<<" Teacher ";
        mm1:
      {
          gotoxy(69,28);
        int key =_getch();

        if(key==13)
        {
            gotoxy(4,31);
            system("cls");
            f2portal();
        }

        if(key==0||key==224)
        {
            switch(_getch())
            {
            case 80 :
                    god1();
                    break;
            case 77:
                    god1();
                    break;
            case 75:
                    god1();
                    break;
            case 72:
                    god1();
                    break;
            default :
                    god1();
            }
        }

         if((key!=13)||(key!=72)||(key!=80))
         {
            goto mm1;
         }
      }
}

void admin::studportal()
{
        int key;
        SetColor(8);
        DRectangle(48,2,87,6);
        SetColor(11);
        DRectangle(40,10,95,32);
        gotoxy(57,4);
        SetColor(12);
        cout<<"Student Login Portal"<<endl;

        gotoxy(50,17);
        SetColor(15);
        SRectangle(55,14,80,16);
        SetColor(14);
        gotoxy(58,15);
        cout<<" 1. Add Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,18,80,20);
        gotoxy(58,19);
        SetColor(14);
        cout<<" 2. View Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,22,80,24);
        gotoxy(58,23);
        SetColor(14);
        cout<<" 3. Modify Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,26,80,28);
        gotoxy(59,27);
        SetColor(14);
        cout<<"4. Return ";
        gotoxy(60,31);

        key=getche();
        if(key==49)
        {
            system("cls");
            studdata();
            studwrite();
        }
        if(key==50)
        {
            system("cls");
            studsearch();
        }
        if(key==51)
        {
            system("cls");
            studsearch();
        }
        if(key==52)
        {
            system("cls");
            startPage();
        }
}

void admin::fportal()
{
  int key;
        SetColor(14);
        DRectangle(48,2,87,6);
        SetColor(11);
        DRectangle(40,10,95,33);
        gotoxy(57,4);
        SetColor(12);
        cout<<"Faculty Login Portal"<<endl;

        gotoxy(50,17);
        SetColor(15);
        SRectangle(55,13,80,15);
        SetColor(14);
        gotoxy(58,14);
        cout<<" 1. Add Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,17,80,19);
        gotoxy(58,18);
        SetColor(14);
        cout<<" 2. View Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,21,80,23);
        gotoxy(58,22);
        SetColor(14);
        cout<<" 3. Modify Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,25,80,27);
        gotoxy(59,26);
        SetColor(14);
        cout<<"4. Attendance ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,29,80,31);
        gotoxy(59,30);
        SetColor(14);
        cout<<"5. Return ";
        gotoxy(60,31);

        key=getche();
        if(key==49)
        {
            system("cls");
            fdata();
            fwrite();
        }
        if(key==50)
        {
            system("cls");
            fsearch();
        }
        if(key==51)
        {
            system("cls");
            fsearch();
        }
        if(key==52)
        {
            system("cls");
            fattend();
        }
        if(key==53)
        {
            system("cls");
            startPage();
        }
}


void admin::mainmenu1()
{
    int key;
    gotoxy(72,17);
    /*SetColor(4);
    DRectangle(43,14,90,19);
    SetColor(13);
    SRectangle(50,15,83,18);
    gotoxy(61,16);
    SetColor(14);
    cout<<"Admin Login ";
    gotoxy(64,17);
    SetColor(14);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(43,20,65,25);
    SetColor(11);
    SRectangle(45,21,63,24);
    gotoxy(48,22);
    SetColor(15);
    cout<<"Student Login ";
    gotoxy(52,23);
    SetColor(15);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(68,20,90,25);
    SetColor(11);
    SRectangle(70,21,88,24);
    gotoxy(74,22);
    SetColor(15);
    cout<<"Faculty Login";
    gotoxy(77,23);
    SetColor(15);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(43,26,90,31);
    SetColor(11);
    SRectangle(50,27,83,30);
    gotoxy(64,28);
    SetColor(15);
    cout<<"Exit ";*/

    SetColor(4);
    DRectangle(43,10,90,14);
    gotoxy(62,12);
    SetColor(14);
    cout<<"Admin Login ";
    SetColor(10);

    DRectangle(43,16,90,20);
    gotoxy(61,18);
    SetColor(15);
    cout<<"Student Login ";
    SetColor(10);

    DRectangle(43,22,90,26);
    gotoxy(61,24);
    SetColor(15);
    cout<<"Faculty Login ";

    SetColor(10);
    DRectangle(43,28,90,32);
    gotoxy(64,30);
    SetColor(15);
    cout<<" EXIT ";

    mm1:
    gotoxy(74,12);
        key =_getch();

        if(key==13)
        {
            system("cls");
            aportal();
        }

        if(key==0||key==224)
        {
                    switch(_getch())
                    {
                      case 80:
                           mainmenu2();
                            break;
                      case 72:
                           mainmenu4();
                            break;
                    default :
                        mainmenu1();
                    }
        }
         if((key!=13)||(key!=72)||(key!=80))
         {
            goto mm1;
         }

}
void admin::mainmenu2()
{
    gotoxy(60,23);
    int key;
    /*SetColor(10);
    DRectangle(43,14,90,19);
    SetColor(11);
    SRectangle(50,15,83,18);
    gotoxy(61,16);
    SetColor(15);
    cout<<"Admin Login ";
    gotoxy(64,17);
    SetColor(15);
    cout<<"Portal ";

    SetColor(4);
    DRectangle(43,20,65,25);
    SetColor(13);
    SRectangle(45,21,63,24);
    gotoxy(48,22);
    SetColor(14);
    cout<<"Student Login ";
    gotoxy(52,23);
    SetColor(14);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(68,20,90,25);
    SetColor(11);
    SRectangle(70,21,88,24);
    gotoxy(74,22);
    SetColor(15);
    cout<<"Faculty Login";
    gotoxy(77,23);
    SetColor(15);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(43,26,90,31);
    SetColor(11);
    SRectangle(50,27,83,30);
    gotoxy(64,28);
    SetColor(15);
    cout<<"Exit ";*/

    SetColor(10);
    DRectangle(43,10,90,14);
    gotoxy(62,12);
    SetColor(15);
    cout<<"Admin Login ";

    SetColor(4);
    DRectangle(43,16,90,20);
    gotoxy(61,18);
    SetColor(14);
    cout<<"Student Login ";

    SetColor(10);
    DRectangle(43,22,90,26);
    gotoxy(61,24);
    SetColor(15);
    cout<<"Faculty Login ";

    SetColor(10);
    DRectangle(43,28,90,32);
    gotoxy(64,30);
    SetColor(15);
    cout<<" EXIT ";

    mm1:
      {
          gotoxy(75,18);
        key =_getch();

        if(key==13)
        {
            system("cls");
            studportal();
        }

        if(key==0||key==224)
        {
            switch(_getch())
            {
              case 77:
                    mainmenu3();
                    break;
              case 72:
                    mainmenu1();
                    break;
              case 80:
                    mainmenu3();
            default :
                    mainmenu2();
            }
         }
        }
         if((key!=13)||(key!=72)||(key!=80)||(key!=75))
         {
            goto mm1;
         }
}

void admin::mainmenu3()
{
    gotoxy(86,23);
    int key;
    /*SetColor(10);
    DRectangle(43,14,90,19);
    SetColor(11);
    SRectangle(50,15,83,18);
    gotoxy(61,16);
    SetColor(15);
    cout<<"Admin Login ";
    gotoxy(64,17);
    SetColor(15);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(43,20,65,25);
    SetColor(11);
    SRectangle(45,21,63,24);
    gotoxy(48,22);
    SetColor(15);
    cout<<"Student Login ";
    gotoxy(52,23);
    SetColor(15);
    cout<<"Portal ";

    SetColor(4);
    DRectangle(68,20,90,25);
    SetColor(13);
    SRectangle(70,21,88,24);
    gotoxy(74,22);
    SetColor(14);
    cout<<"Faculty Login";
    gotoxy(77,23);
    SetColor(14);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(43,26,90,31);
    SetColor(11);
    SRectangle(50,27,83,30);
    gotoxy(64,28);
    SetColor(15);
    cout<<"Exit ";*/

    SetColor(10);
    DRectangle(43,10,90,14);
    gotoxy(62,12);
    SetColor(15);
    cout<<"Admin Login ";

    SetColor(10);
    DRectangle(43,16,90,20);
    gotoxy(61,18);
    SetColor(15);
    cout<<"Student Login ";

    SetColor(4);
    DRectangle(43,22,90,26);
    gotoxy(61,24);
    SetColor(14);
    cout<<"Faculty Login ";

    SetColor(10);
    DRectangle(43,28,90,32);
    gotoxy(64,30);
    SetColor(15);
    cout<<" EXIT ";

    mm1:
      {
        gotoxy(75,24);
        int key =_getch();

        if(key==13)
        {
            system("cls");
            fportal();
        }

        if(key==0||key==224)
        {
            switch(_getch())
            {
              case 80:
                    mainmenu4();
                    break;
              case 72:
                    mainmenu2();
                    break;
            case 75:
                    mainmenu2();
                    break;
            default :
                    mainmenu3();
            }
        }

         if((key!=13)||(key!=72)||(key!=80)||(key!=75))
         {
            goto mm1;
         }
      }
}

void admin::mainmenu4()
{
    gotoxy(69,28);
    int key;
    /*SetColor(10);
    DRectangle(43,14,90,19);
    SetColor(13);
    SRectangle(50,15,83,18);
    gotoxy(61,16);
    SetColor(15);
    cout<<"Admin Login ";
    gotoxy(64,17);
    SetColor(15);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(43,20,65,25);
    SetColor(11);
    SRectangle(45,21,63,24);
    gotoxy(48,22);
    SetColor(15);
    cout<<"Student Login ";
    gotoxy(52,23);
    SetColor(15);
    cout<<"Portal ";

    SetColor(10);
    DRectangle(68,20,90,25);
    SetColor(11);
    SRectangle(70,21,88,24);
    gotoxy(74,22);
    SetColor(15);
    cout<<"Faculty Login";
    gotoxy(77,23);
    SetColor(15);
    cout<<"Portal ";

    SetColor(4);
    DRectangle(43,26,90,31);
    SetColor(11);
    SRectangle(50,27,83,30);
    gotoxy(64,28);
    SetColor(14);
    cout<<"Exit ";*/

    SetColor(10);
    DRectangle(43,10,90,14);
    gotoxy(62,12);
    SetColor(15);
    cout<<"Admin Login ";
    SetColor(10);

    DRectangle(43,16,90,20);
    gotoxy(61,18);
    SetColor(15);
    cout<<"Student Login ";
    SetColor(10);

    DRectangle(43,22,90,26);
    gotoxy(61,24);
    SetColor(15);
    cout<<"Faculty Login ";

    SetColor(4);
    DRectangle(43,28,90,32);
    gotoxy(64,30);
    SetColor(14);
    cout<<" EXIT ";

    mm1:
      {
          gotoxy(70,30);
        int key =_getch();

        if(key==13)
        {
            gotoxy(4,31);
            system("cls");
            exit(1);
        }

        if(key==0||key==224)
        {
            switch(_getch())
            {
              case 80:
                    mainmenu1();
                    break;
            case 72:
                    mainmenu3();
                    break;
            default :
                    mainmenu4();
            }
        }

         if((key!=13)||(key!=72)||(key!=80))
         {
            goto mm1;
         }
      }
}

void admin :: s2portal()
{
    int a;
        SetColor(8);
        DRectangle(48,2,87,6);
        SetColor(11);
        DRectangle(40,10,95,32);
        gotoxy(54,4);
        SetColor(12);
        cout<<"Admin : Student Login Portal"<<endl;

        gotoxy(50,17);
        SetColor(15);
        SRectangle(55,12,80,14);
        SetColor(14);
        gotoxy(58,13);
        cout<<" 1. Add Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,16,80,18);
        gotoxy(58,17);
        SetColor(14);
        cout<<" 2. View Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,20,80,22);
        gotoxy(58,21);
        SetColor(14);
        cout<<" 3. Modify Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,24,80,26);
        gotoxy(58,25);
        SetColor(14);
        cout<<" 4. Delete Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,28,80,30);
        gotoxy(59,29);
        SetColor(14);
        cout<<"5. Return ";
        gotoxy(59,31);
        a=getche();
        if(a==49)
        {
            system("cls");
            studdata();
            studwrite();
        }

        if(a==50)
        {
            system("cls");
            studsearch();
        }
        if(a==51)
        {
            system("cls");
            studsearch();
        }
        if(a==52)
        {
            system("cls");
            studdelete();
        }
        if(a==53)
        {
            system("cls");
            startPage();
        }
}

void admin :: f2portal()
{
    int a;
        SetColor(8);
        DRectangle(48,2,87,6);
        SetColor(11);
        DRectangle(40,8,95,34);
        gotoxy(54,4);
        SetColor(12);
        cout<<"Admin : Teacher Login Portal"<<endl;

        gotoxy(50,17);
        SetColor(15);
        SRectangle(55,10,80,12);
        SetColor(14);
        gotoxy(58,11);
        cout<<" 1. Add Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,14,80,16);
        gotoxy(58,15);
        SetColor(14);
        cout<<" 2. View Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,18,80,20);
        gotoxy(58,19);
        SetColor(14);
        cout<<" 3. Modify Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,22,80,24);
        gotoxy(58,23);
        SetColor(14);
        cout<<" 4. Delete Record ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,26,80,28);
        gotoxy(59,27);
        SetColor(14);
        cout<<"5. Attendance ";

        gotoxy(50,21);
        SetColor(15);
        SRectangle(55,30,80,32);
        gotoxy(59,31);
        SetColor(14);
        cout<<"6. Return ";

        gotoxy(59,33);

        a=getche();
        if(a==49)
        {
            system("cls");
            fdata();
            fwrite();
        }

        if(a==50)
        {
            system("cls");
            fsearch();
        }
        if(a==51)
        {
            int user=0;
            system("cls");
            fsearch();
        }
        if(a==52)
        {
            system("cls");
            fdelete();
        }
        if(a==53)
        {
            system("cls");
            fattend();
        }
        if(a==54)
        {
            system("cls");
            startPage();
        }
}

