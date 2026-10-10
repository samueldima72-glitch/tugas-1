 #include <iostream>
 #include <iomanip>
 #include <string>

 using namespace std;

int main() {

  cout << "=== soal 1 ===" << endl;

  int var1 = 10;
  double var2 = 5.5;
  float var3 = 20.0;
  string var4 = "15";
  bool var5 = true;

  // konversi tipe data agar bisa dijumlahkan
  int angkavar4 = stoi(var4); // konversi string ke int

  // true = 1, false = 0
  int angkavar5 = var5 ? 1 : 0; // konversi bool ke int



  double hasil = var1 + var2 + var3 + angkavar4 + angkavar5;


  cout << "var1 = " << var1 << endl;
  cout << "var2 = " << var2 << endl;
  cout << "var3 = " << var3 << endl;
  cout << "var4 = " << var4 << endl;
  cout << "var5 = " << var5 << endl;

   cout << "Hasil penjumlahan = " << hasil << endl;

   return 0; // perbaikan dari return; menjadi return 0;




 cout << "=== soal 2 ===" << endl;


 const double PHI = 3.14159;

 double jari_jari = 7.0;

 double luas_lingkaran = PHI * jari_jari * jari_jari;

 double keliling_lingkaran = 2 * PHI * jari_jari;

 cout << "jari_jari = " << jari_jari << endl;
 cout << "luas_lingkaran = " << luas_lingkaran << endl;
 cout << "keliling_lingkaran = " << keliling_lingkaran << endl;


  cout << "=== soal 1 ===" << endl;

  int var1 = 10;
  double var2 = 5.5;
  float var3 = 20.0;
  string var4 = "15";
  bool var5 = true;

  // konversi tipe data agar bisa dijumlahkan
  int angkavar4 = stoi(var4); // konversi string ke int
  int angkavar5 = var5 ? 1 : 0; // konversi bool ke int

  double hasil = var1 + var2 + var3 + angkavar4 + angkavar5;
  cout << "var1 = " << var1 << endl;
  cout << "var2 = " << var2 << endl;
  cout << "var3 = " << var3 << endl;
  cout << "var4 = " << var4 << endl;
  cout << "var5 = " << var5 << endl;
  cout << "Hasil penjumlahan = " << hasil << endl;

 cout << "\n---------------------------" << endl;
 // === KODE LANJUTAN UNTUK SOAL 2 ===

 cout << "=== soal 2 ===" << endl;


 cout << "jari_jari = " << jari_jari << endl;
 cout << "luas_lingkaran = " << luas_lingkaran << endl;
 cout << "keliling_lingkaran = " << keliling_lingkaran << endl;

 // return 0;

 // Data diri
 string a = "Samuel dima"; // nama
 int b = 19; //umur
 double c = 50.5; // Berat badan (kg)
 double d = 1.63; // Tinggi badan (m)

 // Menghitung BMI
 double e = c / (d * d);

 // Menentukan status berat badan
 string f;

 if (e < 18.5) {
    f = "kekurangan berat badan";
 }else if (e < 25.0){
    f = "Normal (ideal)";
 }else if (e < 30.0){
    f = "Kelebihan berat badan";
 }else {
    f = "kegemukan (obesitas)";
 }

 // Menampilkan hasil
 cout << "===== DATA DIRI =====" << endl;
 cout << "nama          : "<< a << endl;
 cout << "umur          : "<< b << " tahun " << endl;
 cout << "berat badan   : "<< c << " kg " << endl;
 cout << "tinggi badan  : "<< d * 100 << " cm " << endl;
 cout << "hasil BMI     : "<< fixed << setprecision(2) << e << endl;
 cout << "status        : "<< f << endl;
}






