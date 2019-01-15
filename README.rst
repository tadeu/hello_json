.. image:: https://travis-ci.org/tadeu/hello_json.svg?branch=master
    :alt: Travis Status
    :scale: 100%
    :target: https://travis-ci.org/tadeu/hello_json

This is a simple example on how to build a program that uses `nlohmann_json` using the conda package manager.

It tests the following steps:

.. code-block:: bash

  # Creates a conda environment that contains only nlohmann_json and CMake
  conda create -c conda-forge -n hello_json "nlohmann_json>=3.5.0" "cmake>=3.10" --no-default-packages

  # Activates this environment (puts things on PATH and configure environment variables that may be needed)
  source activate hello_json

  # Builds the code using CMake
  mkdir -p build && cd build
  cmake .. -G "Unix Makefiles"
  cmake --build . --config Release
