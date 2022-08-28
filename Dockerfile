FROM alpine
RUN apk add --no-cache g++
COPY . /app
WORKDIR /app
RUN g++ main.cpp
CMD ["./a.out"]