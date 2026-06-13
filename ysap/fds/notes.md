./automatic-fds > /dev/null to redirect stdout

exec 3>&1 to write stderror to stdin
exec 3>&- to close it out
exec 3>my-file.txt
echo bar >&3 write echo to fds 3

Loop over calling check-fd program
$ for i in {0..1024}; do ./check-fd "$i"; done

ls -lh /proc/$$/fd
