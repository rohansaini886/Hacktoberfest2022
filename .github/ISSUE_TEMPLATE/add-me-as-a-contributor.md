---
name: Add Me as a Contributor
about: Add yourself as a contributor to the project
title: ''
labels: ''
assignees: ''

---

name: Add Me as a Contributor
description: Add yourself as a contributor to the project
title: Add [name] as a contributor
labels: 'contributor'
assignees: rohansaini886
body:
  - type: markdown
    attributes:
     value: |
       # Add Me as a Contributor
  - type: input
    id: name
    attributes:
      label: Name
      description: Your name
      placeholder: Enter your name
    validations:
      required: true
  - type: input
    id: github
    attributes:
      label: GitHub Username
      description: Your GitHub username
      placeholder: Enter your GitHub username
    validations:
      required: true
  - type: textarea
    id: pullrequest
    attributes:
      label: Pull Request
      description: Link(s) to your pull request that have been merged
      placeholder: Enter your pull request link(s) here
    validations:
      required: true
