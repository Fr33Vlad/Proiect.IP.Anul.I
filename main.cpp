#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int c;
double x;
//functii conversie lungime
double lungMFT( double M)
{
    return M/0.3048;
}
double lungMIN(double M)
{
    return M/0.0254;
}
double lungMKM(double M)
{
    return M/1000.0;
}
double lungMCM( double M)
{
    return M*100;
}
double lungCMM(double CM)
{
    return CM/100.00;
}
double lungCMFT(double CM)
{
    return CM* 0.032808;
}
double lungCMKM(double CM)
{
    return CM/100000;
}
double lungCMIN(double CM)
{
    return CM* 0.39370;
}
double lungFTM(double FT)
{
    return FT/3.2808;
}
double lungFTCM(double FT)
{
    return FT/0.032808;
}
double lungFTIN(double FT)
{
    return FT*12.000;
}
double lungFTKM(double FT)
{
    return FT/3280.8;
}
double lungINM(double IN)
{
    return IN/39.370;
}
double lungINCM(double IN)
{
    return IN/0.39370;
}
double lungINFT(double IN)
{
    return IN*0.083333;
}
double lungINKM(double IN)
{
    return IN/39370;
}
double lungKMM(double KM)
{
    return KM/0.001;
}
double lungKMCM(double KM)
{
    return KM/0.00001;
}
double lungKMFT(double KM)
{
    return KM*3280.8;
}
double lungKMIN(double KM)
{
    return KM* 39370;
}
void meniu()
{
    system("cls");

    cout << "\t\t\t\tConvertor\n"<<endl;
    cout << "\t1) Lungime\n";
    cout << "\t2) Arie\n";
    cout << "\t3) Volum\n";
    cout << "\t4) Timp\n";
    cout << "\t5) Viteza\n";
    cout << "\t6) Temperatura\n";
    cout << "\t7) Masa\n";
    cout << "\t8) Energie\n";
    cout << "\t9) Presiune\n";
    cout << "\t10) Densitate\n";
    cout << "\t11) Consum combustibil\n"<<endl;
    cout<<"\t0) Exit \n";
}
int main()
{
    cout<<setprecision(18);
    int op;
    do
    {
        meniu();
        cout<<"\n\n\n\tSelectati optiunea:";
        cin>>op;
        system("cls");
        switch(op)
        {
        case 1:
        {
            system("cls");
            cout << "\t\t\t\tConvertor Lungime\n"<<endl;
            cout << "1) Metri in cemtimetri\n";
            cout << "2) Metri in kilometri\n";
            cout << "3) Metri in inches\n";
            cout << "4) Metri in feets\n";
            cout << "5) Centimetri in metri\n";
            cout << "6) Centimetri in kilometri\n";
            cout << "7) Centimetri in inches\n";
            cout << "8) centimetri in feets\n";
            cout << "9) Kilometri in centimetri\n";
            cout << "10) Kilometri in metri\n";
            cout << "11) Kilometri in inches\n";
            cout << "12) Kilometri in feets\n";
            cout << "13) Inches in metri\n";
            cout << "14) Inches in centimetri\n";
            cout << "15) Inches in feets\n";
            cout << "16) Inches in kilometri\n";
            cout << "17) Feets in centimetri\n";
            cout << "18) Feets in metri\n";
            cout << "19) Feets in kilometri\n";
            cout << "20) Feets in inches\n"<<endl;
            cout<<"\nSelectati optiunea:";
            cin>>c;
            switch(c)
            {
            case 1:
            {
                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" metri = "<<lungMCM(x)<<" centimetri"<<endl;
                cin>>x;
                break;
            }
            case 2:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" metri = "<<lungMKM(x)<<" kilometri"<<endl;
                cin>>x;
                break;
            }
            case 3:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" metri = "<<lungMIN(x)<<" inches"<<endl;
                cin>>x;
                break;
            }

            case 4:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" metri = "<<lungMFT(x)<<" feets(picioare)"<<endl;
                cin>>x;
                break;
            }
            case 5:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" centimetri = "<<lungCMM(x)<<" metri"<<endl;
                cin>>x;
                break;
            }
            case 6:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" centimetri = "<<lungCMKM(x)<<" kilometri"<<endl;
                cin>>x;
                break;
            }
            case 7:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" centimetri = "<<lungCMIN(x)<<" inches"<<endl;
                cin>>x;
                break;
            }
            case 8:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" centimetri = "<<lungCMFT(x)<<" feets(picioare)"<<endl;
                cin>>x;
                break;
            }
            case 9:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" kilometri = "<<lungKMCM(x)<<" centimetri"<<endl;
                cin>>x;
                break;
            }
            case 10:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" kilometri = "<<lungKMM(x)<<" metri"<<endl;
                cin>>x;
                break;
            }
            case 11:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" kilometri = "<<lungKMIN(x)<<" inches"<<endl;
                cin>>x;
                break;
            }
            case 12:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" kilometri = "<<lungKMFT(x)<<" feets(picioare)"<<endl;
                cin>>x;
                break;
            }
            case 13:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" inches = "<<lungINM(x)<<" metri"<<endl;
                cin>>x;
                break;
            }
            case 14:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;
                cout<<x<<" inches = "<<lungINCM(x)<<" centimetri"<<endl;
                cin>>x;
                break;
            }
            case 15:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" inches = "<<lungINFT(x)<<" feets(picioare)"<<endl;
                cin>>x;
                break;
            }
            case 16:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;
                cout<<x<<" inches = "<<lungINKM(x)<<" kilometri"<<endl;
                cin>>x;
                break;
            }
            case 17:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;
                cout<<x<<" feets(picioare) = "<<lungFTCM(x)<<" centimetri"<<endl;
                cin>>x;
                break;
            }
            case 18:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" feets(picioare) = "<<lungFTM(x)<<" metri"<<endl;
                cin>>x;
                break;
            }

            case 19:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" feets(picioare) = "<<lungFTKM(x)<<" kilometri"<<endl;
                cin>>x;
                break;
            }


            case 20:
            {

                system("cls");
                cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
                cin>>x;

                cout<<x<<" feets(picioare) = "<<lungFTIN(x)<<" inches"<<endl;
                cin>>x;
                break;
            }
            }

            break;

        }
        case 2:
        {

















































































        }


        }
    }
    while(op>=1 && op<=20);

    return 0;
}
