#include <iostream>

using namespace std;
int main() {
    string PESEL;
    int rok = 0, dziesiatki = 0, jednosci = 0, dzien1 = 0, dzien2 = 0, dziennarodzin = 0, x = 0, kontrolna = 0;
    cout << "podaj numer PESEL: ";
    cin >> PESEL;
    system("cls");
    if (PESEL.size() == 11) {
        dziesiatki = (PESEL[0] - 48) * 10;
        jednosci = PESEL[1] - 48;
        if (PESEL[2] == '8' || PESEL[2] == '9') {
            rok = 1800 + dziesiatki + jednosci;
        } else if (PESEL[2] == '0' || PESEL[2] == '1') {
            rok = 1900 + dziesiatki + jednosci;
        } else if (PESEL[2] == '2' || PESEL[2] == '3') {
            rok = 2000 + dziesiatki + jednosci;
        } else if (PESEL[2] == '4' || PESEL[2] == '5') {
            rok = 2100 + dziesiatki + jednosci;
        }
        dzien1 = PESEL[4];
        dzien1 = (dzien1 - 48) * 10;
        dzien2 = PESEL[5] - 48;
        dziennarodzin = dzien1 + dzien2;
        if (dziennarodzin > 31) {
            system("cls");
            cout << "ZLY PESEL, PAMIETAJ, ZE JEST TYLKO 31 DNI W MIESIACU" << endl;
            return 0;
        } else {
            if ((PESEL[2] == '8' && PESEL[3] == '2') || (PESEL[2] == '0' && PESEL[3] == '2') || (PESEL[2] == '2' && PESEL[3] == '2') || (PESEL[2] == '4' && PESEL[3] == '2')) {
                if (dziennarodzin > 29) {
                    system("cls");
                    cout << "ZLY PESEL, PAMIETAJ, ZE TO LUTY..." << endl;
                    return 0;
                }
                if (dziennarodzin == 29) {
                    if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) {
                        if (PESEL[2] == '8') {
                            cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".02.18" << PESEL[0] << PESEL[1] << "r." << endl;
                            x = 1;
                        } else if (PESEL[2] == '0') {
                            cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".02.19" << PESEL[0] << PESEL[1] << "r." << endl;
                            x = 1;
                        } else if (PESEL[2] == '2') {
                            cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".02.20" << PESEL[0] << PESEL[1] << "r." << endl;
                            x = 1;
                        } else if (PESEL[2] == '4') {
                            cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".02.21" << PESEL[0] << PESEL[1] << "r." << endl;
                            x = 1;
                        }
                    } else {
                        system("cls");

                        cout << "ZLY PESEL, PODALES 29, A TO NIE ROK PRZESTEPNY..." << endl;
                        return 0;
                    }
                }
            }
            int k[PESEL.size()];
            for (int i = 0; i < PESEL.size(); ++i) {
                k[i] = PESEL[i] - 48;
            }
            kontrolna = ((k[0] * 1) % 10 + (k[1] * 3) % 10 + (k[2] * 7) % 10 + (k[3] * 9) % 10 + (k[4] * 1) % 10 + (k[5] * 3) % 10 + (k[6] * 7) % 10 + (k[7] * 9) % 10 + (k[8] * 1) % 10 + (k[9] * 3) % 10) % 10;
            if (kontrolna == 10 - (PESEL[10] - 48)) {
                cout << "Poprawna liczba kontrolna" << endl;
            } else {
                system("cls");
                cout << "ZLY PESEL, NIEPOPRAWNA LICZBA KONTROLNA" << endl;
                return 0;
            }
            if (x == 0) {
                if (PESEL[2] == '8' && PESEL[3] == '1') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".01.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '8' && PESEL[3] == '2') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".02.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '8' && PESEL[3] == '3') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".03.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '8' && PESEL[3] == '4') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".04.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '8' && PESEL[3] == '5') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".05.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '8' && PESEL[3] == '6') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".06.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '8' && PESEL[3] == '7') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".07.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '8' && PESEL[3] == '8') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".08.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '8' && PESEL[3] == '9') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".09.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '9' && PESEL[3] == '0') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".10.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '9' && PESEL[3] == '1') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".11.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '9' && PESEL[3] == '2') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".12.18" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '1') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".01.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '2') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".02.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '3') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".03.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '4') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".04.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '5') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".05.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '6') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".06.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '7') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".07.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '8') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".08.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '0' && PESEL[3] == '9') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".09.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '1' && PESEL[3] == '0') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".10.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '1' && PESEL[3] == '1') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".11.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '1' && PESEL[3] == '2') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".12.19" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '1') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".01.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '2') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".02.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '3') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".03.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '4') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".04.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '5') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".05.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '6') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".06.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '7') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".07.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '8') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".08.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '2' && PESEL[3] == '9') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".09.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '3' && PESEL[3] == '0') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".10.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '3' && PESEL[3] == '1') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".11.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '3' && PESEL[3] == '2') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".12.20" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '1') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".01.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '2') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".02.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '3') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".03.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '4') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".04.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '5') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".05.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '6') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".06.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '7') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".07.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '8') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".08.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '4' && PESEL[3] == '9') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".09.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '5' && PESEL[3] == '0') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".10.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '5' && PESEL[3] == '1') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".11.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else if (PESEL[2] == '5' && PESEL[3] == '2') {
                    cout << "Data urodzin: " << PESEL[4] << PESEL[5] << ".12.21" << PESEL[0] << PESEL[1] << "r." << endl;
                } else {
                    system("cls");
                    cout << "ZLY PESEL - ZLY MIESIAC" << endl;
                    return 0;
                }

            }
        }
        if (PESEL[9] % 2 == 0) {
            cout << "Plec: Kobieta" << endl;
        } else {
            cout << "Plec: Mezczyzna" << endl;
        }
    } else {
        cout << "ZLY PESEL, NIE WPISALES 11 CYFR" << endl;
    }
    return 0;
}
