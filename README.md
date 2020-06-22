# Docker Based Research Workflow
A simple minimalist example to use docker for your research project.

## Workflow Structure
- develop and test your code locally
- push your code to GitHub and it will trigger a GitHub action
- the action will build a docker image and push it to registry under GitHub Packages
- on a powerful remote machine, pull the image and run experiments

Also see [`presentation.pdf`](./presentation.pdf) for some visual pollution.

## Common Commands
- `docker build .` builds an image
- `docker images` lists all images
- `docker ps -a` lists all containers
- `docker run <image>` runs a container
- `docker run -it <image>` runs a container in interactive mode
- `docker run --gpus all -it <image>` runs a container in interactive mode with GPU support (need to install `nvidia-docker`)
- `docker login <registry> -u <username> -p <password>` logs in a docker registry
- `docker push <registry>:<tag>` pushes an image to a registry
- `docker pull <registry> --all-tags` pulls all images from a registry
- `docker system prune` clears stuff
- `docker exec <container> <command>` runs a command in a container
- `docker cp <container>:<source> <dest>` copies content from a container out
