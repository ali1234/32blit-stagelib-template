# 32Blit StageLib Template

![Build](https://github.com/ali1234/32blit-stagelib-template/workflows/Build/badge.svg)

This is a basic template for starting 32blit projects. It shows the basic
code layout and asset pipeline, hopefully giving folk a starting point for
any new projects.

It is based on [32blit-boilerplate](https://github.com/32blit/32blit-boilerplate)
with [StageLib](https://github.com/ali1234/32blit-stagelib) integrated into the build.

## Usage

[Use this template](https://github.com/ali1234/32blit-stagelib-template/generate) to
generate your own project.

* Edit the CMakeList.txt file to set the name of your project
* Edit the metadata.yml file to set the information for your project
* Edit the LICENSE file to set your name on the license
* Write lots of super cool code!

You should then be able to follow the usual build instructions.

For local builds this is:
```
mkdir build
cd build
cmake -D32BLIT_DIR=/path/to/32blit-sdk/ ..
```

Platform/Editor specific insctuctions [can be found in the main 32blit repo](https://github.com/pimoroni/32blit-beta#more-docs)
(For Visual Studio, you should follow the "Option 2" instructions, as the boilerplate does not contain a solution file)
