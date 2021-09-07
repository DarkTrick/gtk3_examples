#!/bin/sh

outfile=./a.out

if test -f "${outfile}"; then
    rm ${outfile}
fi

# add all files in the directory to files to compile
#filelist=$(ls *.c)
filelist=${@}

#gcc -g -Wall  `pkg-config --cflags gtk+-3.0` ${filelist} `pkg-config --libs gtk+-3.0`

glib-compile-resources --generate-header ./resources.xml
glib-compile-resources --generate-source ./resources.xml


LEAK_SANITIZER=
#LEAK_SANITIZER=-fsanitize=leak
#LEAK_SANITIZER=-fsanitize=address
# "-g" is for "debug mode"
gcc -g -o ${outfile} ${LEAK_SANITIZER} -Wall  `pkg-config --cflags gtk+-3.0` ${filelist} `pkg-config --libs gtk+-3.0`
#gcc -g -Wall  `pkg-config --cflags gtk+-3.0` ${filelist} `pkg-config --libs gtk+-3.0`

echo "===================== compile finished ======================"

# run program with debug flags
#export G_DEBUG=gc-friendly
#export G_DEBUG=fatal-warnings
#export G_SLICE=always-malloc
#export Valgrind="valgrind --tool=memcheck --leak-check=full --leak-resolution=high"

#${Valgrind} ./a.out

${outfile}
