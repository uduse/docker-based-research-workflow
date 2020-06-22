#!/usr/bin/env python3

import sys

import numpy as np


def main():
    num = int(sys.argv[1])
    mean = float(sys.argv[2])
    std = float(sys.argv[3])
    for _ in range(num):
        print(np.random.normal(mean, std))
    print("done.")


if __name__ == '__main__':
    main()
