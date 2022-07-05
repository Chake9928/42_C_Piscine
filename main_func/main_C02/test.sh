#!/bin/bash

test_dir="$(pwd)"
root_dir="$(dirname "$test_dir")"

min_index=0
max_index=12

if [ ! -z "$1" ]; then
    min_index=$1
    max_index=$1
fi

for ((i=${min_index} ; i<=${max_index} ; i++)); do
    # get index
    index="$i"
    if [ $i -lt 10 ]; then
        index="0${index}"
    fi

    echo "======= Test ${index} ======="

    # get file path
    src_dir="${root_dir}/ex${index}"
    if [ ! -d ${src_dir} ]; then
        echo "ERROR: ${src_dir} does not exist"
        continue
    fi
    src_file=$(find ${src_dir} -name "*.c" -exec basename {} \;)
    if [ -z "$src_file" ]; then
        echo "ERROR: file does not exist"
        continue
    fi
    src_path="${src_dir}/${src_file}"
    test_path="${test_dir}/test${index}.c"
    out_name="test${index}.out"

    # norminette
    {
        norminette $src_path
    } || {
        echo "Norminette: ERROR!"
        continue
    }
    echo "Norminette: OK!"

    # compile
    {
        out_dir="${test_dir}/out"
        if [ ! -d ${out_dir} ]; then
            mkdir "${out_dir}"
        fi
        cd "${out_dir}"
        gcc ${src_path} ${test_path} -o ${out_name}
    } || {
        echo "Compile: ERROR!"
        continue
    }
    echo "Compile: OK!"
    
    # execute
    echo "Execute: Start"
    {
        ./${out_name}
    } || {
        echo "Execute: ERROR!"
        continue
    }
    echo "Execute: Finished!"
done
