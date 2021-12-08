#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x, int y){
	COORD k = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);
}

int main(){
	login:
	string ulang;
	int pil;
	string username;
	int pasword;
	
	do{
		system("cls");

		gotoxy(15,6);cout<<"=========================================="<<endl;
		gotoxy(15,7);cout<<"             Silahkan Login"<<endl;
		gotoxy(15,8);cout<<"    INSTITUT DIGITAL BISNIS INDONESIA"<<endl;
		gotoxy(15,9);cout<<"=========================================="<<endl;
		gotoxy(15,10);cout<<"Masukan Username \t: "; cin>>username;
		gotoxy(15,11);cout<<"Masukan Pasword \t\t: "; cin>>pasword;
		
		if(username == "dosen"){
			
		}
		else if(pasword == 1){
			
		}
		
		if(username != "dosen"){
			goto login;
		}else if(pasword != 1){
			goto login;
		}
			
	} while(ulang == "y");
	
//bagian menu utama
	menu:
	do{
		system("cls");
		
		gotoxy(15,6);cout<<"====================================================="<<endl;
		gotoxy(15,7);cout<<"                  SELAMAT DATANG"<<endl;
		gotoxy(15,8);cout<<"              Silahkan Pilih Salah Satu"<<endl;
		gotoxy(15,9);cout<<"====================================================="<<endl;
		gotoxy(15,10);cout<<"[1] Data Mahasiswa"<<endl;
		gotoxy(15,11);cout<<"[2] Inputan Nilai"<<endl;
		gotoxy(15,12);cout<<"[3] Data Nilai"<<endl;
		gotoxy(15,13);cout<<"[0] Selesai"<<endl;
		gotoxy(15,14);cout<<"====================================================="<<endl;
		gotoxy(15,16);cout<<"Pilihan : ";cin>>pil;
		gotoxy(15,18);cout<<"====================================================="<<endl;
			
			if(pil == 1){
				goto data_mhs;
			} 
			else if (pil == 2){
				goto inpt_nilai;
			}
			else if (pil == 3){
//				goto data_nilai;
			} 
			else if(pil == 0){
				goto login;
			}
			
			
	} while(ulang == "y");


//bagian menu utama

//bagian data mahasiswa
	data_mhs:
		int nama, alamat;
		int nim;
	do{
		system("cls");
		string nama1 = "Rizki Maulana Yulianto";
		string nama2 = "Maulana Yulianto";
		string nama3 = "Rizki Yulianto";
		
		int nim1 = 210001;
		int nim2 = 210002;
		int nim3 = 210003;
		
		gotoxy(5,2);cout<<"=====================================================\n"<<endl;
		gotoxy(10,3);cout<<"           Daftar Data Mahasiswa"<<endl;
		gotoxy(10,4);cout<<"    INSTITUT DIGITAL BISNIS INDONESIA\n"<<endl;
		gotoxy(5,5);cout<<"====================================================="<<endl;
		gotoxy(5,6);cout<<"Nama \t: "<<nama1<<endl;
		gotoxy(5,7);cout<<"Alamat \t: "<<"Perum Citra Indah. Cemara P.23 No.35"<<endl;
		gotoxy(5,8);cout<<"\t\t  Kec.Jonggol Kab. Bogor Jawa Barat"<<endl;
		gotoxy(5,9);cout<<"Ttl \t: "<<"15 Juli 2001"<<endl;
		gotoxy(5,10);cout<<"No.Telp \t: "<<"xxxxxxxxxxxx"<<endl;
		gotoxy(5,11);cout<<"Nim \t: "<<nim1<<endl;
		gotoxy(5,12);cout<<"====================================================="<<endl;
		
		gotoxy(5,12);cout<<"====================================================="<<endl;
		gotoxy(5,13);cout<<"Nama \t: "<<nama2<<endl;
		gotoxy(5,14);cout<<"Alamat \t: "<<"Ds. Grobokan 2 Rt.001/Rw.002"<<endl;
		gotoxy(5,15);cout<<"\t\t  Kec.Klaten Kab. Klaten Jawa Tengah"<<endl;
		gotoxy(5,16);cout<<"Ttl \t: "<<"02 Januari 2000"<<endl;
		gotoxy(5,17);cout<<"No.Telp \t: "<<"xxxxxxxxxxxx"<<endl;
		gotoxy(5,18);cout<<"Nim \t: "<<nim2<<endl;
		gotoxy(5,19);cout<<"====================================================="<<endl;

		gotoxy(5,19);cout<<"====================================================="<<endl;
		gotoxy(5,20);cout<<"Nama \t: "<<nama3<<endl;
		gotoxy(5,21);cout<<"Alamat \t: "<<"Ds. Lempongsari 2 Rt.003/Rw.010"<<endl;
		gotoxy(5,22);cout<<"\t\t  Kec.Semarang Kab.Semarang Jawa Tengah"<<endl;
		gotoxy(5,23);cout<<"Ttl \t: "<<"25 Juni 2001"<<endl;
		gotoxy(5,24);cout<<"No.Telp \t: "<<"xxxxxxxxxxxx"<<endl;
		gotoxy(5,25);cout<<"Nim \t: "<<nim3<<endl;
		gotoxy(5,26);cout<<"====================================================="<<endl;
		
			
		gotoxy(5,27);cout<<"[0] Kembali"<<endl; 	
		gotoxy(5,29);cout<<"Pilihan : "; cin>>pil; 
		gotoxy(5,31);cout<<"====================================================="<<endl;
		
		if(pil == 0){
			goto menu;
		}
		
	} while(ulang == "y");
	
//inputan nilai mahasiswa
	inpt_nilai:
		string grade;
		int nilai;
	do{
		system("cls");
		gotoxy(5,2);cout<<"=====================================================\n"<<endl;
		gotoxy(10,3);cout<<"           INPUT NILAI MAHASISWA"<<endl;
		gotoxy(10,4);cout<<"    INSTITUT DIGITAL BISNIS INDONESIA\n"<<endl;
		gotoxy(5,5);cout<<"====================================================="<<endl;
		gotoxy(5,7);cout<<"Masukan Nim \t: "; cin>>nim;
		gotoxy(5,8);cout<<"Masukan Nilai \t: "; cin>>nilai;
		
		if(nilai >= 90){
			grade = "A";
		}
		
		else if(nilai >= 80){
			grade = "B+";
		}
		
		else if(nilai >= 70){
			grade = "B";
		}
		
		else if(nilai >= 60){
			grade = "C";
		}
		
		else if(nilai >= 50){
			grade = "D";
		}
		else if(nilai < 50){
			gotoxy(26,12);cout<<"Anda Harus Remidi"<<endl;
		}
		
		gotoxy(5,9);cout<<"====================================================="<<endl;
		
		//nim
		if(nim == 210001){
			gotoxy(5,11);cout<<"Nama Anda \t\t: "<<"Rizki Maulana Yulianto"<<endl;
		}
		else if(nim == 210002){
			gotoxy(5,11);cout<<"Nama Anda \t\t: "<<"Maulana Yulianto"<<endl;
		}
		else if(nim == 210003){
			gotoxy(5,11);cout<<"Nama Anda \t\t: "<<"Rizki Yulianto"<<endl;
		}
		//nim
		
		gotoxy(5,12);cout<<"Grade Anda \t: "<<grade<<endl;
		gotoxy(5,14);cout<<"====================================================="<<endl;
		gotoxy(5,15);cout<<"[0] Kembali"<<endl; 	
		gotoxy(5,17);cout<<"Pilihan : "; cin>>pil; 
		gotoxy(5,19);cout<<"====================================================="<<endl;
		
		if(pil == 0){
			goto menu;
		}
			
	}while(ulang == "y");
		


return 0;
}
