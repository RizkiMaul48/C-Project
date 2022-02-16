//progam Prototype kasir menggunakan array 

#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

void gotoxy(int x, int y){
	COORD k = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);
}

	int n_makanan[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
	int n_minuman[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	string h_makanan[9] = {"Rp.1000", "Rp.6.000", "Rp.6.000", "Rp.10.000", "Rp.3.000", "Rp.12.000", "Rp.12.000", "Rp.10.000", "Rp.15.000"};
	string makanan[9] = {"Nasi", "Mie Goreng", "Mie Rebus", "Nasi Goreng", "Sayur Asem", "Sop Ayam", "Sop Kambing", "Sop Ceker", "Ikan Goreng"};
	string minuman[8] = {"Air Putih", "Es Teh Manis", "Teh Hangat", "Kopi Hitam", "Kopi Susu", "Jus Alpukat", "Jus Jeruk", "Susu"};
	string h_minuman[8] = {"Rp.1000", "Rp.2.000", "Rp.1.000", "Rp.3.000", "Rp.4.000", "Rp.5.000", "Rp.5.000", "Rp.4.000"};

	

int menu(){
	int input;
	
	system("cls");
	gotoxy(10,2);cout<<"+====================================+"<<endl;
	gotoxy(10,3);cout<<"|            Progam Kasir            |"<<endl;
	gotoxy(10,4);cout<<"|     RM.Makan Warteg Sejahtera      |"<<endl;
	gotoxy(10,5);cout<<"+====================================+"<<endl;
	gotoxy(10,6);cout<<"| [1] Daftar Menu                    |"<<endl;
	gotoxy(10,7);cout<<"| [2] Pesan                          |"<<endl;
	gotoxy(10,8);cout<<"| [0] Selesai                        |"<<endl;
	gotoxy(10,9);cout<<"+====================================+"<<endl;
	gotoxy(10,10);cout<<"| Pilihan :                          |"<<endl;
//		    12345678901234567890123456789012345678901234567890
	gotoxy(10,11);cout<<"+====================================+"<<endl;	
	gotoxy(22,10);cout<<""; cin>>input;
	return input;
	
}

void d_menu(){
	
	system("cls");
	gotoxy(10,1);cout<<"RM.Makan Sejahtera"<<endl;
	gotoxy(10,2);cout<<"JL.Cinderamata Ruko 2/3. Jakarta Timur"<<endl;
	gotoxy(10,4);cout<<"+=====================================+"<<endl;
	gotoxy(10,5);cout<<"|             Daftar Menu             |"<<endl; 
	gotoxy(10,6);cout<<"|               Makanan               |"<<endl;
	gotoxy(10,7);cout<<"+=====================================+"<<endl;
	gotoxy(10,8);cout<<"| No  Nama               Harga        |"<<endl;
//						 1234567890123456789012345678901234567890
	gotoxy(10,9);cout<<"+=====================================+"<<endl;
	gotoxy(10,19);cout<<"+=====================================+"<<endl;
	for(int a = 0; a < 9; a++){
		gotoxy(10,10+a);cout<<"|"<<endl;
		gotoxy(12,10+a);cout<<n_makanan[a];
		gotoxy(16,10+a);cout<<makanan[a];
		gotoxy(35,10+a);cout<<h_makanan[a];
		gotoxy(48,10+a);cout<<"|"<<endl;
	}
	
	
	gotoxy(60,4);cout<<"+=====================================+"<<endl;
	gotoxy(60,5);cout<<"|             Daftar Menu             |"<<endl; 
	gotoxy(60,6);cout<<"|               Minuman               |"<<endl;
	gotoxy(60,7);cout<<"+=====================================+"<<endl;
	gotoxy(60,8);cout<<"| No  Nama               Harga        |"<<endl;
//						 1234567890123456789012345678901234567890
	gotoxy(60,9);cout<<"+=====================================+"<<endl;
	gotoxy(60,18);cout<<"+=====================================+"<<endl;
	for(int b = 0; b < 8; b++){
		gotoxy(60,10+b);cout<<"|"<<endl;
		gotoxy(62,10+b);cout<<n_minuman[b];
		gotoxy(66,10+b);cout<<minuman[b];
		gotoxy(85,10+b);cout<<h_minuman[b];
		gotoxy(98,10+b);cout<<"|"<<endl;
	}
	
}

void m_pesan(){
	int makanan1, nasi, m_goreng, m_rebus, n_goreng, s_asem, s_ayam, s_kambing, s_ceker, i_goreng;
	int jml_makanan, jml_nasi, jml_m_goreng, jml_m_rebus, jml_n_goreng, jml_s_asem, jml_s_ayam, jml_s_kambing, jml_s_ceker, jml_i_goreng;
	
	int minuman1, a_putih, e_tmanis, t_hangat, k_hitam, k_susu, j_alpukat, j_jeruk, susu;
	int jml_minuman1, jml_a_putih, jml_e_tmanis, jml_t_hangat, jml_k_hitam, jml_k_susu, jml_j_alpukat, jml_j_jeruk, jml_susu;
	int diskon, total;
	
	nasi = 1000;
	m_goreng = 6000;
    m_rebus = 6000;
	n_goreng = 10000;
	s_asem = 3000;
	s_ayam =12000;
	s_kambing = 12000;
	s_ceker = 10000;
	i_goreng = 15000;

	a_putih = 1000;
	e_tmanis = 2000;
	t_hangat = 1000;
	k_hitam = 3000;
	k_susu = 4000;
	j_alpukat = 5000;
	j_jeruk = 5000;
	susu = 4000;
	
	system("cls");
	
//	d_menu();
	
	gotoxy(10,2);cout<<"+=====================================+"<<endl;
	gotoxy(10,3);cout<<"|         Menu Pesanan Makan          |"<<endl;
	gotoxy(10,4);cout<<"+=====================================+"<<endl;
	gotoxy(10,5);cout<<"| No  Nama          Jumlah Pesanan    |"<<endl;
//						 1234567890123456789012345678901234567890
	gotoxy(10,6);cout<<"+=====================================+"<<endl;
	gotoxy(10,16);cout<<"+=====================================+"<<endl;
		
	for(int c = 0; c < 9; c++){
		gotoxy(10,7+c);cout<<"|"<<endl;
		gotoxy(30,7+c);cout<<":"<<endl;
		gotoxy(12,7+c);cout<<n_makanan[c];
		gotoxy(16,7+c);cout<<makanan[c];
		gotoxy(48,7+c);cout<<"|"<<endl;
	}
	
	gotoxy(32,7);cout<<""; cin>>jml_nasi;
	gotoxy(32,8);cout<<""; cin>>jml_m_goreng;
	gotoxy(32,9);cout<<""; cin>>jml_m_rebus;
	gotoxy(32,10);cout<<""; cin>>jml_n_goreng;
	gotoxy(32,11);cout<<""; cin>>jml_s_asem;
	gotoxy(32,12);cout<<""; cin>>jml_s_ayam;
	gotoxy(32,13);cout<<""; cin>>jml_s_kambing;
	gotoxy(32,14);cout<<""; cin>>jml_s_ceker;
	gotoxy(32,15);cout<<""; cin>>jml_i_goreng;
	
	
	gotoxy(50,2);cout<<"+=======================================+"<<endl;
	gotoxy(50,3);cout<<"|         Menu Pesanan Minuman          |"<<endl;
	gotoxy(50,4);cout<<"+=======================================+"<<endl;
	gotoxy(50,5);cout<<"| No  Nama          Jumlah Pesanan      |"<<endl;
//						 1234567890123456789012345678901234567890
	gotoxy(50,6);cout<<"+=======================================+"<<endl;
	gotoxy(50,15);cout<<"+=======================================+"<<endl;
		
	for(int d = 0; d < 8; d++){
		gotoxy(50,7+d);cout<<"|"<<endl;
		gotoxy(70,7+d);cout<<":"<<endl;
		gotoxy(52,7+d);cout<<n_minuman[d];
		gotoxy(57,7+d);cout<<minuman[d];
		gotoxy(90,7+d);cout<<"|"<<endl;
	}

	gotoxy(72,7);cout<<""; cin>>jml_a_putih;
	gotoxy(72,8);cout<<""; cin>>jml_e_tmanis;
	gotoxy(72,9);cout<<""; cin>>jml_t_hangat;
	gotoxy(72,10);cout<<""; cin>>jml_k_hitam;
	gotoxy(72,11);cout<<""; cin>>jml_k_susu;
	gotoxy(72,12);cout<<""; cin>>jml_j_alpukat;
	gotoxy(72,13);cout<<""; cin>>jml_j_jeruk;
	gotoxy(72,14);cout<<""; cin>>jml_susu;
	
	total = (nasi * jml_nasi) + (m_goreng * jml_m_goreng) + (m_rebus * jml_m_rebus) + (n_goreng * jml_n_goreng) + (s_asem * jml_s_asem)
			+ (s_ayam * jml_s_ayam) + (s_kambing * jml_s_kambing) + (s_ceker * jml_s_ceker) + (i_goreng * jml_i_goreng) +
			(a_putih * jml_a_putih) + (e_tmanis * jml_e_tmanis) + (t_hangat * jml_t_hangat) + (k_hitam * jml_k_hitam) +
			(k_susu * jml_k_susu) + (j_alpukat * jml_j_alpukat) + (j_jeruk * jml_j_jeruk) + (susu * jml_susu);
			
	gotoxy(10,20);cout<<"Total Belanja anda adalah : "<<total;
	
	if(total > 50000){
		gotoxy(10,21);cout<<"Anda Mendapatkan Diskon   : "<<diskon<<endl;
		if(diskon = total * 20/100){
			gotoxy(10,22);cout<<"Anda mendapatkan Diskon 20%"<<endl;
			
			gotoxy(10,23);cout<<"+=======================================+"<<endl;
			gotoxy(10,24);cout<<"| Total :                               |"<<endl;
//								 1234567890123456789012345678901234567890
			gotoxy(10,25);cout<<"+=======================================+"<<endl;
			
			gotoxy(21,24);cout<<""<<total - diskon<<endl;
		}
		
	}

}

int main(){
	
//bagian menu Utama
utama:
	system("cls");
	int lanjutkan = menu();
	
	int pilihan;
	
	switch(lanjutkan){
		case 1:
			goto dftr_menu;
			break;
			
		case 2:
			goto order;
			break;
			
		case 0:
			exit(0);
			
		default:
			gotoxy(10,12);system("pause");
	}
	
//bagian menu Utama

//bagian daftar Menu
dftr_menu:
	system("cls");
	d_menu();	
	
	gotoxy(10,20);cout<<"+=====================================+"<<endl;
	gotoxy(10,21);cout<<"| [0] Kembali                         |"<<endl;
	gotoxy(10,22);cout<<"| Pilihan :                           |"<<endl;
//						  123456789012345678901234567890
	gotoxy(10,23);cout<<"+=====================================+"<<endl;
	gotoxy(22,22);cout<<""; cin>>pilihan;
	
	if(pilihan == 0){
		goto utama;
	}
	
	if (pilihan > 0){
		goto dftr_menu;
	}
	
//bagian daftar Menu
	
//bagian menu Pesan
order:
	
	m_pesan();
	
	gotoxy(10,26);cout<<"+=====================================+"<<endl;
	gotoxy(10,27);cout<<"| [0] Kembali                         |"<<endl;
	gotoxy(10,28);cout<<"| Pilihan :                           |"<<endl;
//						  123456789012345678901234567890
	gotoxy(10,29);cout<<"+=====================================+"<<endl;
	gotoxy(22,28);cout<<""; cin>>pilihan;
	
	if(pilihan == 0){
		goto utama;
	}
	
	if (pilihan > 0){
		goto order;
	}
	
	
//bagian menu Pesan	
	

	cin.get();
	return 0;
}
