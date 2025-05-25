# lab08
## Установка docker на Kali: 

```bash
$ sudo apt update

$ sudo apt install -y docker.io docker-compose
...
$ sudo systemctl enable --now docker
...

#Проверка
$ sudo docker run hello-world
Unable to find image 'hello-world:latest' locally
latest: Pulling from library/hello-world
e6590344b1a5: Pull complete 
Digest: sha256:dd01f97f252193ae3210da231b1dca0cffab4aadb3566692d6730bf93f123a48
Status: Downloaded newer image for hello-world:latest

Hello from Docker!
This message shows that your installation appears to be working correctly.

To generate this message, Docker took the following steps:
 1. The Docker client contacted the Docker daemon.
 2. The Docker daemon pulled the "hello-world" image from the Docker Hub.
    (amd64)
 3. The Docker daemon created a new container from that image which runs the
    executable that produces the output you are currently reading.
 4. The Docker daemon streamed that output to the Docker client, which sent it
    to your terminal.

To try something more ambitious, you can run an Ubuntu container with:
 $ docker run -it ubuntu bash

Share images, automate workflows, and more with a free Docker ID:
 https://hub.docker.com/

For more examples and ideas, visit:
 https://docs.docker.com/get-started/
```
## Проверка docker:
```bash
$ sudo docker build -t hello-app .
[sudo] пароль для neddsr: 
[+] Building 6.0s (14/14) FINISHED                                             docker:default
 => [internal] load build definition from Dockerfile                                     0.0s
 => => transferring dockerfile: 386B                                                     0.0s 
 => [internal] load metadata for docker.io/library/ubuntu:18.04                          1.4s 
 => [internal] load .dockerignore                                                        0.0s
 => => transferring context: 2B                                                          0.0s 
 => [1/9] FROM docker.io/library/ubuntu:18.04@sha256:152dc042452c496007f07ca9127571cb9c  0.0s 
 => [internal] load build context                                                        0.0s 
 => => transferring context: 17.58kB                                                     0.0s 
 => CACHED [2/9] RUN apt update                                                          0.0s 
 => CACHED [3/9] RUN apt install -yy gcc g++ cmake                                       0.0s 
 => [4/9] COPY . print/                                                                  0.1s 
 => [5/9] WORKDIR print                                                                  0.0s 
 => [6/9] RUN cmake -H. -B_build -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=_ins  2.6s 
 => [7/9] RUN cmake --build _build                                                       1.0s
 => [8/9] RUN cmake --build _build --target install                                      0.5s 
 => [9/9] WORKDIR _install/bin                                                           0.0s 
 => exporting to image                                                                   0.1s 
 => => exporting layers                                                                  0.1s 
 => => writing image sha256:6601f9f6b303a086e0cd7c322f8c88525f2f59e5558b94b6f9ec0b86217  0.0s 
 => => naming to docker.io/library/hello-app

$ sudo docker run --rm hello-app  
Hello worldWhat is your name?Hello world from # да вывод не очень, но правильный
```

