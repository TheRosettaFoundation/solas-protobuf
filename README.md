SOLAS Match Protobufs
============================

## What is this?

This is a repository which holds the protobuf files shared
between the SOLAS Match front end (PHP) and the delayed 
processing unit (C++). It holds the proto files that can be
used to generate the relevent classes for each application.

# Contact

Contact:

    Reinhard Schäler <reinhard.schaler@ul.ie>

Coded by:

    David O Carroll <david.ocarroll@ul.ie>

# Dependencies

This repo contains proto files and as such has a dependency 
on Google's protobuf libraries.

To install the C++ protobuf generator run:
* sudo apt-get install protobuf-compiler protobuf-c-compiler

To install the PHP protobuf generator run:
* pear channel-discover pear.pollinimini.net
* pear install drslump/Protobuf-beta

# Instructions
To use this repository simply run the appropriate script in the
root of the repo. Once the files have been generated copy them
to the appropriate location in either SOLAS-Match (PHP) or
Solas-Match-Worker-Daemon (C++).
