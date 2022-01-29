#!/bin/bash
docker build --build-arg CACHE_UNZIP="C" --tag estrutura_de_dados:debug -f ./containers/Dockerfile .
docker-compose -f containers/docker-compose.yml up -d