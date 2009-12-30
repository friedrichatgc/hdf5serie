#! /bin/sh

valgrind --help >& /dev/null
if [ $? -ne 0 ]; then
  echo "WARNING!"
  echo "valgrind not found!"
  echo "Skipping valgrind test of testdump"
  exit 0
else
  if test -x ../dump/.libs/lt-h5dumpserie; then
    valgrind --error-exitcode=1 ../dump/.libs/lt-h5dumpserie testcompound.h5/serie1d
    valgrind --error-exitcode=1 ../dump/.libs/lt-h5dumpserie test2d.h5/timeserie
  else
    valgrind --error-exitcode=1 ../dump/h5dumpserie testcompound.h5/serie1d
    valgrind --error-exitcode=1 ../dump/h5dumpserie test2d.h5/timeserie
  fi
fi