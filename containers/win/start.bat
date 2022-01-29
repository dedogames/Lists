@ECHO OFF
docker build --build-arg CACHE_UNZIP="C" --tag lists:debug -f ./containers/Dockerfile .
docker-compose -f containers/docker-compose.yml up -d