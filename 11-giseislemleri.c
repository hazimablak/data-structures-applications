#include <stdio.h>
#include <stdlib.h>

// Çift yönlü bağlı liste düğümü
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

// Liste oluşturma fonksiyonu
struct node* listeOlustur(struct node* start) {
    int num;
    struct node *new_node, *ptr;

    printf("-1 girene kadar deger alır.\n");
    printf("Bir Deger Giriniz: ");
    scanf("%d", &num);

    while (num != -1) {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;
        new_node->prev = NULL;

        if (start == NULL) {
            // Eğer liste boşsa
            start = new_node;
        } else {
            // Listeye yeni eleman ekleme
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->prev = ptr;
        }

        printf("\nGirilen Deger: ");
        scanf("%d", &num);
    }

    return start;
}




//Sona Eleman Ekleme
struct node *insert_end(struct node *start)
{
    int sayi;
    struct node*new_node,*ptr;
    new_node =(struct node*)malloc(sizeof(struct node));
    printf("Sona ekleyeceginiz elemani giriniz:");
    scanf("%d",&sayi);
    new_node->data=sayi;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    if(start==NULL){
        new_node->next=NULL;
        new_node->prev=NULL;
        start=new_node;
    }
    else{
        new_node->next=NULL;
        ptr->next=new_node;
        new_node->prev=ptr;
    }
    return start;
}



// Listeyi yazdırma fonksiyonu
struct node *yazdir(struct node* start) {
    struct node* ptr = start;
    printf("Siradakiler: ");
    while (ptr != NULL) {
        printf("\t%d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return start;
}

// Sıra fonksiyonu (Belirli bir koşula göre ilk müşteriyi seçer)
int deger;
struct node* sira(struct node* start) {
    deger = 0;
    struct node *ptr;

    ptr = start;

    while (ptr != NULL) {
        // Eğer veri 300 ile 400 arasında ise
        if (ptr->data < 400 && ptr->data >= 300) {
            deger = ptr->data;
            break;
        }
        ptr = ptr->next;
    }

    // Eğer böyle bir veri bulunmazsa baştaki veriyi alır
    if (deger == 0 && start != NULL) {
        deger = start->data;
        ptr = start;
    }

    // Seçilen müşteriyi listeden çıkar
    if (ptr == start) {
        start = start->next;
        if (start != NULL) {
            start->prev = NULL;
        }
    } else {
        if (ptr->prev != NULL) {
            ptr->prev->next = ptr->next;
        }
        if (ptr->next != NULL) {
            ptr->next->prev = ptr->prev;
        }
    }

    free(ptr);
    return start;
}

int main() {
    int b = 1;
    struct node *start = NULL;

    start = listeOlustur(start);
    yazdir(start);
    // int a=0;
    // printf("\n Kac kisi gelecek?\n");
    // scanf("\n%d",&a);
    // for(int i=0;i<a;i++){
    //     start=insert_end(start);
    // }


    while (b != 0) {
        start = sira(start);
        printf("Siradaki: %d \n", deger);
        yazdir(start);
        start=insert_end(start);
        printf("Siradaki islem icin 1 || Durdurmak icin 0 tıklayın:\n");
        scanf("%d", &b);
        if(b==0){
            yazdir(start);
        }
    }
    
    return 0;
}
