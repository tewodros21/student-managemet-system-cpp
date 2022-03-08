#include<iostream>
#include<stdlib.h>

using namespace std;
struct sms

{
    string first_name[100];
    string last_name[100];
    string sex[100];
    string course[100];
    string id[100];
    float gpa[100];

};
int main()
{
    int i = 0;
    int reopp;
    int section[100];
    int chossis;
    int password;
    string x;//for id
    string y;//for id
    string w;//for id
    string user;
    sms t;

    cout<<"\tENTER THE PASSWORD PLZ  \n ";
    cin>>password;
    cout<<"\tENTER THE USER NAME PLZ \n ";
    cin>>user;
            cout<<"\n";
            system("cls");
        if (user=="tedo"&&password==2114)
        {

            s:
            cout << "\n\t\t====== STUDENT INFORMATION SYSTEM ======\n";
            cout <<"\n";
            cout << "\n";
            cout<<  "\n \t\t\t\n";
            cout << "   \t\t\t 1.   ADD    RECORDS                    \n";
            cout << "   \t\t\t 2.   LIST   RECORDS                   \n";
            cout<< "    \t\t\t 3.   SEARCH RECORDS                   \n";
            cout<<"     \t\t\t 4.  MODIFAY RECORDS                   \n";
            cout << "   \t\t\t 5.   DELETE RECORDS                   \n";
            cout << "   \t\t\t 6.   EXIT   PROGRAM                   \n";
            cout << "\n\n";
            cout << "\t\t\t Select Your Choice :=> ";

            cin>>chossis;
            system("cls");
            switch(chossis)
{
case 1:
    u:
    cout<<"ENTER THE FERST NAME :  ";
    cin>>t.first_name[i];
    cout<<"ENTER THE LAST NAME  : ";
    cin>>t.last_name[i];
    cout<<"ENTER THE GPA        :";
    cin>>t.gpa[i];
    cout << "ENTER THE SEX        : ";
    cin>>t.sex[i];
    cout << "ENTER THE COURSE     : ";
    cin>>t.course[i];
    cout << "ENTER THE SECTION    : ";
    cin>>section[i];
    cout<<"Enter THE ID         :";
    cin>>t.id[i];
    i++;

    cout<<"\n\nPRESS 1 TO ADD ANOTHER\n";
    cout<<"PRESS 2 TO RETURN TO THE MENU\n";
    cin>>reopp;
    system("cls");
    switch (reopp)
        {
            case 1:

                goto u;
                break;

            case 2:

                goto s;
                break;
        }
            goto s;
            break;


case 2:
    system("cls");
        cout<<"\n\n\t\tLIST OF THE RECORDE\n\n\n";
        cout<<"\n";
    for (int m = 0; m<i; m++)
            {
                if (t.first_name[m]=="ttt")
                {
                    continue;
                }
              else
              {
                cout<<"FULL_NAME"<<"\t"<<"SEX"<<"\t"<<"ID"<<"\t"<<"COURSE"<<"\t"<<"SECTION"<<"\t"<<"GEPA\n\n\n";
                cout<<t.first_name[m]<<" "<<t.last_name[m]<<"\t"<<t.sex[m]<<"\t"<<t.id[m]<<"\t"<<t.course[m]<<"\t"<<section[m]<<"\t"<<t.gpa[m]<<endl;
                cout<<"\n";
              }
            }

            goto s;
            break;

case 3:
    system("cls");
    cout<<"FOR SEARCH THE RECORDE PLZ ENTER THE ID NUMBER :=> ";

    cin>>x;
    for(int j=0; j<i; j++)
    {
        while (t.id[j] == x)
        {
cout<<t.first_name[j]<<" "<<t.last_name[j]<<"\t"<<t.sex[j]<<"\t"<<t.id[j]<<"\t"<<t.course[j]<<"\t"<<section[j]<<"\t"<<t.gpa[j]<<"\n\n\n";

            goto s;
            break;
        }
    }
    cout<<"\n\n";
    cout<<"THE RECORDE IS NOT FOUND!!\n"<<endl;
    goto s;
    break;
case 4:
    system("cls");
       cout<<"TO MODIFY THE RECORDE PLZ ENTER THE ID PLZ :=>";
       cin>>y;
   for(int k=0; k<i; k++)
    {
        while (t.id[k] == y)
    {
        cout<<"ENTER THE NEW first name\n";
        cin>>t.first_name[k];
        cout<<"ENTER THE NEW LAST NAME\n";
        cin>>t.last_name[k];
        cout<<"ENTER THE SEX\n";
        cin>>t.sex[k];
        cout<<"ENTER THE NEW ID\n";
        cin>>t.id[k];
        cout<<"ENTER THE NEW COURSE\n";
        cin>>t.course[k];
        cout<<"ENTER THE NEW SECTION\n";
        cin>>section[k];
        cout<<"ENTER THE NEW GPA PLZ\n";
        cin>>t.gpa[k];
        cout<<"\n\n";


     goto s;
    break;
    }
    }

case 5:
       cout<<"TO DELEAT ENTER THE ID PLZ : => ";
       cin>>w;
    for(int l=0; l<i; l++)
    {
        while(t.id[l]==w)
    {
            t.first_name[l]="ttt";
        system("cls");
      goto s;
      break;
    }
    }
case 6:
     cout<<"\n\n";
    cout<< "\t\t\tTHANK YOU FOR USING THIS SOFTWER (:\n";
}// end of switch
}// end of password
else
{
    cout<<" \n  \t\t\t SORRY YOUR PASSWORD AND USER NAME IS WRONG !! ):\n";

}//end of else
return 0;
}//end of main function

