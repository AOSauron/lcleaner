# lcleaner

**LCleaner - A free alternative to CCleaner, made for managing and cleaning your Linux distro.**

*Open source project, light tool for Linux made with GTKMM*

### Authors

  - GARCIA Guillaume : [AOSauron](https://github.com/AOSauron) @HardLifeDev/hardlifeteam @AOH-DevTeam/aoh-team-one
  - FORTIN Pierre : [AODeltaB](https://github.com/AODeltaB) @HardLifeDev/hardlifeteam @AOH-DevTeam/aoh-team-one

### Supported linux distributions

  - *Ubuntu 14.04* or more
  - *Debian 8* or more

Lower versions should be supported too, but haven't been tested yet.

### Dependencies

  - bash
  - g++
  - libgtkmm-3.0-dev

### Building the sources

##### Recommended way with **cmake**

  - Go to build folder : `cd build/`
  - Prepare the building : `cmake .`
  - Build the sources : `make`
  - Run the test sequence before installing : `make test`
  - You can install the tool with : `make install`

##### Build with the original makefile

  - Build the sources : `make`
  - Run test sequence : `make test`
  - You can install the tool with : `make install`

### Running LCleaner

  - If you have installed the software, you can launch it by typing the command `lcleaner` in your console.
  - If not, go to your building folder (depends on the way you built the sources), then launch `./lcleaner`.

### Examples
