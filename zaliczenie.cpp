#include <iostream>
#include <string> 
#include <windows.h>
#include <random>
#include <time.h>   
using namespace std;
               
class lodowka {
    public:
        int id;
        string produkt;
        int ilosc;
        string ilosc_type;
        void display(){
            cout << "\n|Nazwa: " << produkt << " Ilosc : " << ilosc << ilosc_type;
        };
        
};

class shop {
    public:
    int id;
    string shopprodukt;
    int shopilosc;
    string shopilosc_type;
    void shopdisplay()
    {
        cout << "\n|ID: " << id << " Nazwa: " << shopprodukt << " Ilosc : " << shopilosc << shopilosc_type;
    };
};


int main() {
    int lista_produkt;
    char T_N;
    string shopmarket,lista,cookstart;
    string cookend = "koniec";
    string shopmarketend = "koniec";
    srand(time(NULL));
    lodowka produkt1;
    produkt1.id = 1;
    produkt1.produkt = "cukier";
    produkt1.ilosc =  0;
    produkt1.ilosc_type = "kg";

    lodowka produkt2;
    produkt2.id = 2;
    produkt2.produkt = "Jajka";
    produkt2.ilosc = rand() % 2 + 0;
    produkt2.ilosc_type = "szt";

    lodowka produkt3;
    produkt3.id = 3;
    produkt3.produkt = "maka";
    produkt3.ilosc = rand() % 2 + 0;
    produkt3.ilosc_type = "kg";

    lodowka produkt4;
    produkt4.id = 4;
    produkt4.produkt = "truskawki";
    produkt4.ilosc = rand() % 2 + 0;
    produkt4.ilosc_type = "kg";

    lodowka produkt5;
    produkt5.id = 5;
    produkt5.produkt = "mleko";
    produkt5.ilosc = rand() % 2 + 0;
    produkt5.ilosc_type = "litr";
    ////////////////////////
    shop product1;
    product1.id = 1;
    product1.shopprodukt = "cukier";
    product1.shopilosc = rand() % 6 + 2;
    product1.shopilosc_type = "kg";

    shop product2;
    product2.id = 2;
    product2.shopprodukt = "jajka";
    product2.shopilosc = rand() % 12 + 4;
    product2.shopilosc_type = "szt";

    shop product3;
    product3.id = 3;
    product3.shopprodukt = "maka";
    product3.shopilosc = rand() % 10 + 2;
    product3.shopilosc_type = "kg";

    shop product4;
    product4.id = 4;
    product4.shopprodukt = "truskawki";
    product4.shopilosc = rand() % 5 + 1;
    product4.shopilosc_type = "kg";

    shop product5;
    product5.id = 5;
    product5.shopprodukt = "mleko";
    product5.shopilosc = rand() % 10 +2  ;
    product5.shopilosc_type = "litr/y";
   
  
    system("CLS");
    cout << "|****************************|\n";
    cout << "|Zawartosc lodowki to:       |";
    produkt1.display();cout << "   |";
    produkt2.display();cout << "   |";
    produkt3.display();cout << "     |";
    produkt4.display();cout << "|";
    produkt5.display();cout << "  |";
    cout << "\n|****************************|\n";
    cout << "Brak produktow, idz do sklepu";
 
    shopen:
    char gotoshop;
    cout << "\nIdziesz do sklepu T/N ";
    cin>> gotoshop;
    
    switch (gotoshop)
    {
    case 'T':case 't':
        do {
            system("CLS");
            cout << "\n  Sklep Arkady";
            cout << "\n|***********************************\n";
            cout << "|Zawartosc polek:                   ";
            product1.shopdisplay();
            product2.shopdisplay();
            product3.shopdisplay();
            product4.shopdisplay();
            product5.shopdisplay();
            cout << "\n|***********************************\n";

            int sklep_product, liczba_produktu, a;

            cout << "\nWybierz produkt 1-5 aby go kupic w okreslonych ilosciach: ";
            cin >> sklep_product;
            if (sklep_product == 1) {
                liczba_produktu = 0;
                cout << "Podaj ile chcesz kupic: ";
                cin >> liczba_produktu;
                if (product1.shopilosc == liczba_produktu || product1.shopilosc > liczba_produktu) {
                    produkt1.ilosc = produkt1.ilosc + liczba_produktu;
                    product1.shopilosc = product1.shopilosc - liczba_produktu;
                }
                else {
                    cout << "Brak wystraczajacych ilosci toawaru";
                }
            }
            else if (sklep_product == 2) {
                liczba_produktu = 0;
                cout << "Podaj ile chcesz kupic: ";
                cin >> liczba_produktu;
                if (product2.shopilosc == liczba_produktu || product2.shopilosc > liczba_produktu) {
                    produkt2.ilosc = produkt2.ilosc + liczba_produktu;
                    product2.shopilosc = product2.shopilosc - liczba_produktu;
                }
                else {
                    cout << "Brak wystraczajacych ilosci toawaru";
                }
            }
            else if (sklep_product == 3) {
                liczba_produktu = 0;
                cout << "Podaj ile chcesz kupic: ";
                cin >> liczba_produktu;
                if (product3.shopilosc == liczba_produktu || product3.shopilosc > liczba_produktu) {
                    produkt3.ilosc = produkt3.ilosc + liczba_produktu;
                    product3.shopilosc = product3.shopilosc - liczba_produktu;
                }
                else {
                    cout << "Brak wystraczajacych ilosci toawaru";
                }
            }
            else if (sklep_product == 4) {
                liczba_produktu = 0;
                cout << "Podaj ile chcesz kupic: ";
                cin >> liczba_produktu;
                if (product4.shopilosc == liczba_produktu || product4.shopilosc > liczba_produktu) {
                    produkt4.ilosc = produkt4.ilosc + liczba_produktu;
                    product4.shopilosc = product4.shopilosc - liczba_produktu;
                }
                else {
                    cout << "Brak wystraczajacych ilosci toawaru";
                }
            }
            else if (sklep_product == 5) {
                liczba_produktu = 0;
                cout << "Podaj ile chcesz kupic: ";
                cin >> liczba_produktu;
                if (product5.shopilosc == liczba_produktu || product5.shopilosc > liczba_produktu) {
                    produkt5.ilosc = produkt5.ilosc + liczba_produktu;
                    product5.shopilosc = product5.shopilosc - liczba_produktu;
                }
                else {
                    cout << "Brak wystraczajacych ilosci toawaru";
                }
            }
            else { cout << "Brak towaru z danym ID"; }
            cout << "\nAby zakonczysz zakupy i wrocic do lodowki wpisz 'koniec', aby kontynuowac wpisz wszystko inne: ";
            cin >> shopmarket;
        } while (shopmarket != shopmarketend);

        system("CLS");
        cout << "|****************************|\n";
        cout << "|Zawartosc lodowki to:       |";
        produkt1.display();cout << "   |";
        produkt2.display();cout << "   |";
        produkt3.display();cout << "     |";
        produkt4.display();cout << "|";
        produkt5.display();cout << "  |";
        cout << "\n|****************************|\n";

        cout << "\nAby sprawdzic co mozesz zrobic  z produktow wpisz 'lista': ";
        cin >> lista;
        do {
        h:
            system("CLS");
            cout << "|****************************|\n";
            cout << "|Zawartosc lodowki to:       |";
            produkt1.display();cout << "   |";
            produkt2.display();cout << "   |";
            produkt3.display();cout << "     |";
            produkt4.display();cout << "|";
            produkt5.display();cout << "  |";
            cout << "\n|****************************|\n";
            if (lista == "lista") {
                cout << "Mozesz przygotowac 1.babeczki, 2.ciasto truskawkowe, 3.nalesniki ";
                cout << "\nCo przygotowujemy? (Aby wyjsc '0') ";
                lista_produkt = 0;
                cin >> lista_produkt;

                if (lista_produkt == 0) {
                    return 0;
                }

                if (lista_produkt == 1) {
                    cout << "Aby przygotowac babeczki potrzebna jest - 1kg cukru,3 jajka, 1kg maki, 2 litry mleka";
                    cout << "\nCzy na pewno chcesz przygotowac babeczki T/N ";
                    cin >> T_N;
                    switch (T_N)
                    {
                    case 't':case'T':
                        if (produkt1.ilosc >= 1 && produkt2.ilosc >= 3 && produkt3.ilosc >= 1 && produkt5.ilosc >= 2) {
                            produkt1.ilosc = produkt1.ilosc - 1;
                            produkt2.ilosc = produkt2.ilosc - 3;
                            produkt3.ilosc = produkt3.ilosc - 1;
                            produkt5.ilosc = produkt5.ilosc - 2;
                            cout << "Potrawa zrobiona";
                            Sleep(1000);
                        }
                        else {
                            cout << "Za mala ilosc produktow";
                            cout << "\n\nAby isc do sklepu wpisz 'sklep', aby wyjsc wszystko inne";
                            cin >> cookstart;
                            if (cookstart == "sklep") {
                                goto shopen;
                            }
                            else {
                                cout << "Powrot";
                                goto h;
                            }

                        };

                    case 'n':case'N':
                        goto h;
                    default:
                        cout << "Brak opcji, cofanie";
                        Sleep(1000);
                        goto h;
                    }
                }
                else if (lista_produkt == 2) {
                    cout << "Aby przygotowac Ciasto truskawkowe potrzebna jest - 2kg cukru,5 jajka, 2kg maki, 5kg truskawek, 3 litry mleka";
                    cout << "\nCzy na pewno chcesz przygotowac ciasto truskawkowe T/N ";
                    cin >> T_N;
                    switch (T_N)
                    {
                    case 't':case'T':
                        if (produkt1.ilosc >= 2 && produkt2.ilosc >= 5 && produkt3.ilosc >= 2 && produkt4.ilosc >= 5 && produkt5.ilosc >= 3) {
                            produkt1.ilosc = produkt1.ilosc - 2;//cukier
                            produkt2.ilosc = produkt2.ilosc - 5;//jajka
                            produkt3.ilosc = produkt3.ilosc - 2;//maka
                            produkt4.ilosc = produkt4.ilosc - 5;//truskawki
                            produkt5.ilosc = produkt5.ilosc - 3;//mleko
                            cout << "Potrawa zrobiona";
                            Sleep(1000);
                        }
                        else {
                            cout << "Za mala ilosc produktow";
                            cout << "\n\nAby isc do sklepu wpisz 'sklep', aby wyjsc wszystko inne";
                            cin >> cookstart;
                            if (cookstart == "sklep") {
                                goto shopen;
                            }
                            else {
                                cout << "Powrot";
                                goto h;
                            }
                        };

                    case 'n':case'N':
                        goto h;
                    default:
                        cout << "Brak opcji, cofanie";
                        Sleep(1000);
                        goto h;
                    }
                }
                else if (lista_produkt == 3) {
                    cout << "Aby przygotowac Nalesniki potrzebna jest - 2kg cukru,5 jajka, 2kg maki, 5kg truskawek, 3 litry mleka";
                    cout << "\nCzy na pewno chcesz przygotowac Nalesniki T/N ";
                    cin >> T_N;
                    switch (T_N)
                    {
                    case 't':case'T':
                        if (produkt1.ilosc >= 1 && produkt2.ilosc >= 2 && produkt3.ilosc >= 1 && produkt5.ilosc >= 2) {
                            produkt1.ilosc = produkt1.ilosc - 1;//cukier
                            produkt2.ilosc = produkt2.ilosc - 2;//jajka
                            produkt3.ilosc = produkt3.ilosc - 1;//maka
                            produkt5.ilosc = produkt5.ilosc - 2;//mleko
                            cout << "Potrawa zrobiona";
                            Sleep(1000);
                        }
                        else {
                            cout << "Za mala ilosc produktow";
                            cout << "\n\nAby isc do sklepu wpisz 'sklep', aby wyjsc wszystko inne";
                            cin >> cookstart;
                            if (cookstart == "sklep") {
                                goto shopen;
                            }
                            else {
                                cout << "Powrot";
                                goto h;
                            }
                        };

                    case 'n':case'N':
                        goto h;
                    default:
                        cout << "Brak opcji, cofanie";
                        Sleep(1000);
                        goto h;
                    }
                }
                else { cout << "Nie mozna tego przygotowac"; }

            }




            cout << "\n\nAby isc do sklepu wpisz 'sklep'";
            cout << "\nAby skonczyc przegladanie przepisow wpisz 'koniec', aby kontynuowac wpisz wszystko inne: ";
            cin >> cookstart;
            if (cookstart == "sklep") {
                goto shopen;
            }
        } while (cookstart != cookend);


        break;


    case 'N':case 'n':

        cout << " 1.Wracasz do lodowki czy 2.wychodzisz?\n";
        int o;cin >> o;
        switch (o)
        {
        case 1:
            Sleep(1000);
            main();

        case 2:
            cout << "Opuszczanie programu !";
            Sleep(1000);
            system("CLS");
            return 0;

        }

    default:
        cout << "Wybrano nie poprawna opcje";
        return main();
    }
    }
