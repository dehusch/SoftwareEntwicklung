#include <stdio.h>

int main() {
    int choice;

    do {
        printf("TCP/IP Reference Model - Network Communication Layers\n");
        printf("1. Application Layer\n");
        printf("2. Transport Layer\n");
        printf("3. Internet Layer\n");
        printf("4. Network Interface Layer (Link Layer)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Application Layer: This layer provides services directly to the end-user applications. 
                        It includes protocols such as HTTP, FTP, SMTP, and DNS.\n");
                break;
            case 2:
                printf("Transport Layer: This layer is responsible for end-to-end communication between hosts. 
                        It provides reliable and connection-oriented or unreliable and connectionless data transfer. It includes protocols such as TCP and UDP.\n");
                break;
            case 3:
                printf("Internet Layer: This layer is responsible for routing packets across different networks. It provides logical addressing and fragmentation of data. It includes protocols such as IP and ICMP.\n");
                break;
            case 4:
                printf("Network Interface Layer: This layer is responsible for the physical transmission of data over the network. It includes protocols such as Ethernet and Wi-Fi.\n");
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("\n");
    } while (choice != 0);

    return 0;
}

