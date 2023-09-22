#include <iostream>

using namespace std;

int main() {
  	  int month, date;
  	  cout << "Masukkan tanggal lahir : ";
 	  cin >> date;
	  cout << "Masukkan bulan lahir : ";
 	  cin >> month;
 	  
if ((month==1 && date>=20)||(month==2 && date<=18)){
        cout << "Zodiakmu adalah Aquarius";
  }  else if ((month==2 && date>=19)||(month==3 && date<=20)){
        cout << "Zodiakmu adalah Pisces";  
  }  else if ((month==3 && date>=21)||(month==4 && date<=19)){
        cout << "Zodiakmu adalah Aries";
  }  else if ((month==4 && date>=20)||(month==5 && date<=20)){
        cout << "Zodiakmu adalah Taurus";
  }  else if ((month==5 && date>=21)||(month==6 && date<=20)){
        cout << "Zodiakmu adalah Gemini";
  }  else if ((month==6 && date>=21)||(month==7 && date<=22)){
        cout << "Zodiakmu adalah Cancer";
  }  else if ((month==7 && date>=23)||(month==8 && date<=22)){
        cout << "Zodiakmu adalah Leo";
  }  else if ((month==8 && date>=23)||(month==9 && date<=22)){
        cout << "Zodiakmu adalah Virgo";
  }  else if ((month==9 && date>=23)||(month==10 && date<=22)){
        cout << "Zodiakmu adalah Libra";
  }  else if ((month==10 && date>=23)||(month==11 && date<=21)){
        cout << "Zodiakmu adalah Scorpio";
  }  else if ((month==11 && date>=22)||(month==12 && date<=21)){
        cout << "Zodiakmu adalah Sagittarius";
  }  else if ((month==12 && date>=22)||(month==1 && date<=19)){
        cout << "Zodiakmu  adalah Capricorn";
  }  else{
        cout << "Kamu memasukkan angka yang tidak relevan dengan syarat bulan dan tanggal"<<endl;
  }
  
    return 0;
}
