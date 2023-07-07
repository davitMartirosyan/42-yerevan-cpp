#bin/bash
find ./cppMod* -type f -perm +111 | xargs rm -rf
find ./cppMod* -name "*.o" | xargs rm -rf
git add . && git commit -m "$1" && git push
