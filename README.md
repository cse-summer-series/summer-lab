# CSE Summer Series — C Lab

A Linux environment for the [CSE Summer
Series](https://cse-summer-series.github.io/2026/) programming activities.
Click the button below to open it in a GitHub Codespace — you get a full
terminal with `gcc` (and AddressSanitizer) already installed, right in your
browser.

**No payment method required.** Codespaces run on your own GitHub account's
free monthly allowance (120 core-hours and 15 GB of storage on a free account)
— far more than you'll need this summer. If an account has no card on file,
GitHub blocks further use rather than charging you, so you can't be billed by
accident. Stop or delete your codespace when you're done. Questions or trouble?
Email Joe at jpolitz@ucsd.edu.

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/cse-summer-series/summer-lab)

## What to do

Open `lastword.c` and follow the numbered steps in the comment at the top of the
file. The short version:

1. `gcc -o lastword lastword.c && ./lastword` — run it, and notice the answer looks off.
2. `gcc -g -fsanitize=address -o lastword lastword.c && ./lastword` — let AddressSanitizer find the bug.
3. Ask an AI assistant to help you fix it, rebuild with `-fsanitize=address`, and confirm it's clean.

Then report back on Discord. Stuck anywhere? That's expected — ask on Discord, or
ask your AI assistant for help.
