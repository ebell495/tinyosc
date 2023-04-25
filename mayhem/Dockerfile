FROM debian:bookworm as build 
RUN apt update && apt install build-essential clang -y

COPY . /tinyosc
WORKDIR /tinyosc/fuzz
RUN make

# FROM debian:bookworm
# COPY --from=build /tinyosc/fuzz .
