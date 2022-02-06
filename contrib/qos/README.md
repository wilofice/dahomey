### QoS (Quality of service) ###

This is a Linux bash script that will set up tc to limit the outgoing bandwidth for connections to the Dahomey network. It limits outbound TCP traffic with a source or destination port of 8333, but not if the destination IP is within a LAN.

This means one can have an always-on dahomeyd instance running, and another local dahomeyd/dahomey-qt instance which connects to this node and receives blocks from it.
