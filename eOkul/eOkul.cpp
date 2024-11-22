/*
Okul Yönetim Sistemi
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>
void kullanımı, array kullanımı, kayıt ve giriş var, switch kullanımı, for kullanımı, if else kullanımı, locale.h var.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>
github.com/yasindev9
*/
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int totalStudent = 0;
int numberOfStudent = 0;
int studentNumber[100];
string studentName[100];
string studentSurname[100];
char menuSelect[5];
string teacherName = "yasin";
string teacherNameInput;
int teacherPassInput;
int teacherPassword = 1234;
int studentPass;
int studentPassInput;
int studentNumberChecker;

void studentPage()
{
	cout << "********************************************************" << endl;
	cout << setw(4) << "SAU öğrenci bilgi sistemine hoşgeldiniz!" << endl;
	cout << "Yapmak istediğiniz işlemi seçiniz :" << endl;
	cout << "a. Sınav notlarım" << endl << "b. Devamszlık bilgisi" << endl << "c. Ders programım" << endl << "d. Yemekhane menüsü" << endl << "x. Çıkış" << endl;
	cin >> menuSelect[3];
	cout << "********************************************************" << endl;
	switch (menuSelect[3])
	{
	case 'a' :
		cout << studentName[0] << setw(4) << studentSurname[0] << endl << "Matematik 87" << endl << "Fizik 78" << endl << "Programlamaya giriş 200" << endl;
		studentPage();
		break;
	case 'b' :
		cout << studentName[0] << setw(4) << studentSurname[0] << endl << "Devamsızlık bilgisi bulunamadı." << endl;
		studentPage();
		break;
	case 'c' :
		cout << studentName[0] << setw(4) << studentSurname[0] << endl << "Pazartesi : Matematik" << endl << "Çarşamba : Fizik" << endl << "Cuma : Programlamaya giriş" << endl;
		studentPage();
		break;
	case 'd' :
		cout << "Bugünün menüsü :" << endl << "Bulgur pilavı(maalesef)" << endl << "Tokat kebabı" << endl << "Yayla çorbası" << endl;
		studentPage();
		break;
	case 'x':
		cout << "Çıkış yapılıyor..." << endl;
		int main();
		main();
		break;
	default:
		cout << "hata" << endl;
		studentPage();
		break;
	}

}

void studentLogin()
{
	cout << "********************************************************" << endl;
	cout << "Öğrenci numaranızı giriniz : ";
	cin >> studentNumberChecker;
	if (studentNumberChecker == studentNumber[0])
	{
		cout << "Öğrenci numarası bulundu! Şifrenizi girin : ";
		cin >> studentPassInput;
		if (studentPass == studentPassInput)
		{
			cout << "Giriş başarılı!" << endl;
			void studentPage();
			studentPage();
		}
		else
		{
			cout << "Giriş başarısız!" << endl;
			studentLogin();
		}
	
	}
	else
	{
		cout << "********************************************************" << endl;
		cout << "Öğrenci numaranız sistemde bulunamadı. Yeni öğrenci iseniz önce kayıt olunuz." << endl;
		cout << "Kayıt olmak için(k) | Tekrar denemek için(r)" << endl;
		cin >> menuSelect[4];
		switch (menuSelect[4])
		{
		case 'k':
			void studentSignUp();
			studentSignUp();
			break;
		case 'r':
			studentLogin();
			break;
		default:
			cout << "hata" << endl;
			studentLogin();
			break;
		}
	}
}

void studentSignUp()
{
	cout << "********************************************************" << endl;
	cout << "Öğrenci numaranızı giriniz : ";
	cin >> studentNumber[0];
	cout << "Adınızı girin : ";
	cin >> studentName[0];
	cout << "Soyadınızı girin : ";
	cin >> studentSurname[0];
	cout << "Şifrenizi belirleyin : ";
	cin >> studentPass;
	cout << "Kaydınız başarılı! Girişe yönlendiriliyorsunuz..." << endl;
	studentLogin();

}

void teacherPage()
{
	cout << "********************************************************" << endl;
	cout << "İyi günler!" << endl;
	if (teacherName == teacherNameInput && teacherPassword == teacherPassInput)
	{
		cout << "Yapmak istediğiniz işlemi seçiniz :" << endl;
		cout << "a. Öğrenci ekleme" << endl << "b. Not girme" << endl << "c. Sınıf listesi görüntüleme" << endl << "x. Çıkış" << endl;
		cin >> menuSelect[2];
		switch (menuSelect[2])
		{
		case 'a':
			void addStudent();
			addStudent();
			break;
		case 'b':
			break;
		case 'c':
			void listStudent();
			listStudent();
			break;
		case 'x':
			cout << "Çıkış yapılıyor..." << endl;
			int main();
			main();
		default:
			cout << "hata" << endl;
			teacherPage();
			break;
		}
	}
	else
	{
		cout << "Öğretmen kaydınız bulunamadı. İdare ile iletişime geçmeyi deneyin." << endl;
		int main();
		main();
	}

}

void teacherLogin()
{
	cout << "********************************************************" << endl;
	cout << "SAU öğretmen bilgi sistemine hoşgeldiniz" << endl;
	cout << "Kullanıcı adınızı giriniz : ";
	cin >> teacherNameInput;
	cout << "Şifrenizi giriniz : ";
	cin >> teacherPassInput;
	teacherPage();
}

void addStudent()
{
	cout << "Eklemek istediğiniz öğrenci sayısını giriniz :" << endl;
	cin >> numberOfStudent;
	if (totalStudent == 0)
	{
		totalStudent = totalStudent + numberOfStudent;
		for (int i = 1; i <= totalStudent; i++)
		{
			cout << i << ". öğrencinin okul numarası :" << endl;
			cin >> studentNumber[i];
			cout << i << ". öğrencinin adı :" << endl;
			cin >> studentName[i];
			cout << i << ". öğrencinin soyadı :" << endl;
			cin >> studentSurname[i];
		}
	}
	else if (totalStudent != 0)
	{
		totalStudent++;
		for (int i = totalStudent; i <= totalStudent + numberOfStudent -1; i++)
		{
			cout << i << ". öğrencinin okul numarası :" << endl;
			cin >> studentNumber[i];
			cout << i << ". öğrencinin adı :" << endl;
			cin >> studentName[i];
			cout << i << ". öğrencinin soyadı :" << endl;
			cin >> studentSurname[i];
		}		
		totalStudent = totalStudent + numberOfStudent -1;
	}
cout << "Öğrenci ekleme başarılı! Ana sayfaya yönlendiriliyorsunuz..." << endl;
teacherPage();
}

void listStudent()
{
	if (totalStudent > 0)
	{
		cout << "Sınıf mevcudu : " << totalStudent << endl;
		for (int i = 1; i <= totalStudent; i++)
		{
			cout << studentNumber[i] << " " << studentName[i] << " " << studentSurname[i] << endl;
		}
	}
	else
	{
		cout << "Sınıf listesi boş." << endl;
		teacherPage();
	}
	cout << "Öğrenci listeleme başarılı! Ana sayfaya yönlendiriliyorsunuz..." << endl;
	teacherPage();

}

int main()
{
	setlocale(LC_ALL, "Turkish");
	cout << "SAU bilgi sistemine hoşgeldiniz" << endl;
	cout << "********************************************************" << endl;
	cout << "Öğrenci girişi (s) / Öğretmen girişi (t)" << endl;
	cin >> menuSelect[1];

	switch (menuSelect[1])
	{
	case 's':
		studentLogin();
		break;
	case 't':
		teacherLogin();
		break;
	default:
		cout << "hata" << endl;
		main();
		break;
	}

	return 0;
}