import os

CMAKE = '''\
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

# set the project name
project({})

# add the executable
add_executable(
    ${{PROJECT_NAME}}
    main.cpp
)

'''
os.chdir('white')

def fill_cmake():
    for dir in os.listdir():
        if os.path.isdir(dir):
            with open(f'{dir}/CMakefiles.txt', 'w') as f:
                f.write(CMAKE.format(dir))

if __name__ == '__main__':
    # fill_cmake()


