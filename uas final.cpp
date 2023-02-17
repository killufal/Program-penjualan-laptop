#include <iostream>
#include <conio.h>

using namespace std;

void menuExit(){
	system("cls");
	cout <<"Sampai jumpa lagi...\n";
    cout <<"\n";
}

void menu0(){
	system("cls");
    int A =1;
	cout << A << ". Maaf anda salah menekan tombol" <<endl;
    getch();
}

void menu(){
	system("cls");
    cout <<"---------------------\n";
    cout <<"      MyLaptop\n";
    cout <<"---------------------\n";
	cout <<"===> MENU UTAMA <====\n";
    cout <<"---------------------";
	cout <<"\n 1. Tentang Aplikasi";
	cout <<"\n 2. Daftar Anggota";
    cout <<"\n 3. Aplikasi Penjualan Laptop";
	cout <<"\n 4. Keluar";
    cout <<"\n";
}

void menu1(){
	system("cls");
    cout <<"================\n";
    cout <<"==  MyLaptop  ==\n";
    cout <<"================\n";
    cout <<"\n";
    cout <<"=> Deskripsi Aplikasi\n";
	cout <<"MyLaptop merupakan sebuah aplikasi yang melayani penjualan laptop.\n";
    cout <<"Dari aplikasi ini memudahkan kasir untuk menghitung penjualan laptop.\n";
    cout <<"Mulai dari pembayaran hingga uang kembalian pelanggan.\n";
    cout <<"Aplikasi ini juga menampilkan berbagai macam merek produk, harga, warna, hingga kondisi laptop.\n";
    cout <<"\n";
    cout <<"Tekan ENTER untuk kembali ke Menu Utama...";

    getch();
}

void Tim5(){
	system("cls");
    struct mahasiswa{
    string nama;
    string kelas;
    string NIM;
};
 
{
    mahasiswa mhs1;
 
    mhs1.nama  ="Muhammad Indra Cahyadi";
    mhs1.NIM   ="C030321129";
    mhs1.kelas ="TI 2 AXIOO";

    mahasiswa mhs2;
    mhs2.nama  ="Naufal Halim";
    mhs2.NIM   ="C030321132";
    mhs2.kelas ="TI 2 AXIOO";

    mahasiswa mhs3;
    mhs3.nama  ="Rizqi Uji Skripsiawan";
    mhs3.NIM   ="C030321135";	
    mhs3.kelas ="TI 2 AXIOO";

    cout<<"DATA MAHASISWA 1"<<endl;
    cout<<"----------------"<<endl;
    cout<<"Nama     : "<<mhs1.nama<<endl;
    cout<<"NIM      : "<<mhs1.NIM<<endl;
    cout<<"Kelas    : "<<mhs1.kelas<< "\n"<<endl;
    cout<<"DATA MAHASISWA 2"<<endl;
    cout<<"----------------"<<endl;
    cout<<"Nama     : "<<mhs2.nama<<endl;
    cout<<"NIM      : "<<mhs2.NIM<<endl;
    cout<<"Kelas    : "<<mhs2.kelas<<"\n"<<endl;
    cout<<"DATA MAHASISWA 3"<<endl;
    cout<<"----------------"<<endl;
    cout<<"Nama     : "<<mhs3.nama<<endl;
    cout<<"NIM      : "<<mhs3.NIM<<endl;
    cout<<"Kelas    : "<<mhs3.kelas<<"\n"<<endl;
    cout<<"Tekan ENTER untuk kembali ke Menu Utama..."<<endl;
}
    getch();
}

int jumlah=1;
void laptop(){
	system("cls");
	cout <<"SELAMAT DATANG\n";
    char kdBarang,kdTipe,merkProduk1[30],merkProduk2[30],merkProduk3[30],warna[30], kondisi[30];
    int hargaSatuan,hargaProduk1,hargaProduk2,hargaProduk3,jumlahBayar,uangKembalian;

    cout<<"===================================================="<<endl;
    cout<<"Aplikasi Penjualan Laptop"<<endl;
    cout<<"===================================================="<<endl<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Daftar Laptop"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"1. Acer"<<endl;
    cout<<"2. Asus"<<endl;
    cout<<"3. Axioo"<<endl;
    cout<<"4. Apple"<<endl;
    cout<<"5. Lenovo"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Input No Pilihan Barang [1-5] : ";cin>>kdBarang;
    cout<<"----------------------------------------------------"<<endl;
    cout<<""<<endl;

  switch(kdBarang)
   {
   case '1' :
   strcpy(merkProduk1,"Acer Nitro 5");
   strcpy(merkProduk2,"Acer Aspire 7");
   strcpy(merkProduk3,"Acer Swift 3");
   hargaProduk1=1500000;
   hargaProduk2=1400000;
   hargaProduk3=1186500;
   break;
   case '2' :
   strcpy(merkProduk1,"Asus ROG Zephyrus");
   strcpy(merkProduk2,"ASUS TUF DASH F15");
   strcpy(merkProduk3,"Asus A516JAO");
   hargaProduk1=3499900;
   hargaProduk2=2470000;
   hargaProduk3=6000000;
   break;
   case '3' :
   strcpy(merkProduk1,"AXIOO Slimbook 14R5");
   strcpy(merkProduk2,"Axioo Mybook 14F");
   strcpy(merkProduk3,"AXIOO Slimbook 13");
   hargaProduk1=5209000;
   hargaProduk2=3730000;
   hargaProduk3=3450000;
   break;
   case '4' :
   strcpy(merkProduk1,"Apple M1 Pro Max 2021");
   strcpy(merkProduk2,"Apple Macbokk Air 2021");
   strcpy(merkProduk3,"Apple M1 Pro 2021");
   hargaProduk1=60000000;
   hargaProduk2=15000000;
   hargaProduk3=40000000;
   break;
   case '5' :
   strcpy(merkProduk1,"Lenovo Legion 5 Pro");
   strcpy(merkProduk2,"Lenovo Thinkpad T470S");
   strcpy(merkProduk3,"Lenovo Ideapad Slim 3");
   hargaProduk1=2000000;
   hargaProduk2=3500000;
   hargaProduk3=4000000;
   break;
   default:
   strcpy(merkProduk1, "Tanda salah kode");
   break;
   }

 cout<<"----------------------------------------------------"<<endl;
 cout<<"Merek dan Harga Laptop"<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"1. "<<merkProduk1<<endl;
 cout<<"   Rp. "<<hargaProduk1<<"\n"<<endl;
 cout<<"2. "<<merkProduk2 <<endl;
 cout<<"   Rp. "<<hargaProduk2<<"\n"<<endl;
 cout<<"3. "<<merkProduk3 <<endl;
 cout<<"   Rp. "<<hargaProduk3<<endl;

 cout<<"----------------------------------------------------"<<endl;
 cout<<"Input Merek Laptop [1-3] : ";cin>>kdTipe;
 cout<<"----------------------------------------------------"<<endl;
 cout<<""<<endl;
  switch(kdTipe)
   {
   case '1' :
   hargaSatuan=hargaProduk1;
   strcpy(warna,"Hitam dan Silver");
   strcpy(kondisi,"Baru");
   break;
   case '2' :
   hargaSatuan=hargaProduk2;
   strcpy(warna,"Hitam dan Silver");
   strcpy(kondisi,"Baru");
   break;
   case '3' :
   hargaSatuan=hargaProduk3;
   strcpy(warna,"Hitam dan Silver");
   strcpy(kondisi,"Baru");
   break;
   default:
   strcpy(merkProduk1, "tanda salah kode");
   break;
   }
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Resi Penjualan Produk"<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Jumlah produk   : "<<jumlah<<endl;
 cout<<"Warna Produk    : "<<warna<<endl;
 cout<<"Kondisi Produk  : "<<kondisi<<endl;
 cout<<"Harga Satuan    : Rp. "<<hargaSatuan<<endl;
 cout<<"===================================================="<<endl;
 cout<<"Total Bayar     : Rp. ";cin>>jumlahBayar;
 uangKembalian=jumlahBayar-hargaSatuan;
 cout<<"Kembalian       : Rp. "<<uangKembalian<<endl;
 cout<<"===================================================="<<endl;
 cout<<"Terima kasih telah berbelanja di Toko Kami"<<endl;
 cout<<""<<endl;
 getch();
}




int main(){
	char key='0';

	do{
	menu();
	cout <<"\nMasukan Pilihan Anda (1/2/3/4): ";
	key = getch();
	if(key=='a'||key=='1'){
		menu1();
	}
	else if(key=='2'){
		Tim5();
	}
	else if(key=='3'){
		laptop();
	}
	else if(key=='4'){
		menuExit();
	}
	else{
		menu0();
	};


	}while(key!='4');
}