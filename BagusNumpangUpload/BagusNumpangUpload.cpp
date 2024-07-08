#include <iostream>
using namespace std;
class MataKuliah
{
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah()
	{


		presensi = 0.0;
		activity = 0.0;
		exercise = 0.0;
		tugasAkhir = 0.0;


	}
	virtual void namaMataKuliah() { return; }
	virtual void inputNilai() { return; }
	virtual void hitungNilaiAkhir() { return; }
	virtual void cekKelulusan() { return; }

	void setPresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}

	void setActivity(float nilai)
	{
		this->activity = nilai;
	}
	float getActivity()
	{
		return activity;
	}

	void setExercise(float nilai)
	{
		this->exercise = nilai;
	}
	float getExercise()
	{
		return exercise;
	}

	void setTugasAkhir(float nilai)
	{
		this->tugasAkhir = nilai;
	}
	float getTugasAkhir()
	{
		return tugasAkhir;
	}
};
class Pemrograman : public MataKuliah
{
public:
	void inputNilai() {

		float presensi;
		float activity;
		float exercise;
		float tugasAkhir;
		string nama;

		presensi = 0.0;
		activity = 0.0;
		exercise = 0.0;
		tugasAkhir = 0.0;

		return;
	}

	void hitungNilaiAkhir() {
		float presensi;
		float activity;
		float exercise;
		float tugasAkhir;





		return;
	}

	void cekKelulusan() { return; }



};

class Jaringan : public MataKuliah
{
	void inputNilai() {
		float activity;
		float exercise;

		activity = 0.0;
		exercise = 0.0;

		return;
	}

	void hitungNilaiAkhir() {
		return;
	}

	void cekKelulusan() { return; }
};
int main()
{
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;


	cout << "Pilih Mata Kuliah :" << endl;
	cout << "1.Pemrograman " << endl;
	cout << "2.Jaringan " << endl;
	cout << "3.Keluar " << endl;

	cin >> pilih;



	return  0;




}