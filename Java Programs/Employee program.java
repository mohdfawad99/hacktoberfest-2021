import java.util.Scanner;
public class Test{
 public static void main(String[] args) {
 System.out.println("Employee 1");
 identitas pegawai1 = new identitas();
 pegawai1.perhitungan();
 System.out.println("Employee Data 1");
 pegawai1.display();
 System.out.println("Employee 2");
 identitas pegawai2 = new identitas();
 pegawai2.perhitungan();
 System.out.println("Employee Data 2");
 pegawai2.display();
 }
}
class identitas{
 String nama;
 String alamat;
 String nohp;
 int anak;
 int gajipokok;
 double hasilbersih;
 public static int staticVar;
 public static String staticVariable;
 Scanner input = new Scanner(System.in);
 identitas(){
 String namapegawai = staticVariable;
 String alamatpegawai = staticVariable;
 String nohppegawai = staticVariable;
 nama = namapegawai;
 System.out.print("Input name : ");
 nama = input.nextLine();
 alamat = alamatpegawai;
 System.out.print("Input address : ");
 alamat = input.nextLine();
 nohp = nohppegawai;
 System.out.print("Input phone number : ");
 nohp = input.nextLine();
 }
 double perhitungan(){
 int Gaji = staticVar;
 int jumlahanak = staticVar;
 anak = jumlahanak;
 System.out.print("Input number of children : ");
 anak = input.nextInt();
 gajipokok = Gaji;
 System.out.print("Input base salary : ");
 gajipokok = input.nextInt();
 hasilbersih = gajipokok + (gajipokok * 0.1) * anak;
 System.out.println("");
 return hasilbersih;
 }
 void display(){
 System.out.println("Employee name : " +nama);
 System.out.println("Address : " +alamat);
 System.out.println("Phone Number : " +nohp);
 System.out.println("Number of children : " +anak);
 System.out.println("Base salary : " +gajipokok);
 System.out.println("Total salary : " +hasilbersih);
 System.out.println("");
 }
}
