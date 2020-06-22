FROM ubuntu:18.04

COPY . /

ENV LC_ALL=C.UTF-8 LANG=C.UTF-8
RUN apt-get update && apt-get install -y cmake g++ vim python3.6 python3-pip

WORKDIR /cpp
RUN make

WORKDIR /py
RUN pip3 install pipenv && pipenv install --system --deploy --ignore-pipfile

WORKDIR /experiments
