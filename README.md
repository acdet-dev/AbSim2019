# AbSim2019
This repository contains code for companion software for a mechanical abdominal simulator.

The code is primarily written in Python, leveraging Arduino firmware for activating the hardware components.

I have added the virtual environment (venv) for this project to the repo so that one can have all project dependencies when they clone the repository. The reason I did this is because the project uses dependencies that cannot easily be installed through pip or any other Python package manager. The virtual environment points to a specific version of Python that one must have installed in order to run the code. The reason for the specific version is because the project uses a Windows Gtk3 runtime environment that requires this version of Python to work.

You can find the version of Python here: https://www.python.org/downloads/release/python-341/

Please download the 32-bit version.
