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
*Any deviation from standards may result in pull request rejection*

### General
- **NEVER commit directly to master or devel**
- Allowed but discouraged
  - Avoid working on a single branch with multiple people
  - Avoid working on a single file with multiple branches

### Branching
- Branches should be used anytime you want to change anything in the code
- Branches should only have one person working on them, rarely should there be more
- Braches should following the naming `username-feature`

### Pull Requests
- Pull requests should be opened whenever you want to add your branch changes to the code base
- All pull requests should be directed at the `devel` branch
  - `devel` will be merged with `master` on a weekly basis upon review
- Your pull request description should include a brief overview of the changes, links to any issues that are resolved, and reference Trello cards that the pull request addresses
- **Your pull request MUST pass the automated Continous Integration (CI) tests before being considered for review**
- Once the Pull Request is ready for review
  - The user should move their Trello card(s) to the `Code Review` section.
  - The user should add the `ready for review` tag to the Pull Request
  - The user may request at minimum two (2) people to review their pull request, one of which being a senior member, or two (2) will be assigned by a senior member.
- The pull request may be merged upon approval from two (2) members one of which being a senior member.

### Commits
- Commits should be made often to ensure progress is saved
- **NEVER commit directly to master or devel**
- Commit messages should be succinct, and not vauge
- Good examples
  - Added new class template for controller
  - Fixed encoder out of bounds bug
  - Pulled up vcpkg submodule to verison 1.2
- Bad examples
  - Commit
  - Fixes
  - Added feature

### Issues
- Issues should be created anytime an issue is discovered somewhere in the code
- Issues should follow the issue template on the `WyroMotion/swerve` repository
- The issue should thoroughly explain the outcome and what the expected outcome is
- The issue should have steps to recreate the issue
- The user should add tags such as `bug` or `help wanted`, but should allow assignment of the issue to be handled by a senior member if the issue is outside the user's workspace
### Commenting
- Comments should add information to the code and not be redundant
- All comments should follow the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
  - Lines should be no longer than 80 characters
- Comments should be used at begining of any function or class to describe behavior
- Comments should be used when code is not self commenting or complex
- Good examples
  - loop through the array of encoder data to find the largest gap in values
- Bad examples
  - print value
### Documentation
- Documentation should be made for every large portion of the code to explain design philosiphy and expected behavior
