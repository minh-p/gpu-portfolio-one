# Week 1 - Triangle
I've created a Triangle in SDL3 before. Albeit following the tutorial.
This time I am going not going to follow any example or copy code
following the standard I've described in the [master README.md](../README.md)
when it comes to using resources.

With that said in the first week, I believe leveraging purely from the [official SDL3 documentation](https://wiki.libsdl.org/SDL3/FrontPage) should suffice.

Development officially begins 11/11/2026

## 11/11/2026
Currently, I'm primarily focused on setting up CMake. Previously, I've
used an LLM to setup CMake because I want to get into the nitty gritty
fast.

I have about 2 hours today that I'm able to invest into research
and implementing. I think for now, I should at least set up my CMake
project through [the offical guide](https://cmake.org/cmake/help/latest/guide/tutorial/index.html).

I'm gonna read through this and not use an LLM.

### CMake Discoveries
So I'm primarily concerned with editing the CMakeList.txt file.
Here are just a list of things I've discovered.

First the CMakeLists.txt is a script that gets interpreted I believe.
Certain commands do something like a *project* which causes CMake
do some checks to prepare the development environment. As well, add_executable
creates a target which is a collection of properties. Anyways, I won't
ramble on because of these things can be found on the official guide.

Scope was another interesting concept, the explanation confused me a bit.
It looks like it decides how other things that depends on this target
would inherit its properties. I would have to get more experience understanding
what these dependents are.

### Resource Utilization
I changed my mind on the way I would utilize resources. I won't copy a large chunk of code
but because of my incompetency I have to ask or search for examples such as how to utilize the appstate parameter.
It's also been sometime since I've used C/C++ so the syntax for pointers and address is a bit of a blur.
