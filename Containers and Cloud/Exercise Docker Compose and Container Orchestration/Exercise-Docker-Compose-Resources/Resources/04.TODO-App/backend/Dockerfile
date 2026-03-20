FROM node:lts-buster-slim AS development

# Create app directory
WORKDIR /usr/src/app

COPY package.json .
COPY package-lock.json .
RUN npm ci

COPY . .

EXPOSE 3000

CMD [ "npm", "run", "dev" ]