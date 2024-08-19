## A Quick CMake Starter Framework

A quick template repository to provide cmake and unit tests.
Unit test support is via **catch2** which can be installed on a Mac with:

`brew install catch2`

(assuming homebrew is installed). Note this is the v3 version of catch2 which doesn't install as a single header any more but needs adding to the link line as a library. For some reason Linux doesn't have this in its apt repos yet, so you may need to install it manually as per the instructions at https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository. For Windows, I assume the vcpkg route from the same page works (as yet untried).

Install vscode extension `matepek.vscode-catch2-test-adapter` ("C++ TestMate")

Make sure this is set in settings: `"cmake.ctest.testExplorerIntegrationEnabled": false` otherwise
you'll get CTest **and** Catch displayed in test explorer

For use in VSCode. To select debug or release run "CMake: Select Configure Preset" or choose it from the status bar icon if you have it turned on.

Might want to put tests in a separate subdirectory.

Note how code shared with tests is placed in a static library. Bear in mind when creating your application that any code to be unit tested should go in a library so that it can be linked in to the unit test executable.