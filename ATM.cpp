#include<iostream>
#include<windows.h>
using namespace std;
	void gotoxy (int x, int y){
		COORD k = {x,y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);
	}

int main(){
//bagian menu utama
menu:
	string ulang;
	int pin;
	int pil;
	
	do{
	system("cls");
		gotoxy(15,2);cout<<"=================================="<<endl;
		gotoxy(14,3);cout<<"       ATM BERSAMA SEJAHTERA      "<<endl;
		gotoxy(15,4);cout<<"=================================="<<endl;
		gotoxy(15,6);cout<<"Masukan Pin Anda \t: ";
		cin>>pin;
		gotoxy(15,8);cout<<"=================================="<<endl;

		if(pin == 1){
			goto menu2;
		} else if(pin != 1){
			gotoxy(15,9);cout<<"Pin anda salah"<<endl;	
		}
		
		gotoxy(15,10);cout<<"=================================="<<endl;
		gotoxy(15,11);cout<<"Masukan Ulang ( y / n ) : ";
		cin>>ulang;

		if(ulang == "n"){
			exit(0);
		}
	} while(ulang == "y"||"Y");
	
//bagian menu2
menu2:
	int infdata, infsaldo, penarikan_uang;
	
	do{
	system("cls");
		gotoxy(15,2);cout<<"=================================="<<endl;
		gotoxy(14,3);cout<<"        SILAHKAN PILIH MENU        "<<endl;
		gotoxy(15,4);cout<<"=================================="<<endl;
		gotoxy(15,6);cout<<"[1] Informasi Data Anda"<<endl;
		gotoxy(15,8);cout<<"[2] Informasi Saldo"<<endl;
		gotoxy(15,10);cout<<"[3] Penarikan Uang"<<endl;
		gotoxy(15,12);cout<<"[4] Daftar Transaksi"<<endl;
		gotoxy(15,14);cout<<"[5] Transfer"<<endl;
		gotoxy(15,16);cout<<"[0] Selesai"<<endl;
		gotoxy(15,18);cout<<"=================================="<<endl;
		gotoxy(15,20);cout<<"Pilihan : "; 
		cin>>pil;
		gotoxy(15,21);cout<<"=================================="<<endl;
		
		//awal pilihan menu
		if(pil == 1){
			goto infdata;
		} 
		else if(pil == 2){
			goto infsaldo;
		}
		else if(pil == 3){
			goto penarikan_uang;
		}
		else if(pil == 4){
			goto daftar_transaksi;
		}
		else if(pil == 5){
			goto transfer;
		}
		
		if(pil == 0){
			goto menu;
		}
		//akhir pilihan menu
		
	} while(ulang == "y"||"Y");

//informasi data nasabah
infdata:
	do{
	system("cls");
		gotoxy(15,2);cout<<"=============================================="<<endl;
		gotoxy(21,3);cout<<"      INFORMASI DATA PRIBADI      "<<endl;
		gotoxy(15,4);cout<<"=============================================="<<endl;
		gotoxy(15,5);cout<<"No Rek      : "<<"104"<<endl;
		gotoxy(15,7);cout<<"Nama        : "<<"Rizki Maulana Yulianto"<<endl;
		//awal alamat
		gotoxy(15,9);cout<<"Alamat      : "<<"Perum Citra Indah"<<endl;
		gotoxy(29,10);cout<<"Bukit Palem P.23 No.35"<<endl;
		gotoxy(29,11);cout<<"Kec. Jonggol Kab. Bogor. Jawa Barat"<<endl;
		//akhir alamat
		gotoxy(15,13);cout<<"Ttl         : "<<"Bogor, 15 Juli 2001"<<endl;
		gotoxy(15,15);cout<<"NIK         : "<<"000111223330"<<endl;
		gotoxy(15,17);cout<<"Pekerjaan   : "<<"Mahasiswa"<<endl;
		gotoxy(15,19);cout<<"Status      : "<<"Belum Menikah"<<endl;
		//barisbaru
		gotoxy(15,22);cout<<"---------------------------------------------"<<endl;
		gotoxy(15,23);cout<<"|Nama Orang Tua                             |"<<endl;
		gotoxy(15,24);cout<<"---------------------------------------------"<<endl;
		gotoxy(15,25);cout<<"Ayah        : "<<"xxxxxx"<<endl;	
		gotoxy(15,27);cout<<"Pekerjaan   : "<<"Karyawan"<<endl;
		gotoxy(15,29);cout<<"Ibu         : "<<"xxxxxx"<<endl;
		gotoxy(15,31);cout<<"Pekerjaan   : "<<"Ibu Rumah Tangga"<<endl;
		//barisbaru
		gotoxy(15,34);cout<<"---------------------------------------------"<<endl;
		gotoxy(15,35);cout<<"|Nama Wali                                  |"<<endl;
		gotoxy(15,36);cout<<"---------------------------------------------"<<endl;
		gotoxy(15,37);cout<<"Ayah        : "<<"xxxxxx"<<endl;	
		gotoxy(15,39);cout<<"Pekerjaan   : "<<"xxxxxx"<<endl;
		gotoxy(15,41);cout<<"Ibu         : "<<"xxxxxx"<<endl;
		gotoxy(15,43);cout<<"Pekerjaan   : "<<"xxxxxx"<<endl;	
		gotoxy(15,45);cout<<"=============================================="<<endl;
		gotoxy(15,46);cout<<"[0] Kembali"<<endl;
		gotoxy(15,48);cout<<"Pilihan     : "; 
		cin>>pil;
		gotoxy(15,48);cout<<"=============================================="<<endl;
		
		if(pil == 0){
			goto menu2;
		} else if(pil >= 0){
			goto infdata;
		}
		
	} while(ulang == "y"||"Y");

//informasi saldo	
infsaldo:
	int jml_saldo, jml_penarikan, saldo, j_transfer;
	int saldo2;
	saldo = 200;
	
	do{	
	system("cls");
		gotoxy(15,2);cout<<"=============================================="<<endl;
		gotoxy(15,3);cout<<"               INFORMASI SALDO                "<<endl;
		gotoxy(15,4);cout<<"=============================================="<<endl;
		saldo2 = saldo - jml_penarikan;
		gotoxy(15,6);cout<<"Saldo Anda   : "<<saldo2<<endl;				
		gotoxy(15,8);cout<<"=============================================="<<endl;
		gotoxy(15,9);cout<<"[0] Kembali"<<endl;
		gotoxy(15,11);cout<<"Pilihan     : "; 
		cin>>pil;
		gotoxy(15,13);cout<<"=============================================="<<endl;
		
		if(pil == 0){
			goto menu2;
		} else if(pil >= 0){
			goto infsaldo;
		}
	
	}while(ulang == "y"||"Y");
	
//penarikan uang
penarikan_uang:

	do{
	system("cls");
		gotoxy(15,2);cout<<"=============================================="<<endl;
		gotoxy(15,3);cout<<"                PENARIKAN UANG                "<<endl;
		gotoxy(15,4);cout<<"=============================================="<<endl;
		gotoxy(15,5);cout<<"Jumlah         : "; cin>>jml_penarikan;
		gotoxy(15,7);cout<<"Saldo Sekarang : "<<saldo - jml_penarikan<<endl;
		gotoxy(15,8);cout<<"=============================================="<<endl;
		gotoxy(15,9);cout<<"[0] Kembali"<<endl;
		gotoxy(15,11);cout<<"Pilihan       : "; 
		cin>>pil;
		gotoxy(15,13);cout<<"=============================================="<<endl;
		
		if(pil == 0){
			goto menu2;
		}
		
	} while(ulang == "y"||"Y");
	
//daftar Transaksi
daftar_transaksi:
	int nm_nasabah, tanggal, norek;
	
	do{
	system("cls");
		gotoxy(2,2);cout<<"============================================================================"<<endl;
		gotoxy(2,3);cout<<"|                              DAFTAR TRANSAKSI                             |"<<endl;
		gotoxy(2,4);cout<<"============================================================================"<<endl;
		gotoxy(2,5);cout<<"| No |      Nama        |      Jumlah       |    No.Rek    |     Tanggal    |"<<endl;
		gotoxy(2,6);cout<<"| 1  | Rizki Maul       | 100               | 101          |   20/11/2021   |"<<endl;
		gotoxy(2,7);cout<<"| 2  | Maulana48        | 100               | 102          |   20/11/2021   |"<<endl;
		gotoxy(2,8);cout<<"| 3  | Yuliant0         | 100               | 102          |   20/11/2021   |"<<endl;
		gotoxy(2,9);cout<<"| 4  | Rizki Maulana. Y | 100               | 102          |   20/11/2021   |"<<endl;
		gotoxy(2,11);cout<<"==========================================================================="<<endl;
		gotoxy(2,12);cout<<"[0] Kembali"<<endl;
		gotoxy(2,14);cout<<"Pilihan       : "; 
		cin>>pil;
		gotoxy(2,15);cout<<"=============================================="<<endl;
		
		if(pil == 0){
			goto menu2;
		}
		
	} while(ulang == "y"||"Y");
	
	
//Transfer
transfer:
	int nama_penerima;
	
	do{
	system("cls");
	
		gotoxy(15,2);cout<<"=============================================="<<endl;
		gotoxy(15,3);cout<<"                   TRANSFER                "<<endl;
		gotoxy(15,4);cout<<"=============================================="<<endl;	
		gotoxy(15,5);cout<<"Jumlah \t\t: "; cin>>j_transfer;
		gotoxy(15,7);cout<<"No. Rekening \t: "; cin>>norek;
	
//bagian awal nama penerima
	
		if(norek == 101){
		gotoxy(15,9);cout<<"Nama Penerima \t: "<<"Rizki Maul"<<endl;
		}
		else if(norek == 102){
		gotoxy(15,9);cout<<"Nama Penerima \t: "<<"Maulana48"<<endl;
		}
		else if(norek == 103){
			gotoxy(15,9);cout<<"Nama Penerima \t: "<<"Yulianto"<<endl;
		}
		else if(norek == 104){
			gotoxy(15,9);cout<<"Nama Penerima \t: "<<"Rizki Maulana Yulianto"<<endl;
		}
//bagian akhir nama penerima

		gotoxy(15,11);cout<<"=============================================="<<endl;
		gotoxy(15,13);cout<<"[0] Kembali"<<endl;
		gotoxy(15,15);cout<<"Pilihan       : "; 
		cin>>pil;
		gotoxy(15,17);cout<<"=============================================="<<endl;
	
		if(pil == 0){
			goto menu2;
		}
	
	} while(ulang == "y"||"Y");
	
	
	
	
	
	
return 0;
	
}
