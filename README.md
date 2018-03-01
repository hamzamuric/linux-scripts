# My linux scripts

kill-script toggles process, so if it is running it kills it, and if it's not then it runs it.
kill-script needs process id, so you can give it with a few piped commands.
example:
```{bash}
$ ps -aux | grep <process_name> | ~/./kill-script
```
(if script is in your home directory)

Tested on gnome calculator :D
