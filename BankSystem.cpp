#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
using namespace std;

class BankSystem
{
    private:
        char name[50];
        char *Holder_name[100];
        int accountNumber[100];
        float initialBalance[100];
        char accountType[100];
        int temparory;
        int count,k;


                                int account;
                                char newname[100],newtype;
                                float newbalance;
                                char name1[100];
                                char *q;
                                char *name2;
                                float amount;
                                int i;

    public:
        BankSystem()
        {
               count=0;
                k=0;
                name[50]={'\0'};
        }
        void Getdata(void);
        void Deposit(void);
         void Withdraw(void);
        void balanceEnquiry(void);
         void closeAccount(void);
        void Modify(void);
         void Display(void);
        void exit(void);

};


    void BankSystem::Getdata()
    {
        char *p;
        int tempaccount,temp=0;
        cout<<"\t\tBank Account Creation Form\n";
        cout<<"\t\t--------------------------\n";
        cout<<"\t\tEnter The Holder's Name : ";
        cin>>name;
        p=(char*)malloc(strlen(name)+1);
        strcpy(p,name);
        Holder_name[count]=p;
        cout<<"\t\tEnter the Account Number : ";
    ab: cin>>accountNumber[count];
        for(i=0;i<count;i++)
        {
            if(accountNumber[count]==accountNumber[i])
            {
                cout<<"\n\t\tSorry Account Number is not Available\n ";
                cout<<"\t\tEnter the Account Number : ";
                goto ab;
            }
        }


        cout<<"\t\tEnter the Account Type (S/C) : ";
        cin>>accountType[count];
        accountType[count]=toupper(accountType[count]);
        cout<<"\t\tEnter the Initial Balance : ";
        cin>>initialBalance[count];
        count++;
        system("cls");

    }
        void BankSystem::Display()
        {
            cout<<"\t---------------------------------------------------------\n";
            cout<<"\tName\t Account Number\t   Account Type\t     Balance\n";
            cout<<"\t---------------------------------------------------------\n";
                for(i=0;i<count;i++)
                {
                    cout<<"\t"<<Holder_name[i]<<"\t\t"<<accountNumber[i]<<"\t\t"<<accountType[i]<<"\t\t"<<initialBalance[i]<<"\n";
                }
                cout<<"\n\n";
                system("pause");
                system("cls");
        }
            void BankSystem::Deposit()
            {
              int temp=0;
                cout<<"\t----------------------------------------------------\n";
                cout<<"                            Deposit Form              \n";
                cout<<"\t----------------------------------------------------\n";
                cout<<"\n\n\tEnter the Name : ";
                cin>>name1;
                q=(char*)malloc(strlen(name1)+1);
                strcpy(q,name1);
                name2=q;
                cout.flush();
                cout<<"\n\tEnter the Account Number : ";
                cin>>account;
                    for(i=0;i<count;i++)
                    {
                        if(strcmp(name2,Holder_name[i])==0&&account==accountNumber[i])
                        {
                            temp=1;
                            cout<<"\n\tEnter the Amount : ";
                            cin>>amount;
                            initialBalance[i]+=amount;
                            break;
                        }
                    }
                    if(temp==0)
                    {
                        cout<<"\n\tSorry No Match Found ";
                    }
                    free(q);
                    free(name2);
                    cout<<"\n\n";
                    system("pause");
                    system("cls");


            }
                    void BankSystem::Withdraw()
                    {
                       int temp=0;
                        cout<<"\t----------------------------------------------------\n";
                        cout<<"                            Withdraw Form              \n";
                        cout<<"\t----------------------------------------------------\n";
                        cout<<"\n\n\tEnter the Name : ";
                        cin>>name1;
                        q=(char*)malloc(strlen(name1)+1);
                        strcpy(q,name1);
                        name2=q;
                        cout.flush();
                        cout<<"\n\tEnter the Account Number : ";
                        cin>>account;
                        for(i=0;i<count;i++)
                        {
                            if((strcmp(name2,Holder_name[i])==0)&&account==accountNumber[i])
                            {
                                temp=1;
                                cout<<"\n\tEnter the Amount : ";
                                cin>>amount;
                                if(initialBalance[i]<500||amount>=initialBalance[i])
                                {
                                    cout<<"\n\tSorry Low Balance ";
                                    break;
                                }
                                else
                                {
                                    initialBalance[i]-=amount;
                                    break;
                                }
                            }
                        }
                        if(temp==0)
                        {
                            cout<<"\n\tSorry No Match Found ";
                        }
                        free(q);
                        free(name2);
                        cout<<"\n\n";
                        system("pause");
                        system("cls");


            }
                    void BankSystem::balanceEnquiry()
                    {
                      int temp=0;
                        cout<<"\t----------------------------------------------------\n";
                        cout<<"                            Withdraw Form              \n";
                        cout<<"\t----------------------------------------------------\n";
                        cout<<"\n\n\tEnter the Name : ";
                        cin>>name1;
                        q=(char*)malloc(strlen(name1)+1);
                        strcpy(q,name1);
                        name2=q;
                        cout.flush();
                        cout<<"\n\tEnter the Account Number : ";
                        cin>>account;
                        for(i=0;i<count;i++)
                        {
                            if((strcmp(name2,Holder_name[i])==0)&&account==accountNumber[i])
                            {
                                temp=1;
                                 cout<<"\t---------------------------------------------------------\n";
                                 cout<<"\tName\t Account Number\t   Account Type\t     Balance\n";
                                 cout<<"\t---------------------------------------------------------\n";
                                 cout<<"\t"<<Holder_name[i]<<"\t\t"<<accountNumber[i]<<"\t\t"<<accountType[i]<<"\t\t"<<initialBalance[i]<<"\n";
                               break;
                            }
                        }
                        if(temp==0)
                        {
                            cout<<"\n\tSorry No Match Found ";
                        }
                        free(q);
                        free(name2);
                        cout<<"\n\n";
                        system("pause");
                        system("cls");
                    }
                        void BankSystem::closeAccount()
                        {
                            int temp=0;
                            cout<<"\t----------------------------------------------------\n";
                            cout<<"                    Account Closure Form              \n";
                            cout<<"\t----------------------------------------------------\n";
                            cout<<"\n\n\tEnter the Name : ";
                            cin>>name1;
                            q=(char*)malloc(strlen(name1)+1);
                            strcpy(q,name1);
                            name2=q;
                            cout.flush();
                            cout<<"\n\tEnter the Account Number : ";
                            cin>>account;
                            for(i=0;i<count;i++)
                            {
                                if((strcmp(name2,Holder_name[i])==0)&&account==accountNumber[i])
                                {
                                    temp=1;
                                    temparory=i;
                                }
                            }
                            if(temp==0)
                            {
                                cout<<"\n\tSorry No Match Found ";
                            }
                                else
                                {
                                    char *q;
                                     for(k=temparory;k<count-1;k++)
                                        {
                                        q=(char*)malloc(strlen(Holder_name[k+1])+1);
                                        strcpy(q,Holder_name[k+1]);
                                        Holder_name[k]=q;
                                        accountNumber[k]=accountNumber[k+1];
                                        accountType[k]=accountType[k+1];
                                        initialBalance[k]=initialBalance[k+1];
                                        }
                                        count--;
                                        cout<<"\n\tAccount Closed SuccessFully ";
                                }
                            free(q);
                            free(name2);
                            cout<<"\n\n";
                            system("pause");
                            system("cls");
                        }
                            void BankSystem::Modify()
                            {

                                int k,temp=0;
                                cout<<"\t----------------------------------------------------\n";
                                cout<<"               Account Modification Form              \n";
                                cout<<"\t----------------------------------------------------\n";
                                cout<<"\n\n\tEnter the Name : ";
                                cin>>name1;
                                q=(char*)malloc(strlen(name1)+1);
                                strcpy(q,name1);
                                name2=q;
                                cout.flush();
                                cout<<"\n\tEnter the Account Number : ";
                                cin>>account;
                                for(i=0;i<count;i++)
                                {
                                    if((strcmp(name2,Holder_name[i])==0)&&account==accountNumber[i])
                                    {
                                        temp=1;
                                        cout<<"\n\tEnter the Modified Name : ";
                                        cin>>newname;
                                        strcpy(Holder_name[i],newname);
                                        cout<<"\n\tEnter the Modified Account Type : ";
                                        cin>>newtype;
                                        accountType[i]=newtype;
                                        cout<<"\n\tEnter the Modified Balance : ";
                                        cin>>newbalance;
                                        initialBalance[i]=newbalance;
                                        cout<<"\n\t Modification done ";
                                        break;

                                    }
                                }
                                if(temp==0)
                                {
                                    cout<<"\n\tSorry No Match Found ";
                                }

                                free(q);
                                free(name2);
                                cout<<"\n\n";
                                system("pause");
                                system("cls");
                            }
int main()
{
    class BankSystem b;
    char choice;
    do
    {
    cout<<"\t----------------------------------------------------\n";
    cout<<"                            BANK SYSTEM                  \n";
    cout<<"\t----------------------------------------------------\n";

    cout<<"\t\t\t1.) NEW ACCOUNT\n\n";
    cout<<"\t\t\t2.) DEPOSIT AMOUNT\n\n";
    cout<<"\t\t\t3.) WITHDRAW AMOUNT\n\n";
    cout<<"\t\t\t4.) BALANCE ENQUIRY\n\n";
    cout<<"\t\t\t5.) HOLDER LIST\n\n";
    cout<<"\t\t\t6.) CLOSE ACCOUNT\n\n";
    cout<<"\t\t\t7.) MODIFY ACCOUNT\n\n";
    cout<<"\t\t\t8.) EXIT\n\n";
    cout<<"\t\t\tEnter your choice : ";
    cin>>choice;
    system("cls");
        switch(choice)
        {
        case '1':
            b.Getdata();
            break;
        case '2':
            b.Deposit();
            break;
        case '3':
            b.Withdraw();
            break;
        case '4':
            b.balanceEnquiry();
            break;
        case '5':
            b.Display();
            break;
        case '6':
            b.closeAccount();
            break;
        case '7':
            b.Modify();
            break;

        }
   } while(choice!='8');
return 0;
}
