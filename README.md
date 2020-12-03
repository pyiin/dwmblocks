# dwmblocks

Modular status bar for dwm written in c.

# Modifying blocks

The statusbar is made from text output from commandline programs.  Blocks are
added and removed by editing the config.h file.

# Pyiin's build

I have dwmblocks read Luke Smith's preexisting scripts
[here in his dotfiles repo](https://github.com/LukeSmithxyz/voidrice/tree/master/.local/bin/statusbar).
So if you want my build out of the box, download those and put them in your
`$PATH`.

# Signaling changes

Most statusbars constantly rerun every script every several seconds to update.
This is an option here, but a superior choice is giving your module a signal
that you can signal to it to update on a relevant event, rather than having it
rerun idly.

For example, the audio module has the update signal 11 by default.  Thus,
running `pkill -RTMIN+11 dwmblocks` will update it.

You can also run `kill -44 $(pidof dwmblocks)` which will have the same effect,
but is faster.  Just add 34 to your typical signal number.

My volume module *never* updates on its own, instead I have this command run
along side my volume shortcuts in dwm to only update it when relevant.

Note that if you signal an unexpected signal to dwmblocks, it will probably
crash. So if you disable a module, remember to also disable any cronjobs or
other scripts that might signal to that module.

# Clickable modules

Like i3blocks, this build allows you to build in additional actions into your
scripts in response to click events.  See the above linked scripts for examples
of this using the `$BLOCK_BUTTON` variable.

For this feature to work, you need the appropriate patch in dwm as well. See
[here](https://dwm.suckless.org/patches/statuscmd/), but remember that for it to be compatible with statuscolors,
you have to modify both dwm, and dwmblocks, as it is done here, and [here](https://github.com/pyiin/dwm).
Credit for those patches goes to Daniel Bylinka (daniel.bylinka@gmail.com).
