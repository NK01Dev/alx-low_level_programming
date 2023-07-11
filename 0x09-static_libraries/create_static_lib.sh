#!/bin/bash
ar -rc liball.a *.o
ranlib  liball.a
ar -rcs liball.a *.o

