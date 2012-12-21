### Generate Emails ###
protoc --cpp_out=./generated/cpp/emails/ -I./protos/emails ./protos/emails/*.proto

### Generate Model Classes ###
protoc --cpp_out=./generated/cpp/models/ -I./protos/models ./protos/models/*.proto

### Generate Request Classes ###
protoc --cpp_out=./generated/cpp/requests/ -I./protos/requests ./protos/requests/*.proto