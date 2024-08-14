## A Quick CMake Starter Framework

`brew install catch2`

Install vscode extension `matepek.vscode-catch2-test-adapter`

Make sure this is set in settings `"cmake.ctest.testExplorerIntegrationEnabled": false` otherwise
you'll get CTest and Catch displayed in test explorer

For use in VSCode. To select debug or release run "CMake: Select Configure Preset"

Might want to put tests in a separate subdirectory.

Note how code shared with tests is placed in a static library.