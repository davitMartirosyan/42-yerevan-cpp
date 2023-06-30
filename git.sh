#bin/bash
find ./cppMod* -type f -executable | xargs rm -rf
find ./cppMod* -name "*.o" | xargs rm -rf
git add . && git commit -m "$1" && git push
