FROM ubuntu:latest

RUN apt-get update && apt-get install -y g++ libcpp-httplib-dev

WORKDIR /usr/src/app

COPY . .

RUN g++ -std=c++11 -o main main.cpp -lpthread

CMD ["./main"]