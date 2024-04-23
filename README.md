

# Transmission Control Protocol (TCP), Internet Control Message Protocol (ICMP), and Small Network Configuration

This repository contains the implementation and analysis of the Transmission Control Protocol (TCP), Internet Control Message Protocol (ICMP), and a small network configuration.

## Table of Contents
- [Introduction](#introduction)
- [TCP Client-Server Implementation](#tcp-client-server-implementation)
- [ICMP Analysis with Wireshark](#icmp-analysis-with-wireshark)
- [Small Office Network Configuration](#small-office-network-configuration)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction
This project aims to provide a comprehensive understanding of the TCP and ICMP protocols, as well as demonstrate the configuration of a small office network. It includes a simple implementation of a TCP client-server application, an examination of IP and MAC addresses using Wireshark, and a small office network illustrated and configured using CISCO Packet Tracer.

## TCP Client-Server Implementation
The TCP client-server implementation follows the concept of socket programming. It establishes a connection between a client and a server, allowing them to exchange messages. The code for the TCP client-server implementation can be found in the `src` directory.

- `client.c`: Contains the client-side implementation.
- `server.c`: Contains the server-side implementation.

## ICMP Analysis with Wireshark
The ICMP analysis was performed by pinging the website www.reading.ac.uk and capturing the network traffic using Wireshark. The analysis reveals the IP address and MAC address of the pinged destination. The detailed findings and screenshots can be found in the [report](README.md).

## Small Office Network Configuration
The small office network was illustrated and configured using CISCO Packet Tracer. It includes the connection of devices, IP configuration, wireless router setup, printer setup, and a ping test. The configuration file can be found in the `src` directory.

- `packet.pkt`: Contains the CISCO Packet Tracer configuration for the small office network.

## Usage
To run the TCP client-server application:
1. Compile the `client.c` and `server.c` files using a C compiler.
2. Run the compiled server executable.
3. Run the compiled client executable and observe the message exchange.

To view the small office network configuration:
1. Open the `packet.pkt` file using CISCO Packet Tracer.
2. Explore the network topology, device configurations, and ping test results.

## Contributing
Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE).
