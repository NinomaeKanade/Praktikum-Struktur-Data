<div align="center">
  <a href="https://unp.ac.id/">
    <img src="https://unp.ac.id/nfs-assets/all/images/logo_unp_white.png" alt="UNP" width="400"/>
  </a>
</div>

# Biodata Mahasiswa
* Nama: Rafli Arianto
* NIM: 23343051  
* Prodi: Informatika (NK)  
* Kode Kelas: INF1.62.2014  
* Seksi: 202323430156  
* Dosen Pengampu: Randi Proska Sandra, M.Sc  
  

<h2 id="navigator">Job Sheet</h2>
<list>
  <li><a href="#JS1">Job Sheet 1 - Pengenalan Struktur Data</a></li>
  <li><a href="#JS2">Job Sheet 2 - Array, Pointer, Structure</a></li>
  <li><a href="#JS3">Job Sheet 3 - Single Linked List</a></li>
  <li><a href="#JS4">Job Sheet 4 - Doubly Linked List</a></li>
  <li><a href="#JS5">Job Sheet 5 - Doubled and Circular Linked List</a></li>
  <li><a href="#JS6">Job Sheet 6 - Stack</a></li>
  <li><a href="#JS7">Job Sheet 7 - Queue</a></li>
  <li><a href="#JS8">Job Sheet 8 - Bubble and Insertion Sort</a></li>
  <li><a href="#JS9">Job Sheet 9 Select and Merge Sort</a></li>
  <li><a href="#JS10">Job Sheet 10 - Shell and Quick Sort</a></li>
  <li><a href="#JS11">Job Sheet 11 - Linear and Binary Sort</a></li>
  <li><a href="#JS12">Job Sheet 12 - Tree</a></li>
  <li><a href="#JS13">Job Sheet 13 - Graphs</a></li>
</list>

---
<h1 id="JS1">1. Pengenalan Struktur Data</h1>

### Struktur Data

Dalam istilah ilmu komputer, sebuah struktur data adalah cara penyimpanan, penyusunan dan pengaturan data di dalam media penyimpanan komputer sehingga data tersebut dapat digunakan secara efisien. Sedangkan Data adalah representasi dari fakta dunia nyata. Fakta atau keterangan tentang kenyataan yang disimpan, direkam atau direpresentasikan dalam bentuk tulisan, suara, gambar, sinyal atau simbol. Konstanta digunakan untuk menyatakan nilai tetap sedangkan variable digunakan dalam program untuk menyatakan nilai yang dapat berubah-ubah selang eksekusi berlangsung.


---
<h1 id="JS2">2. Array, Pointer, Structure</h1>

### Array

Array adalah suatu kumpulan nilai yang bertipe data sama. Masing-masing elemen array diakses menggunakan indeks, dan elemen aarray dapat diakses langsung (acak)

![image](https://4.bp.blogspot.com/-IUtrv_bcxmI/V9H0zKtf33I/AAAAAAAACKA/twBJOAYaF8oRzadQogAkwIsWEhsqImOZwCLcB/s400/arrays.jpg)

Deklarasi : 

```c

type arrayName [ arraySize ]; //(1D)
type arrayName [ x ][ y ]; //(2D)
type name [ size1 ][ size2 ]...[ sizeN ]; //(MD)
```

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgeJ3qKk7ZZeie0c3KsTyW4A8SUJ6WIvAwZ361F3Z6l_O1VoMZoayIjmw3zEVRFbji_0_klOmyndO6AEGJ0OcGdxkR6WIGMaAwjB8zna0IefNaWYzkNSwgFjtSuFSS9Dmk3h5PBg77uR6oW/s400/slide_5.jpg)

Inisialisasi :
	
```c

double balance[5] = {500.0, 2.0, 3.4, 7.0, 50.0};
balance[4] = 50.0;
int a[3][4] = {
 {0, 1, 2, 3} ,
 {4, 5, 6, 7} ,
 {8, 9, 10, 11}
};
```

### Pointer

Pointer adalah variable yang berisi alamat memory sebagai nilainya dan berbeda dengan variable biasa yang berisi nilai tertentu. Dengan kata lain, pointer berisi alamat dari variable yang mempunyai nilai tertentu. 

- Suatu pointer bukan berisi dengan suatu nilai data seperti halnya pada variabel biasa, variabel pointer berisi dengan suatu alamat.
- Untuk mendeklarasikan variabel pointer gunakan tanda asterisk atau bintang (*) didepan variabel yang di deklarasikan pada tipe data tertentu.
- Tanda ini juga dapat dipakai untuk mengakses nilai dari variabel yang telah ditunjuk.
- Untuk mendapatkan alamat dari variabel pointer gunakan tanda

Deklarasi variabel pointer seperti halnya deklarasi variabel lainnya hanya ditambahkan tanda * pada depan nama variabel.

int *b, d;
char c ;
b= &c; //error
b= &d;//bisa
Untuk mendapatkan alamat memori pointer (address of) maka perintah yang
digunakan adalah menambahkan tanda & didepan variabel.
&b
Untuk mendapatan isi atau nilai dari variabel pointer maka perintah yang
digunakan cukup nama variabelnya saja.
b
Untuk mendapatkan isi atau nilai dari alamat yang terdapat pada isi pointer
(value pointed by) maka perintah yang digunakan adalah menambahkan tanda *
didepan variabel.
*b

### Structure

Dalam bahasa pemograman C sebuah Struct adalah kumpulan variable (berisi variable yang memiliki tipe-tipe yang berbeda) bernaung dalam satu nama objek yang serumpun. Sebelum membuat sebuah Struct anda perlu menentukan tipe tipe data apa saja di dalamnya. Untuk menamai struct kata kunci Struct digunakan.

Contoh Struct :
	
```c

struct structureName
{
 dataType member1;
 dataType member2;
 ...
};
```

Contoh lainnya :
	
```c

struct Person
{
 char name[50];
 int citNo;
 float salary;
};
```


---
<h1 id="JS3">3. Single Linked List</h1>

### Single Link List

Di dalam game Treasure Hunt, anda mulai menjelajahinya dengan mencari clue pertama. Di saat anda menemukannya, anda tidak menumukan harta karunnya tapi menemukan clue berikutnya dan begitu seterusnya sampai anda menemukan harta karun.
Sebuah linked list sama halnya dengan logika di atas, merupakan sebuah data yang berupa simpul atau node beralamat yang saling bertaut. Setiap simpul bisa menyimpan data yang mana isinya bisa char, int, string atau tipe data lainnya.

![image](https://msatechnosoft.in/blog/wp-content/uploads/2018/09/linked-list-Data-Structure-MSA-Technosoft.jpg)

Gambar di atas menerangkan sebuah link list sederhana/ Single Linked List, untuk memulainya harus membuat sebuat sebuah simpul special yang hanya memiliki alamat/pointer simpul ini dinamakan HEAD.
Kemudian pada akhir simpul/node diberi alamat kosong yang tidak menuju kemanapun yang disebut simpul TAIL. 

![image](https://lh6.googleusercontent.com/vMXGhGJcq2Sxd39Py96_ipPuAetbVVEnXGj4_FkStehTkISLPnuout_xDKH2quQ7pi7e5DjT30UfDyKp62lriJH4WxphNY4vOR_TEyt3smt-R6jt-0rayU5FlF7EMdudPmYhJgWJ)

Pada gambar di atas setiap simpul berisi
1. Data lebih dari satu tipe variable
2. Alamat dari simpul lain


---
<h1 id="JS4">4. Doubly Linked List</h1>

### Doubly Linked List

Doubly Linked List (DLL) berisi pointer tambahan, biasanya disebut pointer sebelumnya, bersama dengan pointer berikutnya dan data yang ada dalam daftar tertaut tunggal

![image](https://storage.googleapis.com/kotakode-prod-public/images/6c8785e1-fb53-49f6-a280-4a199a3c17d9-image.png)

Sama halnya dengan single linked list sebuah dobly link list memiliki head dan tail, perbedaannya doubly link list memiliki 2 arah data yani next dan previous.

Contoh simpul dobly linked List :

```c

/* Node of a doubly linked list */
struct Node {
 int data;
 struct Node *next; // Pointer to next node in DLL
 struct Node *prev; // Pointer to previous node in DLL
};
```

Kelebihan Doubly link list dibandingkan dengan Single link list :
1. DLL bisa berjalan dalam 2 arah ke depan dan kebelakang
2. Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang menunjuk ke simpul yang akan dihapus
3. Dapat melakukan proses insert() simpul lebih efisien

Dalam single link list penghapusan simpul, pointer simpul data sebelumnya diperlukan dan untuk mendapatkannya terkadang list data diulang dari awal. Berbeda dengan doubly link list kita langsung dapat pointer simpul data sebelumnya menggunakan pointer previous.

Kelemahan Dobly link list :
1. Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer 2 pointer
2. Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.


---
<h1 id="JS5">5. Doubled and Circular Linked List</h1>

### Double Link List

Double linked list Elemen-elemen dihubungkan dengan dua pointer dalam satu node. Struktur ini menyebabkan list melintas baik ke depan (next) maupun ke belakang (prev) atau (back).

![image](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSMupl8ABZfVSVzrA-eFi2enf4RW1fUU1dnDrSlxADeb1-8JXN2)

Masing-masing elemen pada double linked list terdiri dari tiga bagian, disamping data (info) dan pointer next, masing-masing elemen dilengkapi dengan pointer prev atau back yang menunjuk ke elemen sebelumnya. Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertama menunjuk NULL. Untuk menunjukkan tail dari double linked list tersebut, maka pointer next dari elemen terakhir menunjuk NULL.

![image](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQoLwuL7TYzAZOXxBqfDOcKd1EHApUS-8gtfVYOwg4Xl5Z2mWgi)

Untuk melintas kembali melalui double linked list, dapat digunakan pointer prev dari elemen yang berurutan pada arah tail ke head. Double linked list mempunyai fleksibilitas yang lebih tinggi daripada single linked list dalam perpindahan pada list. 

### Circular Link List

Circular list adalah bentuk lain dari linked list yang memberikan fleksibilitas dalam melewatkan elemen. Circular list bisa berupa single linked list atau double linked list, tetapi tidak mempunyai tail. Pada circular list, pointer next dari elemen terakhir menunjuk ke elemen pertama dan bukan menunjuk NULL. Pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.

Single Link List :
	
![image](https://allcprogrammingandalgorithm.wordpress.com/wp-content/uploads/2019/05/screenshot_2019-05-23-rema-thareja-pdf.png)

Double Link List : 

![image](https://allcprogrammingandalgorithm.wordpress.com/wp-content/uploads/2019/05/screenshot_2019-05-31-rema-thareja-pdf5.png)

Circular Link List : 

![image](https://allcprogrammingandalgorithm.wordpress.com/wp-content/uploads/2019/05/screenshot_2019-05-23-rema-thareja-pdf10.png)

Circular Double Link List : 

![image](https://allcprogrammingandalgorithm.wordpress.com/wp-content/uploads/2019/05/screenshot_2019-05-31-rema-thareja-pdf.png)


---
<h1 id="JS6">6. Stack</h1>

### Stack 

Stack adalah sebuah kumpulan data dimana data yang diletakkan di atas data yang lain. Dengan demikian stack adalah struktur data yang menggunakan konsep LIFO. Dengan demikian, elemen terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil. Dalam proses komputasi, untuk meletakkan sebuah elemen pada bagian atas dari stack, disebut push. Dan untuk memindahkan dari tempat yang atas tersebut, disebut pop.

![image](https://media.licdn.com/dms/image/C4D12AQG9k9GLWA9gjw/article-inline_image-shrink_400_744/0/1577121375847?e=1723680000&v=beta&t=04Zy2NOwypzR34yen6iQ6VvKgbx5NGx_D9zj-eWDZEg)

Contoh:
	
kita mempunyai dua buah kotak yang kita tumpuk, sehingga kotak kita letakkan di atas kotak yang lain. Jika kemudian stack dua buah kotak tersebut kita tambah dengan kotak ketiga dan seterusnya, maka akan kita peroleh sebuah stack kotak, yang terdiri dari N kotak.

![image](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRt0l_WURpsUGM08_A-uKP9CnaRnacZMRDwyuDoQ4kY4IfZ7JlD)

![image](https://miro.medium.com/v2/resize:fit:720/format:webp/1*4Pn00ch_p4DTCb4r3naCDQ.png)


---
<h1 id="JS7">7. Queue</h1>

### Queue

Sebuah antrian sangat berguna pada pemograman struktur data. Hal ini sama dengan membeli tiket pergi nonton ke bioskop. Dimana orang pertama yang memasuki antrian adalah yang pertama mendapat tiket masuk. Antrian menggunakan prinsip FIFO First in First Out. Item yang mendapatkan giliran pertama adalah item yang pertama keluar. 

![image](https://cdn.programiz.com/sites/tutorial2program/files/queue.png)

Pada gambar di atas, terdapat item dengan no 1 berada pada antrian sebelum item no 2, hal demikian menjadi yang pertama yang akan diambil dari antrian menurut prinsip FIFO. Dalam istilah pemograman, meletakkan sebuah item ke dalam antrian disebut “enqueue” dan menghapusnya disebut “dequeue”. Kita dapat mengimplementasikan antrian di bahasa pemograman apapun seperti C, C++, Java, Phyton atau C#, tapi spesifikasinya tetap.


---
<h1 id="JS8">8. Bubble Sort and Insertion Sort</h1>

### Bubble Sort

Bubble Sort adalah salah satu algoritma untuk sorting data, atau kata lainnya mengurutkan data dari yang terbesar ke yang terkecil atau sebaliknya (Ascending atau Descending). Bubble sort (metode gelembung) adalah metode/algoritma pengurutan dengan dengan cara melakukan penukaran data dengan tepat disebelahnya secara terus menerus sampai bisa dipastikan dalam satu iterasi tertentu tidak ada lagi perubahan. Jika tidak ada perubahan berarti data sudah terurut. Disebut pengurutan gelembung karena masing-masing kunci akan dengan lambat menggelembung ke posisinya yang tepat.

Berikut ilustrasinya : 
Terdapat bilangan 23, 17, 5, 90, 12, 44, 38, 84, 77 diurutkan dengan bubble sort ascending (dari kecil ke paling besar nilainya).

![image](https://encrypted-tbn1.gstatic.com/images?q=tbn:ANd9GcSqEqRNYhdOeDJ2M71KDOUMociGgkq6xIqhyl0e8DPsNxMUfB4M)

### Insertion Sort 

Insertion sort bekerja sama halnya dengan saat kita bermain mengurutkan kartu di tangan. Menggunakan asumsi bahwa kartu pertama telah diurutkan kemudian pilih sebuah kartu acak yang belum diurutkan. Jika kartu tersebut lebih besar daripada kartu yang di tangan, maka kartu diletakkan di sebelah kanan, sebaliknya jika kartu yang diambil kecil diletakkan sebelah kiri. Cara yang sama dilakukan untuk pengambilan kartu berikutnya.
Pendekatan yang sama digunakan dalam Insertion sort Insertion sort adalah sebuah algoritma yang meletakkan sebuah data/elemen yang belum urut pada tempat yang cocok pada setiap siklus pengurutan.

Contoh Insertion sort bekerja :
	
![image](https://encrypted-tbn3.gstatic.com/images?q=tbn:ANd9GcTi6Yh5ssdrT1umsTK5NYPGYJgK5eYIvTBUuNAfEhr4EGu8cGn0)

1. Elemen pertama pada array di atas diasumsikan telah diurutkan. Ambil elemen/data kedua dan simpan secara terpisah dalam ruang yang dinamakan Key A Compare key with the first element. If the first element is greater than key, then key is placed in front of the first elemet. Bandingkan Elemen pada Key dengan elemen pertama, jika elemen pertama lebih besar daripada key , tempatkan key di depan elemen pertama.

![image](https://encrypted-tbn2.gstatic.com/images?q=tbn:ANd9GcTrxEYX3_SJp0qufdbBCHj-Fi0tT6sP0onb6C7NOFI0QeGQdkcE)

2. Tahap pertama dua elemen telah diurutkan, Ambil elemen ketiga dan bandingkan dengan elemen sebelah kirinya. Letakkan elemen paling kecil paling depan. Jika tidak lebih kecil maka tempatkan di ujung array.

![image](https://encrypted-tbn1.gstatic.com/images?q=tbn:ANd9GcR6iASzM1lFctt_3F6yCIBeFBhLs5PB_s0cEJcYJPG_fHcmaIxK)

3. Langkah ketiga sama halnya dengan di atas

![image](https://miro.medium.com/v2/resize:fit:720/format:webp/1*imvTb49VbjA0MGr23dDvYA.png)


---
<h1 id="JS9">9. Selection Sort and Merge Sort</h1>

### Selection Sort

Selection sort adalah sebuah algoritma yang digunakan untuk mencari dna memilih element/data terkecil dalam sebuah list yang belum tersusun dalam setiap iterasi dan menempatkan elemen terkecil di urutan paling depan dari urutan list data.

Cara kerja Selection Sort : 

1. Tentukan elemen pertama dari urutan menjadi elemen terkecil masukkan sebagai elemen “minimum”.

![image](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-0-initial-array.png)

2. Bandingkan mnimum dengan urutan elemen kedua. Jika elemen kedua lebih kcil dibandingkan minimum, jadikan elemen kedua sebagai minimum. Bandingkan kembali minimum dengan elemen ketiga. Lakukan secara terus menerus samapai dengan elemen yang terakhir. 

![image](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-0-comparision.png)

3. Setelah setiap perulangan, minimum ditempatkan di paling depan urutan list data

![image](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-0-swapping.png)

4. pada setiap pengulangan, indeksasi (pemberian alamat) dimulai dari elemen pertama dari list . langkah 1-3 dilakukan berulang kali samapi keseluruhan elemen digantikan pada posisi yang terurut.

![image](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-0.png)

![image](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-1.png)

![image](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-2.png)

![image](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-3_1.png)

### Merge Sort

Merge sort is a sorting technique based on divide and conquer technique. With worst-case time complexity being ?(n log n), it is one of the most respected algorithms. Merge sort first divides the array into equal halves and then combines them in a sorted manner.
Merge sort adalah sebuah teknik pengurutan berdasarkan teknik membagi dan menggabungkan (divide and conquer). Menggunakan merge sort hal pertama yang dilakukan adalah membagi sama banyak data kemudian menggabungkannya dalam list data yang terurut.

![image](https://miro.medium.com/v2/resize:fit:720/format:webp/0*j6Mv2RSQfW3F9Ouk)


---
<h1 id="JS10">10. Shell Sort and Quick Sort</h1>

### Shell Sort

Shell sort adalah sebuah algoritma dengan pengurutan elemen pertama memiliki jarak interval dengan elemen yang akan dibandingkan. Pada prinsipnya sama dengan Insertion sort pada pokok bahasan sebelumnya.
Dalam pengurutan Shell Sort, elemen/data diurutkan dengan interval yang terukur. Jarak interval diantara elemen semakin lama semakin mengecil berdasarkan berapa kali pengulangan pengurutan dilakukan. Kemampuan dari shell sort ini tergantung pada tipe dari tipe ururtan yang digunakan dalam sebuah array yang disediakan. 

Cara Kerja Shell Sort :

1. Urutkan array yang ada 

![image](https://miro.medium.com/v2/resize:fit:640/format:webp/1*WgxF6nj4iL5VPpFtoWEFow.png)

2. Menggunakan formula original shell (N/2, N/4, ...1) sebagai interval yang akan digunakan dalam algoritma. 
Pada fase pertama, jika besar array N=8 maka jarak interval elemen menggunakan rumus N/2 = 4, akan dibandingkan dan ditukar jika belum sesuai urutan.
a. Elemen indeks ke 0 dibandingkan dengan indeks elemen ke 4.
b. Jika elemen ke 0 lebih besar daripada ke 4 lalu elemen ke 4 disimpan ke dalam variabel temp dan elemen ke 0 (elemen 0 nilai lebih besar) dipindahkan ke posisi elemen ke 4 dan elemen yang disimpan dalam variabel temp pindahkan ke posisi ke 0.

![image](https://miro.medium.com/v2/resize:fit:640/format:webp/1*vbBw0Uy6CQSWJtd3qgK5Xg.png)

Proses pengulangan pengurutan ini berlangsung untuk keseluran elemen yang ada

![image](https://miro.medium.com/v2/resize:fit:640/format:webp/1*DvSSZBygxkM5CSm1TDKEGA.png)

3. Pada pengulangan kedua rumus formula interval yang digunakan N/4 = 8/4 = 2

![image](https://miro.medium.com/v2/resize:fit:640/format:webp/1*ZREOuTl2xWtEjOtL4DLT6A.png)

![image](https://miro.medium.com/v2/resize:fit:640/format:webp/1*hqC5yDLSLjMxYgcptadtgQ.png)

Elemen ke 2 dan ke 4 dibandingkan sesuai rumus interval = 2, elemen ke 0 dan 2 juga dibandingkan. 

4. Proses yang sama berlaku untuk elemen yang tersisa

![image](https://miro.medium.com/v2/resize:fit:640/format:webp/1*1GstfkIVDIRVahGbhAQnUA.png)

5. Pada akhirnya samapai pada fase akhir di saat interval N/8 = 8/8 = 1, elemen dengan interval 1 diurutkan

![image](https://miro.medium.com/v2/resize:fit:640/format:webp/1*kOMPrYJgKRdQuO4zlXS30Q.png)

### Quick Sort

Seperti halnya Merge sort, Quick sort menggunakan algoritma divide dan conquer. Algoritma ini mengambil sebuah elemen sebagai pivot dan memisahkan array yang ada disekitar pivot. Terdapat banyak versi dari Quick sort yang mengambil pivot dengan cara yang berbeda-beda. Diantaranya :
1. Selalu mengambil elemen pertama sebagai pivot.
2. Selalu mengambil eleme terakhir sebagai pivot
3. Elemen acak sebagai pivot
4. Elemen yang di tengah sebagai pivot
Kunci dari proses quick sort adalah partisi(). Target dari partisi adalah array sebuah array dan sebuah elemen x dari array sebagai pivot, letakkan x pada posisi yang benar dalam array yang terurut dan letakkan semua elemen yang lebih kecil (lebih kecil dari x) sebelum elemen x, dan tempatkan semua elemen yang lebih besar dari x setelah x. Semua proses ini seharusnya seleai dalam waktu yang sama.

![image](https://miro.medium.com/v2/resize:fit:640/format:webp/1*wzU60PoEo-CsLnJaptJVVQ.png)


---
<h1 id="JS11">11. Linear Search and Binary Search</h1>

### Linear Search

Algoritma pencarian dapat dijelaskan sebagai berikut: pencarian dimulai dari data paling awal, kemudian ditelusuri dengan menaikkan indeks data, apabila data sama dengan kunci pencarian dihentikan dan diberikan nilai pengembalian true, apabila sampai indeks terakhir data tidak ditemukan maka diberikan nilai pengembalian false.

![image](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-comparisons.png)

### Binary Search

Salah satu syarat agar pencarian biner dapat dilakukan adalah data sudah dalam keadaan urut. Dengan kata lain, apabila data belum dalam keadaan urut, pencarian biner tidak dapat dilakukan.

![image](https://media.licdn.com/dms/image/D5612AQHjAClulnFm7A/article-cover_image-shrink_720_1280/0/1699523260231?e=2147483647&v=beta&t=kZuKYaR_iWDJIbMVMofRszEtCTD8hKYQ-OOHxqS4760)


---
<h1 id="JS12">12. Tree</h1>

### Tree 

Struktur data lainnya seperti array, linked list, stack, dan queue merupakan struktur data linier yang menyimpan data secara berurutan. Untuk melakukan operasi apa pun dalam struktur data linier, kompleksitas waktu meningkat seiring dengan bertambahnya ukuran data. Namun, hal ini tidak dapat diterima dalam dunia komputasi saat ini.
Tree memungkinkan akses data yang lebih cepat dan mudah karena merupakan struktur data non-linier.

![image](https://miro.medium.com/v2/resize:fit:677/1*Z89j_NoDx9HkFcPHy3rPZg.png)


---
<h1 id="JS13">13. Graphs</h1>

### Graphs

Graphs terdiri dari sekumpulan objek yang terhubung satu sama lain melalui tautan. Objek-objek yang saling berhubungan diwakili oleh titik-titik yang disebut simpul , dan tautan yang menghubungkan simpul-simpul tersebut disebut tepi.

![image](https://logicmojo.com/assets/dist/new_pages/images/graph-data-structures.png)

