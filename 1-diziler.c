// Dizilerde toplama
// #include<stdio.h>
// int main(){
//     int dizi[3],top=0;
//     for(int i=0;i<3;i++){
//         scanf("%d",&dizi[i]);
//         top+=dizi[i];
//     }
//     printf("%d",top);
//     return 0;
// }





// dizilerde eleman ekleme
// #include <stdio.h>
// int main() {
//     int array[100], n, position, value;
//     printf("Dizinin eleman sayısını girin: ");
//     scanf("%d", &n);
//     printf("Dizinin elemanlarını girin:\n");
//     for (int i = 0; i < n; i++) {
//         printf("array[%d] = ", i);
//         scanf("%d", &array[i]);
//     }
//     printf("Eklenecek pozisyonu girin (0-%d): ", n);
//     scanf("%d", &position);
//     if (position < 0 || position > n) {
//         printf("Geçersiz pozisyon!\n");
//         return 1;
//     }
//     printf("Eklenecek değeri girin: ");
//     scanf("%d", &value);
//     for (int i = n; i > position; i--) {
//         array[i] = array[i - 1];
//     }
//     array[position] = value;
//     printf("Yeni dizi:\n");
//     for (int i = 0; i <= n; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     return 0;
//





//dizilerde eleman silme
// #include <stdio.h>
// int main() {
//     int array[100], n, position;
//     printf("Dizinin eleman sayısını girin: ");
//     scanf("%d", &n);
//     printf("Dizinin elemanlarını girin:\n");
//     for (int i = 0; i < n; i++) {
//         printf("array[%d] = ", i);
//         scanf("%d", &array[i]);
//     }
//     printf("Silinecek pozisyonu girin (0-%d): ", n - 1);
//     scanf("%d", &position);
//     if (position < 0 || position >= n) {
//         printf("Geçersiz pozisyon!\n");
//         return 1;
//     }
//     for (int i = position; i < n - 1; i++) {
//         array[i] = array[i + 1];
//     }
//     n--;
//     printf("Yeni dizi:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     return 0;
// }





//Sırasız verilen iki diziyi sıralı bir şekilde tek diziye dönüştüren algoritma
// #include <stdio.h>
// int main() {
//   int dizi1[5]={1,5,8,11,12};
//   int dizi2[5]={2,4,6,7,14};
//   int dizi3[10];
//   int i=0,j=0;

// for(int d=0;d<11;d++)
//    {
//       if(dizi1[i]>dizi2[j])
//       {
//        dizi3[d]=dizi2[j];
//        j++;
//       }
//       else
//       {
//        dizi3[d]=dizi1[i];
//        i++;
//       }
//    }
// for(i=0;i<9;i++)
//    {
//    printf("%d\n",dizi3[i]);
//    }
// return 0;
// } 





// Adres bulma pointerler
// #include <stdio.h>
// int main()
// {
// int arr[]={1,2,3,4,5};
// int *ptr;
// ptr = &arr[0];
// ptr++;
// printf("\n adres= %p %p %p %p",arr,&arr[0],&arr,*ptr);
// }