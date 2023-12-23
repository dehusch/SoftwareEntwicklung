#include <stdio.h>

int main() {
    // OSI Model
    printf("OSI Model\t\t\t\tTCP/IP Model\n");
    printf("-----------------------------------------------\n");
    printf("Application Layer\t\t\tApplication Layer\n");
    printf("Presentation Layer\t\t\t-\n");
    printf("Session Layer\t\t\t\t-\n");
    printf("Transport Layer\t\t\t\tTransport Layer\n");
    printf("Network Layer\t\t\t\tInternet Layer\n");
    printf("Data Link Layer\t\t\t\tNetwork Interface Layer\n");
    printf("Physical Layer\t\t\t\tPhysical Layer\n");

    // Layer descriptions
    printf("\nLayer Descriptions:\n");
    printf("-----------------------------------------------\n");
    printf("Application Layer: Provides high-level APIs for network communication and enables user applications to access network services.\n");
    printf("Presentation Layer: Responsible for data representation, encryption, and compression.\n");
    printf("Session Layer: Manages the communication sessions between applications.\n");
    printf("Transport Layer: Ensures reliable and efficient data transfer between hosts.\n");
    printf("Network Layer: Handles logical addressing and routing of data packets across different networks.\n");
    printf("Data Link Layer: Provides error-free transmission of data frames over the physical layer.\n");
    printf("Physical Layer: Deals with the physical transmission of data bits over the network medium.\n");

    //Generate a menu for OSI model layers and TCP/IP model layers
    printf("\n\n");
    printf("1 - Application Layer\n");
    printf("2 - Presentation Layer\n");
    printf("3 - Session Layer\n");
    printf("4 - Transport Layer\n");
    printf("5 - Network Layer\n");
    printf("6 - Data Link Layer\n");

    int layer = 0;  //Layer number to be selected
    printf("\nSelect a layer: ");
    scanf("%d", &layer);

    switch (layer) {
        case 1:
            printf("\nApplication Layer\n");
            printf("The application layer is the topmost layer of the OSI model and is the entry point for the data to enter the network.\n");
            printf("It provides services directly to user applications. It interacts with software applications that implement a communicating component.\n");
            printf("The application layer is responsible for identifying and establishing the availability of the intended communication partner and determining whether sufficient resources for the intended communication exist.\n");
            printf("It is also responsible for determining if data can be transmitted reliably and for defining the data format.\n");
            printf("The application layer is not the application itself, although some applications may perform application layer functions.\n");
            printf("The application layer is often part of an operating system or a library that supports a particular programming language.\n");
            printf("Examples of application layer protocols include HTTP, HTTPS, FTP, SMTP, POP3, IMAP, Telnet, SSH, DNS, DHCP, NTP, SNMP, SIP, and RTP.\n");
            break;
        case 2:
            printf("\nPresentation Layer\n");
            printf("The presentation layer is the sixth layer of the OSI model and is responsible for the formatting and delivery of information to the application layer for further processing or display.\n");
            printf("It relieves the application layer of concern regarding syntactical differences in data representation within the end-user systems.\n");
            printf("It provides independence from differences in data representation (e.g., encryption) by translating from application to network format, and vice versa.\n");
            printf("The presentation layer transforms data into the form that the application accepts.\n");
            printf("This layer formats and encrypts data to be sent across a network, providing freedom from compatibility problems.\n");
            printf("It is sometimes called the syntax layer.\n");
            printf("The presentation layer is usually part of an operating system or a library that supports a particular programming language.\n");
            printf("Examples of presentation layer protocols include TLS, SSL, ASCII, MIME, XDR, and MPEG.\n");
            break;
        case 3:
            printf("\nSession Layer\n");
            printf("The session layer is the fifth layer of the OSI model and is responsible for managing the sessions between computers.\n");
            printf("It establishes, manages, and terminates the connections between the local and remote application.\n");
            printf("It provides for either full-duplex or half-duplex operation and establishes checkpointing, adjournment, termination, and restart procedures.\n");
            printf("The session layer sets up, coordinates, and terminates conversations, exchanges, and dialogues between the applications at each end.\n");
            printf("It deals with session and connection coordination.\n");
            printf("It allows two systems to enter into a dialog by establishing a connection.\n");
            printf("It is responsible for the synchronization of data exchange between two remote devices.\n");
            printf("The session layer is usually part of an operating system or a library that supports a particular programming language.\n");
            printf("Examples of session layer protocols include ASP, ASP.NET, NetBIOS, NFS, PPTP, and SLP.\n");
            break;
        case 4:
            printf("\nTransport Layer\n");
            printf("The transport layer is the fourth layer of the OSI model and is responsible for end-to-end communication between hosts.\n");
            printf("It provides reliable or unreliable delivery of data packets between devices.\n");
            printf("It provides transparent transfer of data between end systems, or hosts, and is responsible for end-to-end error recovery and flow control.\n");
            printf("It ensures complete data transfer.\n");
            printf("The transport layer segments data from the session layer into smaller pieces and ensures each piece is delivered error-free and in order.\n");
            printf("It also ensures that all packets are delivered correctly, in sequence, and without loss or duplication.\n");
            printf("The transport layer is usually part of an operating system or a library that supports a particular programming language.\n");
            printf("Examples of transport layer protocols include TCP and UDP.\n");
            break;
        case 5:
            printf("\nNetwork Layer\n");
            printf("The network layer is the third layer of the OSI model and is responsible for packet forwarding including routing through intermediate routers.\n");
            printf("It provides the functional and procedural means of transferring variable length data sequences from a source to a destination via one or more networks while maintaining the quality of service functions.\n");
            printf("It provides switching and routing technologies, creating logical paths, known as virtual circuits, for transmitting data from node to node.\n");
            printf("It controls the operation of the subnet, deciding which physical path the data should take based on network conditions, priority of service, and other factors.\n");
            printf("It provides the means of transferring variable-length data sequences from a source to a destination host via one or more networks, while maintaining the quality of service and error control functions.\n");
            printf("The network layer is usually part of an operating system or a library that supports a particular programming language.\n");
            printf("Examples of network layer protocols include IPv4, IPv6, IPsec, ICMP, IGMP, RIP, and OSPF.\n");
            break;
        case 6: 
            printf("\nData Link Layer\n");
            printf("The data link layer is the second layer of the OSI model and is responsible for node-to-node delivery of data between adjacent nodes.\n");
            printf("It detects and possibly corrects errors that may occur in the physical layer.\n");
            printf("It defines the protocol to establish and terminate a connection between two physically connected devices.\n");
            printf("It provides the functional and procedural means to transfer data between network entities and might provide the means to detect and possibly correct errors that may occur in the physical layer.\n");
            printf("It transfers data frames from one node to another connected directly by physical layer.\n");
            printf("The data link layer is usually part of an operating system or a library that supports a particular programming language.\n");
            printf("Examples of data link layer protocols include PPP, PPTP, L2TP, IEEE 802.2, and ATM.\n");
            break;
        default:
            printf("\nInvalid layer number!\n");
            break;
    }
    
    return 0;
}
