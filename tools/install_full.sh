#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

#source ${ICD_HOME:-$HOME/icd}/tools/install_shared.sh
R CMD INSTALL --no-clean-on-error -d --install-tests ${ICD_HOME:-$HOME/icd}
#"$(ls -t icd*gz | head -1)"
