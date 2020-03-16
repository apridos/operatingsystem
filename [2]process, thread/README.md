### Process dan thread

Beberapa istilah:

1. **program** adalah serangkaian instruksi yang kemudian menentukan bagaimana komputer memproses data.
2. **process** merupakan perwujudan dari sebuah program yang dimuat ke dalam memori untuk dieksekusi.
3. **thread** diperoleh dari pembagian-pembagian tugas yang dilakukan dalam sebuah **process**.
4. **shared memory** adalah bagian memori yang dapat diakses bersamaan oleh beberapa program dengan tujuan menyediakan komunikasi antara program-program tersebut atau menghindari salinan yang berlebih.
5. **context switching** adalah prosedur untuk menyimpan keadaan sebuah **process**/**thread** yang kemudian dapat digunakan lagi ketika **process**/**thread** itu perlu dieksekusi kembali.

> Secara sederhana **thread** adalah cara sebuah program untuk membagi-baginya dalam beberapa bagian yang dapat dieksekusi serentak.

Pembeda antara *thread* dan *process*

|no|thread|process|
|---|---|---|
| 1 | berjalan pada **shared memory** | berjalan pada ruang memori yang terpisah satu dengan yang lain |
| 2 | **thread** merupakan bagian dari **process** | **process** adalah entitas yang dependen (berdiri sendiri) |
| 3 | **thread** switch mudah dan cepat dilakukan | **process** switch merupakan operasi yang 'mahal' |
