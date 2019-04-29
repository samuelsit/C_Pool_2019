#!/bin/bash
find . -name '*.sh' | rev | cut -c4- | rev | cut -c3- | rev | cut -d / -f1 | rev