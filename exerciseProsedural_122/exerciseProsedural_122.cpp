#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return(a + b) / 2;
}

string status(double c) {
    if (c >= 70)
        return "Diterima";
    else
        return "Ditolak";
}

string status2(double rata, double nil) {
    if (rata >= 70 || nil > 80)
        return "Diterima";
    else
        return "Ditolak";
}


int main()
{
    char nama[50];
    cout << "Masukan Nama :";
    cin >> nama;
    cout << endl;


    double nilM, nilB;
    cout << "Masukan nilai Matematika :";
    cin >> nilM;
    cout << "Masukan nilai Bahasa Inggris :";
    cin >> nilB;
    cout << "Nama Kandidat : " << nama << endl;
    cout << "\nstatus kelulusan =" << status(rerata(nilM, nilB));
    cout << "\nstatus kelulusa ke 2 =" << status(rerata(nilM, nilB));
    return 0; 
}


