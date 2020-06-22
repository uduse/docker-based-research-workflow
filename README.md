# Docker Based Research Workflow
A simple minimalist example to use docker for your research project.

## Workflow Structure
- develop and test your code locally
- push your code to GitHub and it will trigger a GitHub action
- the action will build a docker image and push it to registry under GitHub Packages
- on a powerful remote machine, pull the image and run experiments

Also see [`presentation.pdf`](./presentation.pdf) for some visual pollution.
