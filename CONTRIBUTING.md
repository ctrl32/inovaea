# Contributing to inovaea

Thanks for your interest in inovaea!

## How to contribute

1. Open an issue first for larger changes so we can agree on the approach.
2. Fork the repository and create a branch from `main`.
3. Keep changes focused – one topic per pull request.
4. Make sure CI passes (firmware build, hardware checks, REUSE lint).
5. Open a pull request.

## Developer Certificate of Origin (DCO)

All commits must be signed off. By signing off you certify the
[Developer Certificate of Origin](https://developercertificate.org/), i.e. that
you have the right to submit the contribution under the project's licenses.

```bash
git commit -s -m "Short description of the change"
```

This adds a `Signed-off-by: Your Name <you@example.com>` line to the commit.

## Licensing of contributions

Contributions are accepted under the license of the directory they belong to
(see [LICENSE](LICENSE)). New source files should start with an SPDX header:

```c
// SPDX-FileCopyrightText: 2026 Your Name
// SPDX-License-Identifier: Apache-2.0
```

## Coding style

- Firmware: follow `.editorconfig`, 4 spaces, no tabs.
- Hardware: KiCad 9, run ERC and DRC before committing; no errors allowed.
- Commit messages: imperative mood, short subject line (≤ 72 characters).
