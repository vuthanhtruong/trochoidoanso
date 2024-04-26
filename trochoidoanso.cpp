#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    srand(time(NULL));
    int solannhap = 0;
    int x = 1 + rand() % 100;
    while (true) {
        int a;
        cout << "\nNhap gia tri cua a: ";
        cin >> a;
        if (a == x) {
            cout << "So cua nguoi choi nhap dung roi." << endl;
            cout << "Nguoi choi co muon choi tiep khong? Nhap 1 neu muon, nhap 0 neu khong: ";
            int n;
            cin >> n;
            cout << endl;
            if (n == 0) {
                cout << "Tam biet ban nhe." << endl;
                break;
            } else if (n == 1) {
                cout << "Nhap tiep nao: ";
            }
        } else {
            if (a > x) {
                cout << "So nguoi choi nhap sai va a > x." << endl;
            } else {
                cout << "So nguoi choi nhap sai va a < x." << endl;
            }
            solannhap++;
        }

        if (solannhap > 7) {
            cout << "Game over." << endl;
            cout << "Nguoi choi co muon choi tiep khong? Nhap 1 neu muon, nhap 0 neu khong: ";
            int m;
            cin >> m;
            cout << endl;
            if (m == 0) {
                cout << "Tam biet ban nhe." << endl;
                break;
            } else if (m == 1) {
                cout << "Nhap tiep nao: ";
            }
        }
    }
    return 0;
}
