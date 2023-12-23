#include <stdio.h>

int main() {
    int choice;

    do {
        printf("Communication Network Layers:\n");
        printf("1. Physical Layer\n");
        printf("2. Data Link Layer\n");
        printf("3. Network Layer\n");
        printf("4. Transport Layer\n");
        printf("5. Application Layer\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Physical Layer: This layer is responsible for the transmission and reception of raw bit streams over a physical medium.\n");
                break;
            case 2:
                printf("Data Link Layer: This layer provides reliable transmission of data frames between two nodes connected by a physical layer.\n");
                break;
            case 3:
                printf("Network Layer: This layer is responsible for the routing and forwarding of packets across multiple networks.\n");
                break;
            case 4:
                printf("Transport Layer: This layer provides end-to-end communication between two hosts and ensures reliable data delivery.\n");
                break;
            case 5:
                printf("Application Layer: This layer provides services directly to the end user and supports network applications.\n");
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
