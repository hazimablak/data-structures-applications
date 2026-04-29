//Stringin karakter uzunluğu
// #include<stdio.h>
// int main(){
//     int i=0,uzunluk;
//     char chr[100];
//     printf("istedeginiz sozcugu giriniz:");
//     gets(chr);
//     while(chr[i]!='\0')
//         i++;
//         uzunluk=i;
//     printf("Kelimenizin uzunlugu:%d",uzunluk);
//     return 0;
// }


//Stringin tüm karakterlerini büyük yazma
// #include<stdio.h>
// int main(){
//     int i=0;
//     char chr[100],buyuk[100];
//     printf("istedeginiz sozcugu giriniz:");
//     gets(chr);
//     while(chr[i]!='\0')
//     {
//         if(chr[i]>='a' && chr[i]<='z')

//         buyuk[i]=chr[i]-32;
//         else
//         buyuk[i]=chr[i];
//         i++;
//     }
//     buyuk[i]='\0';
//     printf("Kelimemizin yeni hali:");
//     puts(buyuk);
//     return 0;
// }



//İki metni birleştirme
//  #include <stdio.h>
//  int main()
//  {
//  char s1[50], s2[50];
//  int i=0, j=0;
//  printf("\n Metni giriniz :");
//  gets(s1);
//  printf("\n Eklemek istediginiz metni giriniz : ");
//  gets(s2);
//  while(s1[i] != '\0')
//   i++;
//  while(s2[j] != '\0')
//  {
//   s1[i] = s2[j];
//   i++;
//   j++;
//  }
//  s1[i] = '\0';
//  printf("\n Eklemeden sonra olusan yeni metin : ");
//  puts(s1);
//  return 0;
//  }





//Stringi Tersten Yazma
// #include <stdio.h>
// #include <string.h>
//  int main()
//  {
//  char klm[100], ters_klm[100], temp;
//  printf("\n Terslemek istediginiz stringi giriniz  : ");
//  gets(klm);
//  int i=0, j = strlen(klm)-1;
//  while(i < j)
//  {
//   temp = klm[i];
//   klm[i] = klm[j];
//   klm[j] = temp;
//   i++;
//   j--;
//  }
//  printf("\n Stringin Terslenmiş Hali : ");
//  puts(klm);
//  return 0;
//  }



//Stringlerde bir kelimeden sonra istenen kadar karakteri yazmayı
// #include <stdio.h>
// #include <string.h>
//  int main()
//  {
// char klm[100],sonuc[100];
// int i=0,j=0,x,y;
// printf("Metninizi Giriniz :");
// gets(klm);
// printf("Kacinci karekterden sonrasini yazdirmak istersiniz :");
// scanf("%d",&y);
// printf("Kac karakter yazdirmak istersiniz :");
// scanf("%d",&x);
// i=y;
// while(klm[i] != '\0' && x>0){
//     sonuc[j]=klm[i];
//     i++;
//     j++;
//     x--;
// }
// sonuc[j]='\0';
// printf("Istedeiginiz metin :");
// puts(sonuc);
//  return 0;
//  }




//Pointer ile Stringteki büyük ve küçük harf sayısı
// #include<stdio.h>
// int main()
// {
//     char str[100],*pstr;
//     int buyuk=0,kucuk=0;
//     printf("Lutfen Metni Giriniz :");
//     gets(str);
//     pstr=str;
//     while(*pstr != '\0')
//     {
//         if(*pstr>='A' && *pstr<='Z')
//         buyuk++;
//         if(*pstr>='a' && *pstr<='z')
//         kucuk++;
//         pstr++;
//     }
//     printf("\n Buyuk Harf Sayisi : %d",buyuk);
//     printf("\n Kucuk Harf Sayisi : %d",kucuk);
// }




//Aranan Kelimenin Stringde Olup Olmadığını Kontrol Etme Fonksiyonsuz
// #include <stdio.h>
// int main() {
//     char metin[50], kelime[20];
//     int i, j, k, bulundu = 0;
//     printf("Bir metin girin: ");
//     gets(metin);
//     printf("Aranacak kelimeyi girin: ");
//     gets(kelime);

//     for (i = 0; metin[i] != '\0'; i++) {
//         if (metin[i] == kelime[0]) {
//             for (j = 0, k = i; kelime[j] != '\0'; j++, k++) {
//                 if (metin[k] != kelime[j]) {
//                     break;
//                 }
//             }
//             if (kelime[j] == '\0') { 
//                 printf("'%s' kelimesi metin icinde bulundu. Baslangic indeksi: %d\n", kelime, i);
//                 bulundu = 1;
//                 break;
//             }
//         }
//     }

//     if (!bulundu) {
//         printf("'%s' kelimesi metin icinde bulunamadi.\n", kelime);
//     }
//     return 0;
// }



//Aranan Kelimenin Stringde Olup Olmadığını Kontrol Etme Fonksiyonlu
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char metin[50], kelime[15];
//     int i, j, max;
//     printf("Bir metin girin: ");
//     gets(metin);
//     printf("Aranacak kelimeyi girin: ");
//     gets(kelime);
//     max = strlen(kelime);
//     for (i = 0; metin[i] != '\0'; i++) {
//         for (j = 0; j < max && metin[i + j] == kelime[j]; j++);
//         if (j == max) {
//             printf("'%s' kelimesi metin icinde bulundu.Indeksi: %d\n", kelime, i);
//         return 0;
//         }
//     }
//         printf("'%s' kelimesi metin icinde bulunamadi.\n", kelime);
//     return 0;
// }



//Stringlerde Silme İşlemi
//  #include <stdio.h>
//  int main()
//  {
//  char klm[200], silnck_klm[20], sonuc[200];
//  int i=0, j=0, bul=0, k, n=0, m=0;
//  printf("\n Metni Giriniz : ");
//  gets(klm);
//  printf("\n Silinecek Metni Giriniz : ");
//  gets(silnck_klm);
//  while(klm[i]!='\0')
//  {
//   j=0, bul=0, k=i;
//   while(klm[k]==silnck_klm[j] && silnck_klm[j]!='\0')
//   {
//    k++;
//    j++;
//   }
//   if(silnck_klm[j]=='\0')
//    m=k;
//   sonuc[n] = klm[m];
//   i++;
//   m++;
//   n++;
//  }
//  sonuc[n]='\0';
//  printf("\n Yeni Kelime : ");
//  puts(sonuc);
//  return 0;
//  }
