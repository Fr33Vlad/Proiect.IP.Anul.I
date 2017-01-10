#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
using namespace std;
int c;
double x,y;
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
//functii conversie arie
double arieARHA(double AR)
{
    return AR*0.01;
}
double arieARMP(double AR)
{
    return AR*100;
}
double arieARKMP(double AR)
{
    return AR*0.0001;
}
double arieHAAR(double HA)
{
    return HA*100;
}
double arieHAMP(double HA)
{
    return HA/0.0001;
}
double arieHAKMP(double HA)
{
    return HA/100.00;
}
double arieMPAR(double MP)
{
    return MP*0.01;
}
double arieMPHA(double MP)
{
    return MP/10000;
}
double arieKMPAR(double KMP)
{
    return KMP*10000;
}
double arieKMPHA(double KMP)
{
    return KMP/0.010000;
}
double arieKMPMP(double KMP)
{
    return KMP*1000000;
}
//functii conversie volum
double m3l(double m3)
{
    return m3*1000;
}
double m3galUK(double m3)
{
    return m3*219.9736031676199;
}
double m3galUS(double m3)
{
    return m3*264.2007926023778;
}
double lm3(double l)
{
    return l*0.001;
}
double lgalUK(double l)
{
    return l*0.2199736031676199;
}
double lgalUS(double l)
{
    return l*0.2642007926023778;
}
double galUKm3(double galUK)
{
    return galUK*0.004546;
}
double galUKl(double galUK)
{
    return galUK*4.545999999999999;
}
double galUKgalUS(double galUK)
{
    return galUK*1.2010568031704094;
}

double galUSgalUK(double galUS)
{
    return galUS*0.8326000879894414;
}
double galUSm3(double galUS)
{
    return galUS*0.003785;
}
double galUSl(double galUS)
{
    return galUS*3.785;
}
//functii conversie timp
double smin(double s)
{
    return s*0.016666666666666666;
}
double sh(double s)
{
    return s*0.0002777777777777778;
}
double szi(double s)
{
    return s*0.000011574074074074073;
}
double mins(double s)
{
    return s*60;

}
double minh(double s)
{
    return s*0.016666666666666666;

}
double minzi(double s)
{
    return s*0.0006944444444444445;

}
double hs(double s)
{
    return s*3600;
}
double hmin(double s)
{
    return s*60;
}
double hzi(double s)
{
    return s*0.041666666666666664;
}
double zis(double s)
{
    return s*86400;
}
double zimin(double s)
{
    return s*1440;
}
double zih(double s)
{
    return s*24;
}
//functii conversie viteza
double kmhmph(double k)
{
    return k*0.6213711972083035;
}
double kmhms(double k)
{
    return k*0.27777778;
}
double mphkmh(double k)
{
    return k*1.6093439871252482;
}
double mphms(double k)
{
    return k*0.44704;
}
double mskmh(double k)
{
    return k*3.5999999712000004;
}
double msmph(double k)
{
    return k*2.2369362920544025;
}
//functii conversie temperatura
double tempCR(double C )
{
    double R;
    R=(C+273.15)*9/5;
    return R;
}
double tempCF(double C )
{
    double F;
    F=C*9/5+32;
    return F;
}
double tempCK(double C )
{
    double K;
    K=C+273.15;
    return K;
}
double tempFC(double F )
{
    double C;
    C=(F-32)*5/9;
    return C;
}
double tempFR(double F )
{
    double R;
    R=F+459.67;
    return R;
}
double tempFK(double F )
{
    double K;
    K=(F+459.67)*5/9;
    return K;
}
double tempKF(double K )
{
    double F;
    F=K*9/5-459.67;
    return F;
}
double tempKC(double K )
{
    double C;
    C=K-273.15;
    return C;
}
double tempKR(double K )
{
    double R;
    R=K*9/5;
    return R;
}
double tempRF(double R )
{
    double F;
    F=R-459.67;
    return F;
}
double tempRC(double R )
{
    double C;
    C=(R-491.67)*5/9;
    return C;
}
double tempRK(double R )
{
    double K;
    K=R*5/9;
    return K;
}
//functii convertire masa
double gkg(double g)
{
    return g*0.001;
}
double glb(double g)
{
    return g*0.0022046244201837776;
}
double gmg(double g)
{
    return g*1000.0000000000001;
}
double kgg(double g)
{
    return g*1000;
}
double kglb(double g)
{
    return g*2.2046244201837775;
}
double kgmg(double g)
{
    return g*1000000;
}
double lbg(double g)
{
    return g*453.592;
}
double lbkg(double g)
{
    return g*0.453592;
}
double lbmg(double g)
{
    return g*453592;
}
double mgg(double g)
{
    return g*0.001;
}
double mgkg(double g)
{
    return g*0.000001;
}
double mglb(double g)
{
    return g*0.0000022046244201837775;
}
//functii convertire energie
double calkcal(double c)
{
    return c*0.001;
}
double calj(double c)
{
    return c*4.1868;
}
double calkj(double c)
{
    return c*0.0041868;
}
double kcalcal(double c)
{
    return c*1000.0000000000001;
}
double kcalj(double c)
{
    return c*4186.8;
}
double kcalkj(double c)
{
    return c*4.1868;
}
double jcal(double c)
{
    return c*0.23884589662749595;
}
double jkcal(double c)
{
    return c*0.00023884589662749592;
}
double jkj(double c)
{
    return c*0.001;
}
double kjcal(double c)
{
    return c*238.84589662749596;
}
double kjkcal(double c)
{
    return c*0.23884589662749592;
}
double kjj(double c)
{
    return c*1000;
}
//functii convertire presiune
double ba(double x)
{
    return x*0.9671821878659459;
}
double bt(double x)
{
    return x*735.0604490503765;
}
double bp(double x)
{
    return x*14.213698297557126;
}
double ab(double x)
{
    return x*1.0339313653061224;
}
double ato(double x)
{
    return x*760.0020536691873;
}
double ap(double x)
{
    return x*14.695988486842547;
}
double pa(double x)
{
    return x*0.06804578003686579;
}
double pt(double x)
{
    return x*51.714932571539784;
}
double pb(double x)
{
    return x*0.07035466625683673;
}
double ta(double x)
{
    return x*0.0013157859181723722;
}
double tp(double x)
{
    return x*0.01933677470461073;
}
double tb(double x)
{
    return x*0.0013604323308265306;
}
//functii convertire densitate
double kmg(double x)
{
    return x*1000;
}
double kmkl(double x)
{
    return x*0.001;
}
double gkm(double x)
{
    return x*0.001;
}
double gkl(double x)
{
    return x*0.000001;
}
double klkm(double x)
{
    return x*1000;
}
double klg(double x)
{
    return x*1000000;
}
//functii convertire consum combustibil
double lmg(double x)
{
    return x*235,2145;
}
double lkl(double x)
{
    return x*100;
}
double mgl(double x)
{
    return x*235,2145;
}
double mgkl(double x)
{
    return x*0,425143858;
}
double kll(double x)
{
    return x*100;
}
double klmg(double x)
{
    return x*2,352145;
}
void verificare(double &x)
{
    while(x>999999999999999 || x<0)
    {
        cout<<"Valoare gresita"<<endl;
        cout<<"Dati o valoare noua:"<<endl;
        cin>>x;
    }

}
c11()
{
    system("cls");
    cout << "\t\t\t\tConvertor Consum combustibil\n"<<endl;
    cout << "1) Litri la 100 km in mile la galoane(US)\n";
    cout << "2) Litri la 100 km in kilometri la litri\n";
    cout << "3) Mile la galoane(US) in litri la 100 km\n";
    cout << "4) Mile la galoane(US) in kilometri la litri\n";
    cout << "5) Kilometri la litri in litri la 100 km \n";
    cout << "6) Kilometri la litri in mile la galoane(US)\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"Introduceti consumul de combustibil pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" litri la 100 km = "<<lmg(x)<<" mile la galoane"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 2:
    {
        system("cls");
        cout<<"Introduceti consumul de combustibil pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        while(x>999999999999999 || x<0)
        {
            cout<<"Valoare gresita"<<endl;
            cout<<"Dati o valoare noua:"<<endl;
            cin>>x;
        }
        cout<<x<<" litri la 100 km = "<<lkl(x)<<" kilometri la litri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;

        cin>>x;
        break;

    }
    case 3:
    {
        system("cls");
        cout<<"Introduceti consumul de combustibil pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" mile la galoane = "<<mgl(x)<<" litri la 100 km"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    case 4:
    {
        system("cls");
        cout<<"Introduceti consumul de combustibil pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" mile la galoane = "<<mgkl(x)<<" kilometri la litru"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    case 5:
    {
        system("cls");
        cout<<"Introduceti consumul de combustibil pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri la litri = "<<kll(x)<<" litri la 100 km"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    case 6:
    {
        system("cls");
        cout<<"Introduceti consumul de combustibil pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri la litri = "<<klmg(x)<<" mile la galoane"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    }
}
c10()
{
    system("cls");
    cout << "\t\t\t\tConvertor Densitate\n"<<endl;
    cout << "1) Kilograme pe metru cub  in grame pe centimetru cub\n";
    cout << "2) Kilograme pe metru cub in kilograme pe litru \n";
    cout << "3) Grame pe centimetru cub in kilograme pe metru cub\n";
    cout << "4) Grame pe centimetru cub in kilograme pe litru\n";
    cout << "5) Kilograme pe litru in kilograme pe metru cub\n";
    cout << "6) Kilograme pe litru in grame pe centimetru cub\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"Introduceti densitatea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilograme pe metru cub = "<<kmg(x)<<" grame pe centimetru cub"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    case 2:
    {
        system("cls");
        cout<<"Introduceti densitatea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilograme pe metru cub = "<<kmkl(x)<<" kilograme pe litru"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    case 3:
    {
        system("cls");
        cout<<"Introduceti densitatea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grame pe centimetru cub = "<<gkm(x)<<" kilograme pe metru cub"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    case 4:
    {
        system("cls");
        cout<<"Introduceti densitatea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grame pe centimetru cub = "<<gkl(x)<<" kilograme pe litru"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    case 5:
    {
        system("cls");
        cout<<"Introduceti densitatea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilograme pe litru = "<<klkm(x)<<" kilograme pe metru cub"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    case 6:
    {
        system("cls");
        cout<<"Introduceti densitatea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<setprecision(21)<<x<<" kilograme pe litru = "<<klg(x)<<" grame pe centimetru cub"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;

    }
    }//switch
}
c9()
{
    system("cls");
    cout << "\t\t\t\tConvertor Presiune\n"<<endl;
    cout << "1) Atmosfere  in PSI\n";
    cout << "2) Atmosfere in Bari\n";
    cout << "3) Atmosfere in Torr\n";
    cout << "4) PSI in Atmosfere\n";
    cout << "5) PSI in Bari\n";
    cout << "6) PSI in Torr\n";
    cout << "7) Bari in Atmosfere\n";
    cout << "8) Bari in PSI\n";
    cout << "9) Bari in Torr\n";
    cout << "10) Torr in Atmosfere\n";
    cout << "11) Torr in PSI\n";
    cout << "12) Torr in Bari\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"Introduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" atmosfere = "<<ap(x)<<" PSI"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 2:
    {
        system("cls");
        cout<<"Introduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" atmosfere = "<<ab(x)<<" bari"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {
        system("cls");
        cout<<"Introduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" atmosfere = "<<ato(x)<<" torr"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 4:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" PSI = "<<pa(x)<<" atmosfere"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" PSI = "<<pb(x)<<" bari"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" PSI = "<<pt(x)<<" torr"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 7:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" bari = "<<ba(x)<<" atmosfere"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;;
    }
    case 8:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" bari = "<<bp(x)<<" PSI"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 9:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" bari = "<<bt(x)<<" torr"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 10:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" torr = "<<ta(x)<<" atmosfere"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 11:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" torr = "<<tp(x)<<" PSI"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 12:
    {
        system("cls");
        cout<<"\tIntroduceti presiunea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" torr = "<<tb(x)<<" bari"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }//switch9
}
c8()
{
    system("cls");
    cout << "\t\t\t\tConvertor Energie\n"<<endl;
    cout << "1) Calorii  in kilocalorii\n";
    cout << "2) Calorii in jouli\n";
    cout << "3) Calorii in kilojouli\n";
    cout << "4) Kilcalorii in calorii\n";
    cout << "5) Kilcalorii in jouli\n";
    cout << "6) Kilcalorii in kilojouli\n";
    cout << "7) Jouli in calorii\n";
    cout << "8) Jouli in kilocalorii\n";
    cout << "9) Jouli in kilojouli\n";
    cout << "10) Kilojouli in calorii\n";
    cout << "11) Kilojouli in kilocalorii\n";
    cout << "12) Kilojouli  in jouli\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" calorii = "<<calkcal(x)<<" kilocalorii"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }

    case 2:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" calorii = "<<calj(x)<<" jouli"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" calorii = "<<calkj(x)<<" kilojouli"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 4:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilocalorii = "<<kcalcal(x)<<" calorii"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilocalorii = "<<kcalj(x)<<" jouli"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilocalorii = "<<kcalkj(x)<<" kilojouli"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 7:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" jouli = "<<jcal(x)<<" calorii"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 8:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" jouli = "<<jkcal(x)<<" kilocalorii"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 9:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" jouli = "<<jkj(x)<<" kilojouli"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 10:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilojouli = "<<kjcal(x)<<" calorii"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 11:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilojouli = "<<kjkcal(x)<<" kilocalorii"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 12:
    {
        system("cls");
        cout<<"\tIntroduceti energia pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilojouli = "<<kjj(x)<<" jouli"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }//switch
}
c7()
{
    system("cls");
    cout << "\t\t\t\tConvertor Masa\n"<<endl;
    cout << "1) Grame  in kilograme\n";
    cout << "2) Grame in livre\n";
    cout << "3) Grame in miligrame\n";
    cout << "4) Kilograme in grame\n";
    cout << "5) Kilograme in livre\n";
    cout << "6) Kilograme in miligrame\n";
    cout << "7) Livre in grame\n";
    cout << "8) Livre in kilograme\n";
    cout << "9) Livre in miligrame\n";
    cout << "10) Miligrame in grame\n";
    cout << "11) Miligrame in livre\n";
    cout << "12) Miligrame  in kilograme\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grame = "<<gkg(x)<<" kilograme"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 2:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grame = "<<glb(x)<<" livre"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grame = "<<gmg(x)<<" miligrame"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 4:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilograme = "<<kgg(x)<<" grame"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilograme = "<<kglb(x)<<" livre"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilograme = "<<kgmg(x)<<" miligrame"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 7:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" livre = "<<lbg(x)<<" grame"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 8:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" livre = "<<lbkg(x)<<" kilograme"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 9:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" livre = "<<lbmg(x)<<" miligrame"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 10:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" miligrame = "<<mgg(x)<<" grame"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 11:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" miligrame = "<<mglb(x)<<" livre"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 12:
    {
        system("cls");
        cout<<"\tIntroduceti masa pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" miligrame = "<<mgkg(x)<<" kilograme"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }//switch

}
c6()
{
    system("cls");
    cout << "\t\t\t\tConvertor Temperatura\n"<<endl;
    cout << "1) Grade celsius in grade fahrenheit\n";
    cout << "2) Grade celsius in grade rankine\n";
    cout << "3) Grade celsius in kelvin\n";
    cout << "4) Grade fahrenheit in grade celsius\n";
    cout << "5) Grade fahrenheit in grade rankine\n";
    cout << "6) Grade fahrenheit in grade kelvin\n";
    cout << "7) Grade rankine in grade celsius\n";
    cout << "8) Grade rankine in grade fahrenheit\n";
    cout << "9) Grade rankine in grade kelvin\n";
    cout << "10) Grade kelvin in grade celsius\n";
    cout << "11) Grade kelvin in grade fahrenheit\n";
    cout << "12) Grade kelvin  in grade rankine\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade celsius = "<<tempCF(x)<<" grade fahrenheit"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 2:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);

        cout<<x<<" grade celsius = "<<tempCR(x)<<" grade rankine "<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade celsius = "<<tempCK(x)<<" grade kelvin"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 4:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade fahrenheit = "<<tempFC(x)<<" grade celsius"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade fahrenheit = "<<tempFR(x)<<" grade rankine"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade fahrenheit = "<<tempFK(x)<<" grade kelvin"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 7:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade rankine = "<<tempRC(x)<<" grade celsius"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;

        break;
    }
    case 8:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade rankine = "<<tempRF(x)<<" grade fahrenheit"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 9:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade rankine = "<<tempRK(x)<<" grade kelvin"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 10:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade kelvin = "<<tempKC(x)<<" grade celsius"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 11:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade kelvin = "<<tempKF(x)<<" grade fahrenheit"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 12:
    {
        system("cls");
        cout<<"\tIntroduceti numarul de grade pe care doriti sa le convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" grade kelvin = "<<tempKR(x)<<" grade rankine"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }//switch
}
c5()
{
    system("cls");
    cout << "\t\t\t\tConvertor Viteza\n"<<endl;
    cout << "1) KM/H in MPH\n";
    cout << "2) KM/H in M/S\n";
    cout << "3) MPH in KM/H\n";
    cout << "4) MPH in M/S\n";
    cout << "5) M/S in KM/H\n";
    cout << "6) M/S in MPH\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"\tIntroduceti viteza pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" KM/H = "<<kmhmph(x)<<" MPH"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 2:
    {
        system("cls");
        cout<<"\tIntroduceti viteza pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" KM/H = "<<kmhms(x)<<" M/S"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {
        system("cls");
        cout<<"\tIntroduceti viteza pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" MPH = "<<mphkmh(x)<<" KM/H"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 4:
    {
        system("cls");
        cout<<"\tIntroduceti viteza pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<"MPH = "<<mphms(x)<<" M/S"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {
        system("cls");
        cout<<"\tIntroduceti viteza pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" M/S = "<<mskmh(x)<<" KM/H"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {
        system("cls");
        cout<<"\tIntroduceti viteza pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" M/S = "<<msmph(x)<<" MPH"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }//switch

}
c4()
{
    system("cls");
    cout << "\t\t\t\tConvertor Timp\n"<<endl;
    cout << "1) Secunde cubi in minute\n";
    cout << "2) Secunde cubi in ore\n";
    cout << "3) Secunde cubi in zile\n";
    cout << "4) Minute in secunde\n";
    cout << "5) Minute in ore\n";
    cout << "6) Minute in zile\n";
    cout << "7) Ore in secunde\n";
    cout << "8) Ore in minute\n";
    cout << "9) Ore in zile\n";
    cout << "10) Zile in secunde\n";
    cout << "11) Zile in minute\n";
    cout << "12) Zile in ore\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" secunde = "<<smin(x)<<" minute"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 2:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" secunde = "<<sh(x)<<" ore"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" secunde = "<<szi(x)<<" zile "<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 4:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" minute = "<<mins(x)<<" secunde"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" minute = "<<minh(x)<<" ore"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" minute = "<<minzi(x)<<" zile"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 7:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" ore = "<<hs(x)<<" secunde"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 8:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" ore = "<<hmin(x)<<" minute"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 9:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" ore = "<<hzi(x)<<" zile"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 10:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" zile = "<<zis(x)<<" secunde"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 11:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" zile = "<<zimin(x)<<" minute"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 12:
    {
        system("cls");
        cout<<"\tIntroduceti timpul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" zile = "<<zih(x)<<" ore"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }//switch

}
c3()
{
    system("cls");
    cout << "\t\t\t\tConvertor Volum\n"<<endl;
    cout << "1) Metri cubi in litri\n";
    cout << "2) Metri cubi in galoane(US)\n";
    cout << "3) Metri cubi in galoane(UK)\n";
    cout << "4) Litri in metri cubi\n";
    cout << "5) Litri in galoane(US)\n";
    cout << "6) Litri in galoane(UK)\n";
    cout << "7) Galoane(US) in metri cubi\n";
    cout << "8) Galoane(US) in galoane(UK)\n";
    cout << "9) Galoane(US) in litri\n";
    cout << "10) Galoane(UK) in metri cubi\n";
    cout << "11) Galoane(UK) in galoane(US)\n";
    cout << "12) Galoane(UK) in litri\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri cubi = "<<m3l(x)<<" litri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 2:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri cubi = "<<m3galUS(x)<<" galoane(US)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri cubi = "<<m3galUK(x)<<" galoane(UK)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 4:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" litri = "<<lm3(x)<<" metri cubi"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" litri = "<<lgalUS(x)<<" galoane(US)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" litri = "<<lgalUK(x)<<" galoane(UK)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 7:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" galoane(US) = "<<galUSm3(x)<<" metri cubi"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 8:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" galoane(US) = "<<galUSgalUK(x)<<" galoane(UK)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 9:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" galoane(US) = "<<galUSl(x)<<" litri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 10:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" galoane(UK) = "<<galUKm3(x)<<" metri cubi"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 11:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" galoane(UK) = "<<galUKgalUS(x)<<" galoane(US)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 12:
    {
        system("cls");
        cout<<"\tIntroduceti volumul pe care doriti sa il convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" galoane(UK) = "<<galUKl(x)<<" litri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }//switch case3
}
c2()
{
    system("cls");
    cout << "\t\t\t\tConvertor Arie\n"<<endl;
    cout << "1) Ari in hectare\n";
    cout << "2) Ari in kilometri patrati\n";
    cout << "3) Ari in metri patrati\n";
    cout << "4) Hectare in ari\n";
    cout << "5) Hectare in metri patrati\n";
    cout << "6) Hectare in kilometri patrati\n";
    cout << "7) Metri patrati in ari\n";
    cout << "8) Metri patrati in hectare\n";
    cout << "9) Kilometri patrati in metri patrati\n";
    cout << "10) Kilometri patrati in ari\n";
    cout << "11) Kilometri patrati in hectare\n"<<endl;
    cout<<"\nSelectati optiunea:";
    cin>>c;
    switch(c)
    {

    case 1:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" ari = "<<arieARHA(x)<<" hectare"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }

    case 2:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" ari = "<<arieARKMP(x)<<" kilometri patrati"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" ari = "<<arieARMP(x)<<" metri patrati"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 4:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" hectare = "<<arieHAAR(x)<<" ari"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" hectare = "<<arieHAMP(x)<<" metri patrati"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" hectare = "<<arieHAKMP(x)<<" kilometri partati"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 7:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri patrati = "<<arieMPAR(x)<<" ari"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 8:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri patrati = "<<arieMPHA(x)<<" hectare"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 9:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri patrati = "<<arieKMPMP(x)<<" metri partati"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 10:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri patrati = "<<arieKMPAR(x)<<" ari"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 11:
    {
        system("cls");
        cout<<"\tIntroduceti aria pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri patrati = "<<arieKMPHA(x)<<" hectare"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }
}
c1()
{
    system("cls");
    cout << "\t\t\t\tConvertor Lungime\n"<<endl;
    cout << "1) Metri in centimetri\n";
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
        cout<<"Introduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri = "<<lungMCM(x)<<" centimetri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 2:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri = "<<lungMKM(x)<<" kilometri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 3:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri = "<<lungMIN(x)<<" inches"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }

    case 4:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" metri = "<<lungMFT(x)<<" feets(picioare)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 5:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" centimetri = "<<lungCMM(x)<<" metri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 6:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" centimetri = "<<lungCMKM(x)<<" kilometri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 7:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" centimetri = "<<lungCMIN(x)<<" inches"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 8:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" centimetri = "<<lungCMFT(x)<<" feets(picioare)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 9:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri = "<<lungKMCM(x)<<" centimetri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 10:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri = "<<lungKMM(x)<<" metri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 11:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri = "<<lungKMIN(x)<<" inches"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 12:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" kilometri = "<<lungKMFT(x)<<" feets(picioare)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 13:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" inches = "<<lungINM(x)<<" metri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 14:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" inches = "<<lungINCM(x)<<" centimetri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 15:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" inches = "<<lungINFT(x)<<" feets(picioare)"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 16:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" inches = "<<lungINKM(x)<<" kilometri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 17:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" feets(picioare) = "<<lungFTCM(x)<<" centimetri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    case 18:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" feets(picioare) = "<<lungFTM(x)<<" metri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }

    case 19:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" feets(picioare) = "<<lungFTKM(x)<<" kilometri"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }


    case 20:
    {

        system("cls");
        cout<<"\tIntroduceti lungimea pe care doriti sa o convertiti: "<<endl;
        cin>>x;
        verificare(x);
        cout<<x<<" feets(picioare) = "<<lungFTIN(x)<<" inches"<<endl;
        cout<<"\nPentru a va intoarce la meniul anterior apasati 0 "<<endl;
        cout<<"Pentru a va intoarce la meniul principal apasati 1: "<<endl;
        cin>>x;
        break;
    }
    }
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
    while(op!=0)
    {
mimi:
        meniu();
        cout<<"\n\n\tSelectati optiunea:";
        cin>>op;
        system("cls");
        switch(op)
        {
loop1:
        case 1:
        {
            c1();
            if(x==0) goto loop1;
            if(x==1) goto mimi;
        }

        break;


loop2:
        case 2:
        {
            c2();
            if(x==0) goto loop2;
            if(x==1) goto mimi;
        }
        break;
loop3:
        case 3:
        {
            c3();
            if(x==0) goto loop3;
            if(x==1) goto mimi;
        }//case 3
        break;
loop4:
        case 4:
        {
            c4();
            if(x==0) goto loop4;
            if(x==1) goto mimi;

        }//case4
        break;
loop5:
        case 5:
        {
            c5();
            if(x==0) goto loop5;
            if(x==1) goto mimi;
        }//case5
        break;

loop6:
        case 6:
        {
            c6();
            if(x==0) goto loop6;
            if(x==1) goto mimi;
        }//case6
        break;
loop7:
        case 7:
        {
            c7();
            if(x==0) goto loop7;
            if(x==1) goto mimi;
        }//case7
        break;
loop8:
        case 8:
        {
            c8();
            if(x==0) goto loop8;
            if(x==1) goto mimi;
        }//case8
        break;

loop9:
        case 9:
        {
            c9();
            if(x==0) goto loop9;
            if(x==1) goto mimi;
        }//case9
        break;
loop10:
        case 10:
        {
            c10();
            if(x==0) goto loop10;
            if(x==1) goto mimi;
        }//case10
        break;
loop11:
        case 11:
        {
            c11();
            if(x==0) goto loop11;
            if(x==1) goto mimi;

        }//case11
        break;
        }
    }
    return 0;
}
