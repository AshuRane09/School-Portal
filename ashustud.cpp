class student
{
private :
    int rno,sdd,smm,syy;
    char name[50],sur[50],city[20],pass[20];
    int sttd;
	char div;
	long long int phno,grno,a,rege,reg;

public :
    void studdata(void);
    void studwrite(void);
    void studread(void);
    void studdisplay(void);
    void studsss(void);
    void studsearch(void);
    void studmodify(int);
    void studdelete(void);
};

void student :: studdata()
{
    int  i=0,leap=0,j=0,k=0;

    SetColor(2);
    DRectangle(42,2,87,6);
    SetColor(12);
    SRectangle(60,3,67,5);
    gotoxy(57,4);
    SetColor(14);
    cout<<"STUDENT PORTAL ";
    SetColor(6);
    DRectangle(31,8,98,33);
        gotoxy(51,10);
        SetColor(3);
        cout<<"Enter the Details Below ";

        gotoxy(35,13);
        SetColor(15);
        cout<<"Roll no : ";
        SetColor(13);
        SRectangle(46,12,62,14);

        gotoxy(65,13);
        SetColor(15);
        cout<<"GR NO :";
        SetColor(13);
        SRectangle(75,12,92,14);

        gotoxy(33,17);
        SetColor(15);
        cout<<" FirstName :";
        SetColor(13);
        SRectangle(46,16,62,18);

        gotoxy(64,17);
        SetColor(15);
        cout<<" SurName :";
        SetColor(13);
        SRectangle(75,16,92,18);

        gotoxy(33,21);
        SetColor(15);
        cout<<" Std&Div :";
        SetColor(13);
        SRectangle(46,20,62,22);

        gotoxy(66,21);
        SetColor(15);
        cout<<" City :";
        SetColor(13);
        SRectangle(75,20,92,22);

        gotoxy(33,25);
        SetColor(15);
        cout<<" Phone no:";
        SetColor(13);
        SRectangle(46,24,62,26);

        gotoxy(66,25);
        SetColor(15);
        cout<<" DoB :";
        gotoxy(80,25);
        cout<<"/";
        gotoxy(85,25);
        cout<<"/";
        SetColor(13);
        SRectangle(75,24,92,26);

        gotoxy(33,29);
        SetColor(15);
        cout<<"UserName:";
        SetColor(13);
        SRectangle(46,28,62,30);

        gotoxy(65,29);
        SetColor(15);
        cout<<" Password :";
        SetColor(13);
        SRectangle(75,28,92,30);

        gotoxy(47,13);
        SetColor(14);
        cin>>rno;
        gotoxy(77,13);
        SetColor(14);
        cin>>grno;
        gotoxy(47,17);
        SetColor(14);
        cin>>name;
        gotoxy(77,17);
        SetColor(14);
        cin>>sur;
        st:
        gotoxy(47,21);
        SetColor(14);
        cin>>sttd;
        if((sttd<=12)&&(sttd>=1))
            {
            gotoxy(53,32);
            SetColor(0);
            cout<<"Please Enter Valid Class : "<<endl;
            }
        else
        {
            gotoxy(53,32);
            SetColor(12);
            cout<<"Please Enter Valid Class : "<<endl;
            gotoxy(47,21);
            cout<<"       ";
            goto st;
        }
        sdd:
        gotoxy(50,21);
        SetColor(14);
        cin>>div;
        if(div=='A'||div=='B'||div=='C'||div=='D'||div=='a'||div=='b'||div=='c'||div=='d')
            {
            gotoxy(53,32);
            SetColor(0);
            cout<<"Please Enter a valid Division : "<<endl;
            }
        else
        {
            gotoxy(53,32);
            SetColor(12);
            cout<<"Please Enter a valid Division : "<<endl;
            gotoxy(50,21);
            cout<<"      ";
            goto sdd;
        }
        gotoxy(77,21);
        SetColor(14);
        cin>>city;
        ph:
        gotoxy(47,25);
        SetColor(14);
        cin>>phno;
        a=phno;
        while(a!=0)
        {
        a=a/10;
        i++;
        }
        if(i!=10)
        {
            gotoxy(53,32);
            SetColor(12);
            cout<<"Please Enter a valid Phone Number "<<endl;
            i=0;
            gotoxy(47,25);
            cout<<"           ";
            goto ph;
        }
        else
        {
            gotoxy(53,32);
            SetColor(0);
            cout<<"Please Enter a valid Phone Number "<<endl;
        }

        rr3 :
        SetColor(14);
        gotoxy(77,25);
        cin>>sdd;
        gotoxy(82,25);
        cin>>smm;
        gotoxy(86,25);
        cin>>syy;
        while(1)
        {
            if((syy>=1900)&&(syy<=2019))
            {
            if(syy%4==0)
                leap=1;
            if(smm==1||smm==3||smm==5||smm==7||smm==8||smm==10||smm==12)
                j=1;
            if(smm==2)
                k=1;
            if(leap==1&&k==1)
            {
                if(sdd<=29)
                    break;
            }
            else if(leap==0&&k==1)
            {
                if(sdd<=28)
                    break;
            }
            else if(j==1)
            {
                    if(sdd<=31)
                    break;
            }
            else
            {
                    if(sdd<=30)
                    break;
            }
                    gotoxy(53,32);
                    SetColor(12);
                    cout<<"Please Enter a valid Date "<<endl;
                    gotoxy(77,25);
                    cout<<"   ";
                    gotoxy(82,25);
                    cout<<"   ";
                    gotoxy(86,25);
                    cout<<"     ";
                    goto rr3;
                    break;
        }
        else
        {
        gotoxy(53,32);
        SetColor(12);
        cout<<"Please Enter a valid Date "<<endl;
        gotoxy(77,25);
        cout<<"   ";
        gotoxy(82,25);
        cout<<"   ";
        gotoxy(86,25);
        cout<<"     ";
        goto rr3;
        }
    }
                    gotoxy(53,32);
                    SetColor(0);
                    cout<<"Please Enter a valid Date "<<endl;

        ofstream fout;
        ifstream fin;
        fin.open("studuser.txt",ios::in);
        fin>>reg;
        cout<<"1 "<<reg<<endl;
        reg=reg+1;
        cout<<"2 "<<reg;
        fin.close();
        fout.open("studuser.txt",ios::trunc);
        fout<<reg;
        cout<<endl<<"3 "<<reg<<endl;
        fout.close();

        gotoxy(47,29);
        SetColor(8);
        cout<<reg;
        gotoxy(47,29);
        SetColor(14);
        cin>>rege;

        gotoxy(77,29);
        SetColor(14);
        cin>>pass;
        //studwrite();
}

void student :: studdisplay()
{
    cout<<"Student Roll no : "<<rno<<endl;
    cout<<"Student Name : "<<name<<" "<<sur<<endl;
    cout<<"Student Class : "<<sttd;
    cout<<"Division : "<<div<<endl;
    cout<<"Student Phone No : "<<phno<<endl;
    cout<<"Student City : "<<city<<endl;
    cout<<"Student Date of Birth : "<<sdd<<"/"<<smm<<"/"<<syy<<endl;
    cout<<"Student user : "<<rege<<endl;
    cout<<"Student pass: "<<pass<<endl;
}

void student::studwrite()
{
    ofstream fout;
    fout.open("studfile.txt",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}

void student :: studread()
{
    fstream fin;
    fin.open("studfile.txt",ios::in|ios::binary);
    if(!fin)
    {
        cout<<"Error 69 :Cannot Display data "<<endl;
        return;
    }
    fin.seekg(0,ios::end);
    long pos =fin.tellg();
    fin.seekg(0);
    if(pos==0)
    {
        cout<<"No Data to Display "<<endl;
        return;
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            studdisplay();
            //studsss();
            cout<<endl<<endl;
            //getche();
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}

void student :: studsearch()
{
    int user;
    char passs[20],ch;

    fstream fin;
    fin.open("studfile.txt",ios::in);
    if(!fin)
    {
        cout<<"Error 69:Cannot Open File "<<endl;
        return;
    }

    fin.seekg(0,ios::end);
    long pos =fin.tellg();
    fin.seekg(0);

    SetColor(8);
    DRectangle(48,2,87,6);
    SetColor(13);
    DRectangle(40,10,95,30);
    gotoxy(57,4);
    SetColor(12);
    cout<<"Student Login Portal"<<endl;

   if(pos==0)
    {
        SetColor(6);
        DRectangle(45,15,90,25);
        gotoxy(60,20);
        SetColor(15);
        cout<<"No Data to Display "<<endl;
        return;
    }
    else
    {
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


        fin.read((char*)this,sizeof(*this));
        ss:
        gotoxy(73,17);
        cout<<"          ";
        gotoxy(73,17);
        SetColor(9);
        cin>>user;
        while(!fin.eof())
        {
            if(user==this->rege)
            {
                ps:
                gotoxy(53,32);
                SetColor(0);
                cout<"                                     ";
                gotoxy(70,21);
                cout<<"         ";
                gotoxy(70,21);
                SetColor(9);
                cin>>passs;
                if(!strcmp(passs,pass))
                {
                    system("cls");
                    studsss();
                            gotoxy(55,31);
                            cout<<"Do you Want to modify : ";
                            SetColor(10);
                            gotoxy(62,32);
                            cout<<"( Y";
                            SetColor(8);
                            cout<<"/";
                            SetColor(12);
                            cout<<"N )";
                            ch=getche();
                            if(ch=='y'||ch=='Y')
                            {
                            gotoxy(55,31);
                            SetColor(12);
                            cout<<"Press any key to continue : ";
                            gotoxy(62,32);
                            cout<<"          ";
                            getche();
                            studmodify(user);
                            return;
                            }
                            if(ch=='N'||ch=='n')
                            {
                            gotoxy(55,31);
                            SetColor(12);
                            cout<<"Press any key to continue : ";
                            gotoxy(62,32);
                            cout<<"          ";
                            getche();
                            return;
                            }
                }
               else
                {
                    gotoxy(53,32);
                    SetColor(12);
                    cout<<"Incorrect Password ";
                    getche();
                    gotoxy(70,21);
                    cout<<"             ";
                    goto ps;
                }
            }
           /* else
            {
                gotoxy(53,32);
                SetColor(12);
                cout<<"Incorrect Username ";
                getche();
                goto ss;
            }*/
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}

void student :: studsss()
{

    SetColor(2);
    DRectangle(42,2,87,6);
    SetColor(12);
    SRectangle(60,3,67,5);
    gotoxy(57,4);
    SetColor(14);
    cout<<"STUDENT PORTAL ";
    SetColor(6);
    DRectangle(31,8,98,33);
        gotoxy(51,10);
        SetColor(3);
        cout<<"Enter the Details Below ";

        gotoxy(35,13);
        SetColor(15);
        cout<<"Roll no : ";
        SetColor(13);
        SRectangle(46,12,62,14);

        gotoxy(65,13);
        SetColor(15);
        cout<<"GR NO :";
        SetColor(13);
        SRectangle(75,12,92,14);

        gotoxy(33,17);
        SetColor(15);
        cout<<" FirstName :";
        SetColor(13);
        SRectangle(46,16,62,18);

        gotoxy(64,17);
        SetColor(15);
        cout<<" SurName :";
        SetColor(13);
        SRectangle(75,16,92,18);

        gotoxy(33,21);
        SetColor(15);
        cout<<" Std&Div :";
        SetColor(13);
        SRectangle(46,20,62,22);

        gotoxy(66,21);
        SetColor(15);
        cout<<" City :";
        SetColor(13);
        SRectangle(75,20,92,22);

        gotoxy(33,25);
        SetColor(15);
        cout<<" Phone no:";
        SetColor(13);
        SRectangle(46,24,62,26);

        gotoxy(66,25);
        SetColor(15);
        cout<<" DoB :";
        gotoxy(80,25);
        cout<<"/";
        gotoxy(85,25);
        cout<<"/";
        SetColor(13);
        SRectangle(75,24,92,26);

        gotoxy(34,29);
        SetColor(15);
        cout<<"UserName:";
        SetColor(13);
        SRectangle(46,28,62,30);

        gotoxy(65,29);
        SetColor(15);
        cout<<" Password :";
        SetColor(13);
        SRectangle(75,28,92,30);

        gotoxy(47,13);
        SetColor(14);
        cout<<rno;
        gotoxy(77,13);
        SetColor(14);
        cout<<grno;
        gotoxy(47,17);
        SetColor(14);
        cout<<name;
        gotoxy(77,17);
        SetColor(14);
        cout<<sur;
        gotoxy(47,21);
        SetColor(14);
        cout<<sttd;
        gotoxy(50,21);
        SetColor(14);
        cout<<div;
        gotoxy(77,21);
        SetColor(14);
        cout<<city;
        gotoxy(47,25);
        SetColor(14);
        cout<<phno;
        SetColor(14);
        gotoxy(77,25);
        cout<<sdd;
        gotoxy(82,25);
        cout<<smm;
        gotoxy(86,25);
        cout<<syy;
        gotoxy(47,29);
        SetColor(14);
        cout<<(reg);
        gotoxy(77,29);
        SetColor(14);
        cout<<pass;
}

void student :: studmodify(int user)
{
    fstream file;
    file.open("studfile.txt",ios::in|ios::out|ios::ate);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
        if(user==this->rege)
        {
            system("cls");
            studdata();
            file.seekp(file.tellp()-sizeof(*this));
            file.write((char*)this,sizeof(*this));
            gotoxy(55,32);
            cout<<"Data Updated"<<endl;
            getche();
            return;
        }
        file.read((char*)this,sizeof(*this));
    }
    file.close();
}

void student :: studdelete()
{
    int i=0;
        long long int grn;
        char ch;
        ifstream fin;
        ofstream fout;
        fin.open("studfile.txt",ios::in);
        if(!fin)
            return;
        SetColor(8);
        DRectangle(48,2,87,6);
        SetColor(13);
        DRectangle(40,10,95,30);
        gotoxy(57,4);
        SetColor(12);
        cout<<"Student Delete Portal"<<endl;

        gotoxy(55,20);
        SetColor(14);
        cout<<" GR no : ";
        SetColor(15);
        SRectangle(62,19,88,21);
        tt :
        gotoxy(50,32);
        cout<<"                                                      "<<endl;
        gotoxy(50,33);
        cout<<"                                                      "<<endl;
        gotoxy(70,20);
        cin>>grn;
        gotoxy(50,32);
        SetColor(12);
        cout<<"Are you Sure you want delete data "<<endl;
        gotoxy(65,33);
        cout<<"( Y / N )";
        ch=getche();

        if(ch=='y'||ch=='Y')
        {
            fout.open("tempstud.txt",ios::out);
            fin.read((char*)this,sizeof(*this));
            while(!fin.eof())
            {
                if(grn!=this->grno)
                {
                    fout.write((char*)this,sizeof(*this));
                    fin.read((char*)this,sizeof(*this));
                }
            }
                fin.close();
                fout.close();
                remove("studfile.txt");
                rename("tempstud.txt ","studfile.txt");
                gotoxy(50,32);
                SetColor(10);
                cout<<"           Data Deleted                    "<<endl;
                gotoxy(60,33);
                SetColor(15);
                cout<<"Press any key to continue ....";
                getche();
        }
        else
        {
                SetColor(15);
                gotoxy(50,32);
                cout<<"                                           "<<endl;
                gotoxy(60,33);
                cout<<"Press any key to continue ....";
                getche();
        }
}

