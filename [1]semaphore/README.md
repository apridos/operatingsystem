### Semaphore

#### Apa itu semaphore?

Pada dasarnya _semaphore_ adalah sebuah bilangan bulat yang nilainya tidak diperbolehkan lebih kecil dari nol. Ada dua operasi utama yang dapat dilakukan pada sebuah semaphore: `wait()` dan `post()`.

#### Semaphore pertamamu!
Misalnya kamu punya _resource_ sebanyak **n**, maka nilai dari _semaphore_-mu juga adalah **n**.

Di bawah, misalnya kamu punya _resource_ sebanyak empat. _Resource_ kosong kemudian akan diberi label `y`, dan _resource_ yang digunakan diberi label `N`

| r1 | r2 | r3 | r4 |
|---|---|---|---|
| y | y | y | y |


#### wait()
 
