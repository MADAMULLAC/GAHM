#Read Me

##Project Plan
Please find the project plan outlined [here](https://github.com/MADAMULLAC/GAHM/blob/master/ProjectPlan.md "Project Plan")

##Below will contain the details on how to run and control the game and will be filled in over time.

## Prerequisites
- Unix like command line (terminal, cygwin, etc…) to run makefile
- GNU Autotools
- SDL2 (for windows follow [this tutorial on how to build and include SDL](http://www.libsdl.org/extras/win32/cygwin/README.txt "SDL windows Tutorial link"))
- g++ (or other c++ compiler)
- boost
- openGL 3.0+
- GLEW
- GLM

## How to get dependencies, build and run.

### Fedora, RedHat, Other Yum package manager based OS's


To get the dependencies assuming you have a fresh install of the latest version, simply run the following command:

> $ yum install libtool boost-* glew-devel SDL2_* glm-devel gcc-c++

**Don't include the $ sign**

Then from the game root directory run the following commands:

``` bash
$ autoreconf -i
$ ./configure
$ make
```

This will produce an executable in the src directory called "shaderexample"; to run execute the game use
> $ ./src/shaderexample

### Windows
You will need to install [cygwin](https://www.cygwin.com/) and include the dependencies listed above during the install stage.
If you do not have those packages and already have cygwin installed; simply re-run the installer and include the packages as before
and cygwin will install them.

Please note, that GLM is still not being linked and the makefile is still under development. Windows will hopefully be completed soon.

### OSx
To get the above packages I would recommend using [brew](http://brew.sh/) and [MacPorts](https://www.macports.org/) as these will do all the package management for you; both are fairly simple to install by following the simple instructions on their relevant websites.
Once again ensure you have the above packages included. I hope to include a simple terminal command to install all of the dependencies
in time.

You will also need xCode installed as this will include dependencies required by the game.

## Aim of the game
