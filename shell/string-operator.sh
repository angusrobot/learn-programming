#!/bin/bash

raw_str=" 'fejw90 =0vjv'/'fej9w0 f1q3bj'/'aijofew kc2f-ca'.py  "

echo -e "\n（字符串显示在逗号之间，以体现空格）\n"

echo "原始字符串: ,${raw_str},"

trim_left_right() {
    local str="$1"
    echo ${str}
}

raw_str=$(trim_left_right "${raw_str}")
echo "删除首位冗余空格: ,${raw_str},"

get_dirname() {
    dirname "${raw_str}"
}
get_file() {
    basename "${raw_str}"
}
get_file_subffix() {
    get_file | cut -d. -f2
}
get_file_name() {
    get_file | cut -d. -f1
}

echo "获取文件路径：,$(get_dirname),"
echo "获取文件：,$(get_file),"
echo "获取文件名：,$(get_file_name),"
echo "获取文件名后缀：,$(get_file_subffix),"

echo "当前shell：${SHELL}"
echo "当前shell名：${SHELL##*/}"
