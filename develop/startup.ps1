# build image
docker build -t postseis-dev:1.0 -f dockerfile.dev .
# start docker compose
docker-compose -p 'postseis-dev' -f docker-compose-dev.yml up -d