# Contributing

## Project Setup

### Dependencies

* [Visual Studio Code](https://code.visualstudio.com/)
* [Docker](https://www.docker.com/)
  * [Windows/Mac](https://www.docker.com/products/docker-desktop/)
* [Visual Studio Code Remote - Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)

### Setup

1. Read through VSCode's [Getting started](https://code.visualstudio.com/docs/remote/containers#_getting-started) guide for containers to get VSCode ready to utilize the projects devenvironment.
2. Upon opening the project in VSCode a prompt to "Reopen in Container" will appear. Click it and the rest will be done for you automatically.
3. Happy Development!

## Project Standards

### *Any deviation from standards may prevent the pull request from being merged*

### General

* **NEVER commit directly to master or devel**
* Allowed but discouraged
  * Avoid working on a single branch with multiple people

### Branching

* Branches should be used anytime you want to change anything in the code
* Branches should only have one person working on them, with rare exceptions
* Braches should following the naming `<username>-<feature>`
  * `<Username>` should be your GitHub username
  * `<Feature>` should be a quick descriptor

### Pull Requests

* Pull requests should be opened whenever you want to add your branch changes to the code base
* All pull requests should be directed at the `devel` branch
  * `devel` will be merged with `main` by a senior member on a weekly basis upon review
* Your pull request description should include a brief overview of the changes, links to any issues that are resolved, and link Trello cards that the pull request addresses
* To fix formatting issues that may arise in CI, run `./scripts/format.sh` for automatic formating
* **Your pull request MUST pass the automated Continous Integration (CI) tests before being considered for review, exceptions will not be made!**
* Once the Pull Request is ready for review
  * The user should move their Trello card(s) to the `Code Review` section.
  * The user should add the `ready for review` tag to the Pull Request
  * The user may optionally choose to request review two (2) members, one of which must be a senior member
  * If no reviewers are requested, two will be assigned by a senior member, provided the `ready for review` tag has been applied
* In the event of merge conflicts the responsiblity to rebase is on the author
* The pull request may be merged upon approval from two (2) members one of which being a senior member.

### Commits

* Commits should be made often to ensure progress is saved
* **NEVER commit directly to main or devel**
* Commit messages should be succinct, and specific
* Large commits should have a description in addition to a title
* Good examples
  * Added new class template for controller
  * Fixed encoder out of bounds bug
  * Pulled up vcpkg submodule to verison 1.2
* Bad examples
  * Commit
  * Fixes
  * Added feature
  * etc.

### Issues

* Issues should be created in any of the following scenarios (will trace with a Trello card):
  * New feature
  * Bug reports
* The issue should thoroughly explain the outcome and what the expected outcome is
* The issue should have steps to reproduce the bug
* The user should add tags such as `bug` or `help wanted`, but should allow assignment of the issue to be handled by a senior member

### Commenting

* Comments should add information to the code and not be redundant
* All comments should follow the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
* The begining of each file should have a header stating the file name, purpose, and contributors

``` cpp
/*-----------------------------------------------------------------------------
    file name: main.cpp

    Description: Launch the program

    Contributors: Aden Ramirez, Thomas Quillan
-----------------------------------------------------------------------------*/
```

* Comments should be used at begining of any function or class to describe behavior

* Comments should be used when code is not self commenting or complex
* Good examples
  * loop through the array of encoder data to find the largest gap in values
* Bad examples
  * print value

### Documentation

* Documentation should be made for every large portion of the code to explain design philosiphy and expected behavior

* TODO add specifics
