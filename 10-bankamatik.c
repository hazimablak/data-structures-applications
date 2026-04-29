#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Musteri yapisi
typedef struct Customer {
    int customerID;
    char name[100];
    struct Customer* prev;
    struct Customer* next;
} Customer;

// Liste basi ve sonu
Customer* head = NULL; 
Customer* tail = NULL; 

// Yeni musteri olusturma
Customer* createCustomer(int customerID, const char* name) {
    Customer* newCustomer = (Customer*)malloc(sizeof(Customer));
    newCustomer->customerID = customerID;
    strcpy(newCustomer->name, name);
    newCustomer->prev = NULL;
    newCustomer->next = NULL;
    return newCustomer;
}

// Musteri ekleme (siraya)
void addCustomer(int customerID, const char* name) {
    Customer* newCustomer = createCustomer(customerID, name);

    if (tail == NULL) {
        // Liste bossa
        head = tail = newCustomer;
    } else {
        // Listeye ekler
        tail->next = newCustomer;
        newCustomer->prev = tail;
        tail = newCustomer;  // Son elemana ekler
    }

    printf("Musteri siraya eklendi: %d - %s\n", customerID, name);
}

// Musteri islemi yapma (girisi siradan al)
void processCustomer() {
    if (head == NULL) {
        printf("Sirada musteri yok.\n");
        return;
    }

    Customer* temp = head;
    printf("Gise islemi yapilan musteri: %d - %s\n", temp->customerID, temp->name);

    // Ilk musteri cikartilir
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL;  // Eger liste bossa, tail de NULL olur
    }
    free(temp);
}

// Listeyi goruntule
void displayQueue() {
    if (head == NULL) {
        printf("Sirada musteri yok.\n");
        return;
    }

    Customer* temp = head;
    printf("\nSiradaki Musteriler:\n");
    while (temp != NULL) {
        printf("%d - %s\n", temp->customerID, temp->name);
        temp = temp->next;
    }
}

// Ana Menu
void menu() {
    printf("\n--- Gise Sira Islemleri ---\n");
    printf("1. Musteri Siraya Ekle\n");
    printf("2. Gise Islemi Yap\n");
    printf("3. Musteri Sirasini Goruntule\n");
    printf("4. Cik\n");
    printf("Seciminizi yapin: ");
}

int main() {
    int choice, customerID;
    char name[100];

    while (1) {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Musteri ID: ");
                scanf("%d", &customerID);
                printf("Musteri Adi: ");
                getchar();  // Yeni satir karakterini temizle
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';  // Yeni satir karakterini temizle
                addCustomer(customerID, name);
                break;

            case 2:
                processCustomer();
                break;

            case 3:
                displayQueue();
                break;

            case 4:
                printf("Cikiliyor...\n");
                return 0;

            default:
                printf("Gecersiz secim!\n");
        }
    }

    return 0;
}
