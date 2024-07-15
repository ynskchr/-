#include <stdio.h>
#include <string.h>
typedef struct {
    char sender[50];
    char recipient[50];
    char address[100];
    int weight;
    int cost;
} Parcel;
#define MAX_HISTORY_SIZE 100
Parcel history[MAX_HISTORY_SIZE];
int historyCount = 0;
void acceptParcel() {
    Parcel parcel;

    printf("Accepting a new parcel\n");

    printf("Enter parcel details:\n");
    printf("Your name: ");
    scanf(" %[^\n]s", parcel.sender);

    printf("Recipient: ");
    scanf(" %[^\n]s", parcel.recipient);

    printf("Address: ");
    scanf(" %[^\n]s", parcel.address);

    printf("Weight (in grams): ");
    scanf("%d", &parcel.weight);

    printf("Cost: ");
    scanf("%d", &parcel.cost);
    if (historyCount < MAX_HISTORY_SIZE) {
        history[historyCount] = parcel;
        historyCount++;
        printf("\nParcel accepted!\n");
    } else {
        printf("\nParcel history is full. Cannot accept a new parcel.\n");
    }
}
void sendParcel() {
    Parcel parcel;

    printf("Sending a parcel\n");

    printf("Enter parcel details:\n");
    printf("Your name: ");
    scanf(" %[^\n]s", parcel.sender);

    printf("Recipient: ");
    scanf(" %[^\n]s", parcel.recipient);

    printf("Address: ");
    scanf(" %[^\n]s", parcel.address);

    printf("Weight (in grams): ");
    scanf("%d", &parcel.weight);

    printf("Cost: ");
    scanf("%d", &parcel.cost);
    if (historyCount < MAX_HISTORY_SIZE) {
        history[historyCount] = parcel;
        historyCount++;
        printf("\nParcel sent!\n");
    } else {
        printf("\nParcel history is full. Cannot send a new parcel.\n");
    }
}
void printHistory() {
    printf("History of accepted and sent parcels:\n");

    for (int i = 0; i < historyCount; i++) {
        printf("Parcel %d:\n", i + 1);
        printf("   Sender: %s\n", history[i].sender);
        printf("   Recipient: %s\n", history[i].recipient);
        printf("   Address: %s\n", history[i].address);
        printf("   Weight: %d g\n", history[i].weight);
        printf("   Cost: %d\n", history[i].cost);
    }
}

int main() {
    printf("Parcel Acceptance and Delivery Service\n");

    int choice;
    printf("Choose an option:\n");
    printf("1. Accept a parcel\n");
    printf("2. Send a parcel\n");
    printf("3. Print parcel history\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            acceptParcel();
            break;
        case 2:
            sendParcel();
            break;
        case 3:
            printHistory();
            break;
        default:
            printf("Invalid option selected.\n");
            break;
    }

    return 0;
}

