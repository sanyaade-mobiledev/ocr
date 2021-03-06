EXEC=./smith_waterman_tiled_omp.exe
INPUT_1=./string1-larger.txt
INPUT_2=./string2-larger.txt
TILE_WIDTH=290
TILE_HEIGHT=300

make clean; make compile_omp
for MACH in 16 8 4 2 1; do
        echo "using $MACH"
        /bin/env OMP_NUM_THREADS=$MACH $EXEC $INPUT_1 $INPUT_2 $TILE_WIDTH $TILE_HEIGHT | sed -e '/^Size.*/ d' -e '/^Imported.*/ d' -e '/^Allocat.*/ d' -e '/^Tile.*/ d'
done
