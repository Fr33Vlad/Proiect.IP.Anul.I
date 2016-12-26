#include <iostream>
#include <iomanip>
using namespace std;
//temperatura

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
//lungime
double lungMFT( double M){return M/0.3048;}
double lungMIN(double M){return M/0.0254;}
double lungMKM(double M){return M/1000.0;}
double lungMCM( double M){return M*100;}
double lungCMM(long CM){return CM/100.00;}
double lungCMFT(long CM){return CM* 0.032808;}
double lungCMKM(long CM){return CM/100000;}
double lungCMIN(long CM){return CM* 0.39370;}
double lungFTM(long FT){return FT/3.2808;}
double lungFTCM(long FT){return FT/0.032808;}
double lungFTIN(long FT){return FT*12.000;}
double lungFTKM(long FT){return FT/3280.8;}
double lungINM(long IN){return IN/39.370;}
double lungINCM(long IN){return IN/0.39370;}
double lungINFT(long IN){return IN*0.083333;}
double lungINKM(long IN){return IN/39370;}
double lungKMM(long KM){return KM/0.001;}
double lungKMCM(long KM){return KM/0.00001;}
double lungKMFT(long KM){return KM*3280.8;}
double lungKMIN(long KM){return KM* 39370;}
// arie
double arieARHA(double AR){return AR*0.01;}
double arieARMP(double AR){return AR*100;}
double arieARKMP(double AR){return AR*0.0001;}

double arieHAAR(double HA){return HA*100;}
double arieHAMP(double HA){return HA/0.0001;}
double arieHAKMP(double HA){return HA/100.00;}
double arieMPAR(double MP){return MP*0.01;}
double arieMPHA(double MP){return MP/10000;}
double arieKMPAR(double KMP){return KMP*10000;}
double arieKMPHA(double KMP){return KMP/0.010000;}
double arieKMPMP(double KMP){return KMP*1000000;}


int main()
{

    cout<<"ari-hectare "<<arieARHA(15)<<endl;
    cout<<" ari -kmp "<<arieARKMP(15)<<endl;
    cout<<" ari-mp "<<arieARMP(15)<<endl;
    cout<<"ha-ari "<<arieHAAR(15)<<endl;
    cout<<"ha-kmp "<<arieHAKMP(15)<<endl;
    cout<<"ha-mp "<<arieHAMP(15)<<endl;
    cout<<"mp-ari "<<arieMPAR(15)<<endl;
    cout<<"mp-ha "<<arieMPHA(15)<<endl;
    cout<<"kmp-ar "<<arieKMPAR(15)<<endl;
    cout<<"kmp-ha "<<arieKMPHA(15)<<endl;
    cout<<"kmp-mp "<<arieKMPMP(15)<<endl;

    return 0;
}
