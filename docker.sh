#!/bin/bash
sudo systemctl start docker
docker start MyToolAnalysis
docker attach MyToolAnalysis
