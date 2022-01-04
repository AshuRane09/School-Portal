class faculty
{
private :
    int tno=0,fdd,fmm,fyy,exp;
    char fname[50],fsur[50],fcity[20],sub[50],degree[50];
	long long int fphno,a,salary;

public :
    void fdata(void);
    void fwrite(void);
    void fread(void);
    void fdisplay(void);
    void fshow(void);
    void fsearch(void);
    void fmodify(int);
    void fdelete(void);
    void fattend(void);
};

void faculty::fdata()
{
    int  i=0,leap=0,j=0,k=0;
    SetColor(2);
    DRectangle(42,2,87,6);
    SetColor(12);
    SRectangle(60,3,67,5);
    gotoxy(57,4);
    SetColor(14);
    cout<<"FACULTY PORTAL ";
    SetColor(6);
    DRectangle(31,8,98,33);
        gotoxy(51,10);
        SetColor(3);
        cout<<"Enter the Details Below ";

        gotoxy(34,13);
        SetColor(15);
        cout<<"Faculty No :";
        SetColor(13);
        SRectangle(46,12,62,14);

        gotoxy(67,13);
        SetColor(15);
        cout<<"Exp :";
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
        cout<<" Subject :";
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
        cout<<"Degree :";
        SetColor(13);
        SRectangle(46,28,62,30);

        gotoxy(66,29);
        SetColor(15);
        cout<<"Salary :";
        SetColor(13);
        SRectangle(75,28,92,30);

        gotoxy(47,13);
        SetColor(14);
        cin>>tno;

        gotoxy(80,13);
        cout<<"yrs";
        gotoxy(77,13);
        SetColor(14);
        cin>>exp;
        gotoxy(47,17);
        SetColor(14);
        cin>>fname;
        gotoxy(77,17);
        SetColor(14);
        cin>>fsur;
        gotoxy(47,21);
        SetColor(14);
        cin>>sub;
        gotoxy(77,21);
        SetColor(14);
        cin>>fcity;
        ph:
        gotoxy(47,25);
        SetColor(14);
        cin>>fphno;
        a=fphno;
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
        cin>>fdd;
        gotoxy(82,25);
        cin>>fmm;
        gotoxy(86,25);
        cin>>fyy;
        while(1)
        {
            if((fyy>=1900)&&(fyy<=2019))
            {
            if(fyy%4==0)
                leap=1;
            if(fmm==1||fmm==3||fmm==5||fmm==7||fmm==8||fmm==10||fmm==12)
                j=1;
            if(fmm==2)
                k=1;
            if(leap==1&&k==1)
            {
                if(fdd<=29)
                    break;
            }
            else if(leap==0&&k==1)
            {
                if(fdd<=28)
                    break;
            }
            else if(j==1)
            {
                    if(fdd<=31)
                    break;
            }
            else
            {
                    if(fdd<=30)
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
        gotoxy(83,25);
        cout<<"   ";
        gotoxy(86,25);
        cout<<"     ";
        goto rr3;
        }
    }
                    gotoxy(53,32);
                    SetColor(0);
                    cout<<"Please Enter a valid Date "<<endl;

    gotoxy(47,29);
    SetColor(14);
    cin>>degree;
    gotoxy(77,29);
    SetColor(14);
    cin>>salary;
}

void faculty :: fdisplay()
{
    cout<<"Teacher no : "<<tno<<endl;
    cout<<"Teacher Name : "<<fname<<" "<<fsur<<endl;
    cout<<"Subject : "<<sub;
    cout<<"Teacher Phone No : "<<fphno<<endl;
    cout<<"Teacher City : "<<fcity<<endl;
    cout<<"Teacher Date of Birth : "<<fdd<<"/"<<fmm<<"/"<<fyy<<endl;
    cout<<"Teacher degree : "<<degree<<endl;
    cout<<"Teacher salary: "<<salary<<endl;
    cout<<"Teacher experience: "<<exp<<endl;
}

void faculty::fwrite()
{
    ofstream fout;
    fout.open("teachfile.txt",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}

void faculty :: fread()
{
    fstream fin;
    fin.open("teachfile.txt",ios::in|ios::binary);
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
            fdisplay();
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}

void faculty :: fshow()
{
    SetColor(2);
    DRectangle(42,2,87,6);
    SetColor(12);
    SRectangle(60,3,67,5);
    gotoxy(57,4);
    SetColor(14);
    cout<<"FACULTY PORTAL ";
    SetColor(6);
    DRectangle(31,8,98,33);
        gotoxy(51,10);
        SetColor(3);
        cout<<"Enter the Details Below ";

        gotoxy(34,13);
        SetColor(15);
        cout<<"Faculty No :";
        SetColor(13);
        SRectangle(46,12,62,14);

        gotoxy(67,13);
        SetColor(15);
        cout<<"Exp :";
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
        cout<<" Subject :";
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
        cout<<"Degree :";
        SetColor(13);
        SRectangle(46,28,62,30);

        gotoxy(66,29);
        SetColor(15);
        cout<<"Salary :";
        SetColor(13);
        SRectangle(75,28,92,30);

    gotoxy(47,13);
    SetColor(14);
    cout<<tno;
    gotoxy(80,13);
    cout<<"yrs";
    gotoxy(77,13);
    SetColor(14);
    cout<<exp;
    gotoxy(47,17);
    SetColor(14);
    cout<<fname;
    gotoxy(77,17);
    SetColor(14);
    cout<<fsur;
    gotoxy(47,21);
    SetColor(14);
    cout<<sub;
    gotoxy(77,21);
    SetColor(14);
    cout<<fcity;
    gotoxy(47,25);
    SetColor(14);
    cout<<fphno;
    SetColor(14);
    gotoxy(77,25);
    cout<<fdd;
    gotoxy(82,25);
    cout<<fmm;
    gotoxy(86,25);
    cout<<fyy;
    gotoxy(47,29);
    SetColor(14);
    cout<<degree;
    gotoxy(77,29);
    SetColor(14);
    cout<<salary;
}

void faculty :: fsearch()
{
    char user1[30],user2[30],ch;
    int no,t=0;

    fstream fin;
    fin.open("teachfile.txt",ios::in);
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
    cout<<"Teacher Login Portal"<<endl;

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
        cout<<" Full Name : ";
        SetColor(15);
        SRectangle(62,16,88,18);

        fin.read((char*)this,sizeof(*this));
        gotoxy(50,21);
        SetColor(14);
        cout<<"Faculty No : ";
        SetColor(15);
        SRectangle(62,20,88,22);
        ff:
        gotoxy(58,32);
        SetColor(0);
        cout<"                                              ";
        gotoxy(66,17);
        SetColor(9);
        cin>>user1;
        cin>>user2;
        while(!fin.eof())
        {
                if(!strcmp(user1,this->fname))
                {
                    //gotoxy(72,17);
                    //SetColor(9);
                    if(!strcmp(user2,this->fsur))
                    {
                        ffs:
                        gotoxy(58,32);
                        SetColor(0);
                        cout<"                                              ";
                        gotoxy(70,21);
                        SetColor(9);
                        cin>>no;

                        if(no==this->tno)
                        {
                            system("cls");
                            fshow();
                            gotoxy(47,32);
                            cout<<"Do you Want to modify : ";
                            SetColor(10);
                            gotoxy(71,32);
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
                                    fmodify(no);
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
                            gotoxy(58,32);
                            SetColor(12);
                            cout<<"Error : Incorrect Faculty no "<<endl;
                            getche();
                            gotoxy(70,21);
                            cout<<"             ";
                            goto ffs;
                        }
                    }
                    /*else
                    {
                        gotoxy(60,32);
                        SetColor(12);
                        cout<<"Error : Incorrect Name "<<endl;
                        getche();
                        gotoxy(66,17);
                        cout<<"                  ";
                        goto ff;
                    }*/
                }
                /*else
                {
                    ff2:
                    gotoxy(60,32);
                    SetColor(12);
                    cout<<"Error : Incorrect Name ";
                    getche();
                    gotoxy(66,17);
                    cout<<"                    ";
                    goto ff;
                }*/
                fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}

void faculty :: fmodify(int tnoo)
{
    fstream file;
    file.open("teachfile.txt",ios::in|ios::out|ios::ate);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
        if(tnoo==this->tno)
        {
            system("cls");
            fdata();
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

void faculty :: fdelete()
{
        int no;
        char ch;
        ifstream fin;
        ofstream fout;
        fin.open("teachfile.txt",ios::in);
        if(!fin)
            return;

        SetColor(8);
        DRectangle(48,2,87,6);
        SetColor(13);
        DRectangle(40,10,95,30);
        gotoxy(57,4);
        SetColor(12);
        cout<<"Teacher Delete Portal"<<endl;

        gotoxy(50,20);
        SetColor(14);
        cout<<" Faculty no : ";
        SetColor(15);
        SRectangle(62,19,88,21);
        tts:
        gotoxy(50,32);
        SetColor(0);
        cout<<"                                        "<<endl;
        gotoxy(70,20);
        SetColor(14);
        cin>>no;
        gotoxy(50,32);
        SetColor(12);
        cout<<"Are you Sure you want delete data "<<endl;
        gotoxy(65,33);
        SetColor(15);
        cout<<"( Y / N )";
        ch=getche();
        if(ch=='y'||ch=='Y')
        {
            fout.open("tempteach.txt",ios::out);
            fin.read((char*)this,sizeof(*this));
            while(!fin.eof())
            {
                if(no!=this->tno)
                {
                    fout.write((char*)this,sizeof(*this));
                    fin.read((char*)this,sizeof(*this));
                }
            }
                fin.close();
                fout.close();
                remove("teachfile.txt");
                rename("tempteach.txt ","teachfile.txt");
                gotoxy(50,32);
                SetColor(10);
                cout<<"Data Deleted                            "<<endl;
                gotoxy(57,33);
                SetColor(15);
                cout<<"press any key to continue.....";
                getche();
        }
        else
        {
               gotoxy(50,32);
               SetColor(12);
                cout<<"  Exiting                          "<<endl;
                gotoxy(57,33);
                SetColor(15);
                cout<<"press any key to continue.....";
                getche();
        }
}

void faculty :: fattend()
{
    ofstream fout1,fout2;
    fout1.open("present.txt",ios::out);
    fout2.open("absent.txt",ios::out);
    char ch;
    int i=0,j=0,p=0,a=0;
    long long int t;
    t=21810000;
    char name[30],sur[30];
    int key;
        SetColor(8);
        DRectangle(48,2,87,6);
        SetColor(11);
        DRectangle(40,10,95,30);
        gotoxy(57,4);
        SetColor(12);
        cout<<"Faculty Attendance Portal"<<endl;

        gotoxy(50,17);
        SetColor(15);
        SRectangle(55,16,80,18);
        SetColor(14);
        gotoxy(45,17);
        cout<<" 1. Name :";
        gotoxy(58,17);
        cin>>name;
        cin>>sur;
        system("cls");

    SetColor(1);
    ConsoleColor(0);
    SetColor(1);
    DRectangle(2,1,133,35);
    SetColor(15);
    SRectangle(53,3,80,8);
    SetColor(15);
    gotoxy(57,6);
    cout<<"ATTENDANCE ROLL CALL "<<endl;
    gotoxy(63,4);
    SetColor(9);
    cout<<"Teacher : ";
    SetBackColor(0);
    SetColor(14);
    for(i=0;i<140;i=i+35)
    {
    SRectangle(5+i,10,25+i,14);
    SRectangle(5+i,16,25+i,20);
    SRectangle(5+i,22,25+i,26);
    SRectangle(5+i,28,25+i,32);
    }
    SetColor(13);
    for(i=0;i<=140;i=i+35)
    {
        for(j=0;j<=20;)
        {
            gotoxy(6+i,12+j);
            cout<<(t=t+1);
            gotoxy(16+i,12+j);
            cout<<(t=t+1);
            j=j+6;
        }
        if(t==21810032)
                break;
    }
    SetColor(10);
    gotoxy(50,33);
    cout<<" P : Present";
    SetColor(4);
    gotoxy(75,33);
    cout<<"A : Absent";
    t=21810000;

    for(i=0;i<=140;i=i+35)
    {
        for(j=0;j<=20;)
        {
            t=t+1;
            gotoxy(59,7);
            SetColor(6);
            cout<<"GR no : "<<t;
            gotoxy(6+i,12+j);
            ch=getche();
            if(ch=='P' ||ch=='p')
            {
                SetColor(10);
                FillColor(6+i,11+j,13+i,13+j);
                SetBackColor(10);
                SetColor(15);
                gotoxy(6+i,12+j);
                cout<<t;
                fout1<<t<<" ";
                SetBackColor(0);
                p=p+1;
            }
            if(ch=='A'||ch=='a')
            {
                SetColor(4);
                FillColor(6+i,11+j,13+i,13+j);
                SetBackColor(4);
                SetColor(15);
                gotoxy(6+i,12+j);
                cout<<t;
                fout2<<t<<" ";
                SetBackColor(0);
                a=a+1;
            }
            t=t+1;
            gotoxy(59,7);
            SetColor(6);
            cout<<"GR no : "<<t;
            gotoxy(16+i,12+j);
            ch=getche();
            if(ch=='P' ||ch=='p')
            {
                SetColor(10);
                FillColor(15+i,11+j,24+i,13+j);
                SetBackColor(10);
                SetColor(15);
                gotoxy(16+i,12+j);
                cout<<t;
                fout1<<t<<" ";
                SetBackColor(0);
                p=p+1;
            }
            if(ch=='A'||ch=='a')
            {
                SetColor(4);
                FillColor(15+i,11+j,24+i,13+j);
                SetBackColor(4);
                SetColor(15);
                gotoxy(16+i,12+j);
                cout<<t;
                fout2<<t<<" ";
                SetBackColor(0);
                a=a+1;
            }
            j=j+6;
        }
            if(t==21810032)
            {
                gotoxy(0,51);
                break;
            }
    }
    fout1.close();
    fout2.close();
    gotoxy(58,9);
    cout<<"Attendance Recorded : ";
    gotoxy(62,33);
    SetColor(3);
    cout<<":"<<p;
    gotoxy(86,33);
    cout<<":"<<a;
    SetColor(14);
    DRectangle(3,2,132,34);
    getche();
    return;
}
