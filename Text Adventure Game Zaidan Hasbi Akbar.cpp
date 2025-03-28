#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int Pilihan;
int HP = 100;
int Power = 10;
char TanyaChest, TanyaHPdanPower, TanyaPenjagaBoss, LanjutPerjalanan, TanyaAmbilPedang, TanyaLayak, TanyaMainLagi,TanyaKembali;
char *Nama;
const int PowerPenjagaBoss = 20;
const int PowerBoss = 150;


int Tampilkan_HP_dan_Power(){
	printf("\n");
	printf("HP Anda : %d\n", HP);
	printf("Power Anda : %d\n\n", Power); 
   }
   


main(){
	
	printf("\t=====================================================\n");
	printf("\t\t Sebuah Game Berbasis Text\n");
	printf("\t\t    Zaidan Hasbi Akbar\n");
	printf("\t\t       PPLG 1\n");
	printf("\t======================================================\n\n");
	
	MenuUtama:
	HP = 100;
	Power = 10;
	printf("Masukan nama anda : "); scanf("%s", &Nama);
	system("cls");
	Sleep(1500);
    printf("  __       __  ________  __        ______    ______   __       __  ________ \n");
    printf(" |  \\  _  |  \\|        \\|  \\      /      \\  /      \\ |  \\     /  \\|        \\ \n");
    Sleep(300);
    printf(" | $$ / \\ | $$| $$$$$$$$| $$     |  $$$$$$\\|  $$$$$$\\| $$\\   /  $$| $$$$$$$$ \n");
    Sleep(300);
    printf(" | $$/   \\| $$| $$__    | $$     | $$   \\$$| $$  | $$| $$$\\ /  $$$| $$__     \n");
    Sleep(300);
    printf(" | $$  $$$\\ $$| $$  \\   | $$     | $$      | $$  | $$| $$$$\\  $$$$| $$  \\    \n");
    Sleep(300);
    printf(" | $$ $$\\$$\\$$| $$$$$   | $$     | $$   __ | $$  | $$| $$\\$$ $$ $$| $$$$$    \n");
    Sleep(300);
    printf(" | $$$$  \\$$$$| $$_____ | $$_____| $$__/  \\| $$__/ $$| $$ \\$$$| $$| $$_____  \n");
    Sleep(300);
    printf(" | $$$    \\$$$| $$     \\| $$     \\\\$$    $$ \\$$    $$| $$  \\$ | $$| $$     \\ \n");
    Sleep(300);
    printf("  \\$$      \\$$ \\$$$$$$$$ \\$$$$$$$$ \\$$$$$$   \\$$$$$$  \\$$      \\$$ \\$$$$$$$$ \n");
    printf("\n");
    Sleep(1000);
    printf("  ________   ______                                                          \n");
    printf(" |        \\ /      \\                                                         \n");
    Sleep(300);
    printf("  \\$$$$$$$$|  $$$$$$\\                                                        \n");
    Sleep(300);
    printf("    | $$   | $$  | $$                                                        \n");
    Sleep(300);
    printf("    | $$   | $$  | $$                                                        \n");
    Sleep(300);
    printf("    | $$   | $$  | $$                                                        \n");
    Sleep(300);
    printf("    | $$   | $$__/ $$                                                        \n");
    Sleep(300);
    printf("    | $$    \\$$    $$                                                        \n");
    Sleep(300);
    printf("     \\$$     \\$$$$$$                                                         \n");
    Sleep(300);
    printf("\n");
    Sleep(3000);
    printf("\033[3;31m");
	printf("\n");                                                                                                     
    printf("       _____    ____   ____  _____   ______         _____         ______           _____  _____   ______   \n");
    printf("   ___|\\    \\  |    | |    ||\\    \\ |\\     \\    ___|\\    \\    ___|\\     \\     ____|\\    \\|\\    \\ |\\     \\  \n");
    printf("  |    |\\    \\ |    | |    | \\\\    \\| \\     \\  /    /\\    \\  |     \\     \\   /     /\\    \\\\\\    \\| \\     \\ \n");
    printf("  |    | |    ||    | |    |  \\|    \\  \\     ||    |  |____| |     ,_____/| /     /  \\    \\\\|    \\  \\     |\n");
    printf("  |    | |    ||    | |    |   |     \\  |    ||    |    ____ |     \\--'\\_|/|     |    |    ||     \\  |    |\n");
    printf("  |    | |    ||    | |    |   |      \\ |    ||    |   |    ||     /___/|  |     |    |    ||      \\ |    |\n");
    printf("  |    | |    ||    | |    |   |    |\\ \\|    ||    |   |_,  ||     \\____|\\ |\\     \\  /    /||    |\\ \\|    |\n");
    printf("  |____|/____/||\\___\\_|____|   |____||\\_____/||\\ ___\\___/  /||____ '     /|| \\_____\\/____/ ||____||\\_____/|\n");
    printf("  |    /    | || |    |    |   |    |/ \\|   ||| |   /____ / ||    /_____/ | \\ |    ||    | /|    |/ \\|   ||\n");
    printf("  |____|____|/  \\|____|____|   |____|   |___|/ \\|___|    | / |____|     | /  \\|____||____|/ |____|   |___|/\n");
    printf("    \\(    )/       \\(   )/       \\(       )/     \\( |____|/    \\( |_____|/      \\(    )/      \\(       )/  \n");
    printf("     '    '         '   '         '       '       '   )/        '    )/          '    '        '       '   \n");
    printf("\033[0m");
	Sleep(4000);
	system("cls");


	printf("Selamat datang %s!\n", &Nama);
	Sleep(1000);
	Tampilkan_HP_dan_Power();
	Sleep(1000);
	MULAI:
	printf("1. Mulai Permainan\n");
	printf("2. Keluar\n");
	printf("3. Lihat Map\n");
	printf("Masukan Pilihan Anda (1-3): "); scanf("%d", &Pilihan);
	
	if(Pilihan == 1){
		system("cls");
		RuanganAwal:
		printf("Saat ini %s sedang berada di sebuah ruangan kosong. Di ruangan itu\n", &Nama);
		Sleep(3000);
		printf("terdapat 2 lorong mengarah ke ruangan atas juga ke depan.\n");
		Sleep(2500);
		printf("Apa yang ingin Anda lakukan?\n");
        printf("1. Masuk ke ruangan atas\n");
        printf("2. Maju ke depan\n");
        printf("3. Kembali ke Menu Utama\n");
        printf("Masukan Pilihan Anda (1-3): "); scanf("%d", &Pilihan);
        switch(Pilihan){
		
        	case 1 :
		system("cls");
        printf("%s saat ini berada di sebuah ruangan buntu dan dalam ruangan itu hanya berisikan sebuah chest.\n", &Nama);
        Sleep(3800);
  		printf("Apakah anda ingin membuka chest itu ? [Y/N] : "); scanf(" %c", &TanyaChest);
		  if(TanyaChest == 'Y' || TanyaChest == 'y'){
			printf("\n%s menemukan sebuah botol penambah kekuatan. Ini dapat menambahkan Power anda sebanyak 15 Power.\n", &Nama, Power += 15);
			Sleep(4000);
			MELIHATPOWER1:
			printf("Ingin melihat Power anda saat ini ? [Y/N] : "); scanf(" %c", &TanyaHPdanPower);
			if(TanyaHPdanPower == 'Y' || TanyaHPdanPower == 'y'){
			Tampilkan_HP_dan_Power();
			Sleep(1000);
			LANJUTPERJALANAN1:
			 printf("%s melanjutkan perjalanan dengan kembali ke ruangan awal.\n", &Nama);
			 Sleep(2000);
			 printf("Ingin melanjutkan perjalanan? [Y/N] : "); scanf(" %c", &LanjutPerjalanan);
			 
			 if(LanjutPerjalanan == 'Y' || LanjutPerjalanan == 'y'){
			  system("cls");
			  DepanAwal:
			  printf("Setelah berada di rungan awal, %s pergi ke ruangan depan agar dapat melanjutkan perjalanannya.\n", &Nama);
			  Sleep(4400);
			  printf("Saat ini %s berada di ruangan yang memiliki 1 arah saja yaitu ke depan.\n", &Nama);
			  Sleep(3500); 
			  printf("Juga di ruangan ini terlihat seorang penjaga boss. Penjaga boss itu memiliki Power 20.\n");
			  Sleep(3700);
			  printf("Penjaga boss itu bersifat netral(Apabila diserang dia akan melawan sebaliknya,\n");
			  Sleep(3500);
			  printf("Apabila tidak diserang dia akan diam saja)\n");
			  Sleep(2000);
			  printf("Apakah anda ingin menyerang boss itu? [Y/N] : "); scanf(" %c", &TanyaPenjagaBoss);
			  
			 if(TanyaPenjagaBoss == 'Y' || TanyaPenjagaBoss == 'y'){
				if(Power > PowerPenjagaBoss){
			 	system("cls");
			 	printf("%s berhasil mengalahkan penjaga boss itu namun mengurangi HP anda sebesar 15 HP. Penjaga boss\n", &Nama, HP -= 15);
				Sleep(4700); 
				printf("itu menjatuhkan sebuah Hati yang dapat menambahkan HP anda sebesar 50 HP.\n");
				Sleep(3800);
			 	printf("Dan juga boss itu menjatuhkan sebuah armor yang dapat menambahkan power anda sebesar 100 Power\n");
			 	Sleep(4700);
			 	HP += 50;
			 	Power += 100;
			 	
			printf("Ingin melihat Power anda saat ini ? [Y/N] : "); scanf(" %c", &TanyaHPdanPower);
			if(TanyaHPdanPower == 'Y' || TanyaHPdanPower == 'y'){
			Tampilkan_HP_dan_Power();
			Sleep(1000);
		LANJUTPERJALANAN2:
		printf("Ingin melanjutkan perjalanan? [Y/N] : "); scanf(" %c", &LanjutPerjalanan);
		
		if(LanjutPerjalanan == 'Y' || LanjutPerjalanan == 'y'){
		 	system("cls");
		 	printf("%s Melanjutkan perjalanan dengan pergi ke arah depan.\n", &Nama);
		 	Sleep(3000);
		 	printf("Di ruangan ini, terdapat 2 lorong yang mengarah ke atas dan ke depan.\n");
			 Sleep(3200); 
			printf("terlihat juga sebuah pedang tertancap.\n");
			Sleep(2700);
		 	printf("Apakah Anda ingin mengambil pedang tersebut ? [Y/N] : "); scanf(" %c", &TanyaAmbilPedang);
		 	if(TanyaAmbilPedang == 'Y' || TanyaAmbilPedang == 'y'){
		 		
		 	printf("%s mengambil pedang tersebut. Pedang ini menambahkan Power sebesar 35\n", &Nama, Power += 35);
			Sleep(3200);
			printf("Ingin melihat Power anda saat ini ? [Y/N] : "); scanf(" %c", &TanyaHPdanPower);
			if(TanyaHPdanPower == 'Y' || TanyaHPdanPower == 'y'){
			Tampilkan_HP_dan_Power();
			Sleep(1000);
			printf("Ingin melanjutkan perjalanan? [Y/N] : "); scanf(" %c", &LanjutPerjalanan);
			if(LanjutPerjalanan == 'Y' || LanjutPerjalanan == 'y'){
			PilihanDua:
			printf("1. Masuk ke ruangan atas\n");
        	printf("2. Maju ke depan\n");
        	 printf("Masukan Pilihan Anda (1-2): "); scanf("%d", &Pilihan);
        switch(Pilihan){
        	case 1 :
        		system("cls");
        	printf("Saat ini %s berada di ruangan boss. Suasananya yang mencekam membuat %s merinding.\n", &Nama, &Nama);
        	Sleep(3600);
        	printf("Dengan berlagak sombong boss itu bertanya mu seperti ini (Apa kau sudah merasa layak\n");
        	printf("untuk mengalahkan ku? )\n");
        	Sleep(4400);
        	if(Power > PowerBoss ){	
        	printf("Dengan semangat %s pun menjawab (Ya, aku akan mengalahkan mu hari ini!)\n", &Nama);
        	Sleep(3500);
        	printf("*Pertempuran terjadi*\n");
        	Sleep(3000);
        	printf("Pertempuran ini hanya menyisakan 1 pemenang saja yaitu ");
        	Sleep(3000);
			printf("%s\n", &Nama, HP -= 110,Power -= 150);
			Sleep(2000);
        	printf("\nSelamat anda MENANG!!!!!!!!\n");
        	printf("\n+++HP DAN POWER TERAKHIR+++\n");
        	Tampilkan_HP_dan_Power();
        	
        	printf("Ingin main lagi? [Y/N] : "); scanf(" %c", &TanyaMainLagi);
			if(TanyaMainLagi == 'Y' || TanyaMainLagi == 'y'){
			system("CLS");
			goto MenuUtama;
			}else{
		printf("\n\t=====TERIMAKASIH SUDAH MEMAINKAN GAME INI=====\n ");
		goto KELUAR;
		}

        			
        }else{        	
        	printf("%s hanya diam saja. Boss itu kemudian menyerang %s\n", &Nama, &Nama);
        	Sleep(3000);
        	printf("*Pertempuran terjadi*\n");
        	Sleep(3000);
        	printf("Pertempuran ini hanya menyisakan 1 pemenang saja yaitu ");
			printf(" boss.\n", &Nama, HP -= HP,Power -= Power);
			Sleep(2000);
        	printf("\n\t+++++GAME OVER+++++\n");
        	printf("\n===HP DAN POWER TERAKHIR===\n");
        	Tampilkan_HP_dan_Power();
        	
        	printf("Ingin main lagi? [Y/N] : "); scanf(" %c", &TanyaMainLagi);
			if(TanyaMainLagi == 'Y' || TanyaMainLagi == 'y'){
			system("CLS");
			goto MenuUtama;
			}else{
		printf("\n\t=====TERIMAKASIH SUDAH MEMAINKAN GAME INI===== ");
		goto KELUAR;
		}
		}
        	break;
        	case 2 :
			system("cls"); 
        	printf("%s memasuki ruangan jebakan yang berisikan laba laba beracun yang memiliki 300 Power.",&Nama, HP -= HP,Power -= Power);
        	Sleep(3000);
			printf("\n\t\t\t+++++GAME OVER+++++\n");
        	printf("\n===HP DAN POWER TERAKHIR===\n");
        	Tampilkan_HP_dan_Power();
        	
        	printf("Ingin main lagi? [Y/N] : "); scanf(" %c", &TanyaMainLagi);
			if(TanyaMainLagi == 'Y' || TanyaMainLagi == 'y'){
			system("CLS");
			goto MenuUtama;
			}else{
		printf("\n\t=====TERIMAKASIH SUDAH MEMAINKAN GAME INI===== ");
		goto KELUAR;
		}
        	break;
        	default :
        	printf("\nMasukan Pilihan yang valid!");
        	goto PilihanDua;
        	break;
		}
			}else{
				goto KELUAR;
			}
			 }else{
			 goto PilihanDua;
			 }
		 }else{
		 	goto PilihanDua;
		 }
		 
		}else{
		 goto KELUAR;
			
		}
			 
			}else{
			 	goto LANJUTPERJALANAN2;
			}
			 }else{
			 	printf("\nANDA KALAH DARI PENJAGA BOS\n");
		 		printf("\n\t+++++GAME OVER+++++\n");
		 		printf("Ingin main lagi? [Y/N] : "); scanf(" %c", &TanyaMainLagi);
				if(TanyaMainLagi == 'Y' || TanyaMainLagi == 'y'){
					system("CLS");
					goto MenuUtama;
				}else{
				printf("\n\t=====TERIMAKASIH SUDAH MEMAINKAN GAME INI===== ");
				goto KELUAR;
				}
			 }
		 }else{
		 	goto LANJUTPERJALANAN2;
		 }
			 }else{
			goto KELUAR;
			 }
			
	 	}else{
		goto LANJUTPERJALANAN1;
			}
		
		break;
		case 2 :
			system("cls");
			goto DepanAwal;
			
		break;
		case 3 :
			system("CLS");
			goto MenuUtama;
		break;
		default :
			printf("\nMasukan pilihan yang valid!\n");
			goto RuanganAwal;
	 	}else{
	 		goto MELIHATPOWER1;
		 }
	}
	
}else if (Pilihan == 2){
	KELUAR:
	printf("\nKeluar...");
}else if(Pilihan == 3){
system("cls");	
printf("===========                          =============\n");
printf("=         =                          =           =\n");
printf("=         =                          =           =\n");
printf("=         =                          =           =\n");
printf("=         =                          =           =\n");
printf("====   ====                          =====   =====\n");
printf("    = =                                   = =     \n");
printf("    = =                                   = =     \n");
printf("    = =                                   = =     \n");
printf("===== =====       ============       ====== ======        ============\n");
printf("=          =======            =======              ======            =\n");
printf("=    1                                                               =\n");
printf("=          =======            =======              ======            =c\n");
printf("===========       ============       =============       =============\n");
printf("Ingin kembali ke menu awal? [Y/N] : "); scanf(" %c", &TanyaKembali);
if(TanyaKembali == 'Y' || TanyaKembali == 'y'){
	system("cls");
	goto MULAI;
}else{
	goto KELUAR;
}

	
}else{
	printf("\nMasukan Pilihan yang valid!\n");
	goto MULAI;
}

}
