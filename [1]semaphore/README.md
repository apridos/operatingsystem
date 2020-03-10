### Semaphore

#### Apa itu semaphore?

Pada dasarnya _semaphore_ adalah sebuah bilangan bulat yang nilainya tidak diperbolehkan lebih kecil dari nol. Ada dua operasi utama yang dapat dilakukan pada sebuah semaphore: `wait()` dan `post()`.

#### Semaphore pertamamu!
Misalnya kamu punya _resource_ sebanyak **n**, maka nilai dari _semaphore_-mu juga adalah **n**.

Di bawah, misalnya kamu punya _resource_ sebanyak empat. _Resource_ kosong kemudian akan diberi label `y`, dan _resource_ yang digunakan diberi label `N`.

| r1 | r2 | r3 | r4 |
|---|---|---|---|
| y | y | y | y |


#### wait()
Operasi `wait()` akan mengurangi nilai dari _semaphore_ sebanyak satu, dengan syarat nilai _semaphore_ yang akan dikurangi lebih besar dari nol. Apabila _semaphore_ memiliki nilai 0 dan dilakukan operasi `wait()` terhadapnya, maka entitas yang memanggil operasi `wait()` akan diblok dan diperintahkan untuk menunggu (mungkin juga mengantri) hingga nilai _semaphore_ lebih besar dari nol. Setelah nilai _semaphore_ lebih besar dari 0, entitas dalam antrian kemudian diperbolehkan melanjutkan operasi `wait()`-nya.

Entitas `x` melakukan operasi `wait()` pada _semaphore_ yang kita miliki sebelumnya.

| r1 | r2 | r3 | r4 |
|---|---|---|---|
| N | y | y | y	|

Dalam hal ini entitas `x` menyatakan bahwa ia akan menggunakan sebuah _resource_ yang tersedia.  Maka jumlah _resource_ yang kini tersedia adalah sebanyak 3.

Secara berturut-turut, entitas `y`, `z`, `a` juga melakukan operasi `wait()` pada _semaphore_ sehingga tidak lagi ada _resource_ yang tersedia dengan kata lain, _semaphore_ bernilai 0.

| r1 | r2 | r3 | r4 |
|---|---|---|---|
| N | N | N | N |

ternyata, entitas `b` juga ingin melakukan operasi `wait()` pada _semaphore_. Karena _semaphore_ bernilai 0, entitas `b` dimasukkan ke dalam sebuah antrian untuk menunggu ada _resource_ yang dapat digunakan.

| q1 | q2 | q3 | ... |
|---|---|---|---|
| b | - | - | - |


#### post()
Lalu kapan _semaphore_ mengalami pertambahan nilai? Operasi `post()` menambahkan nilai pada sebuah _semaphore_. Seperti yang 
 
