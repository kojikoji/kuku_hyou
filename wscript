APPNAME = 'test-project'
VERSION = '1.0.0'

srcdir = '.'
blddir = 'build'

def set_options(opt):
    opt.tool_options('compiler_cxx')
    pass

def configure(conf):
    conf.check_tool('compiler_cxx')
    conf.check_cxx(lib = 'cppunit')
    pass

def build(bld):
    bld(features = 'cxx cprogram',
        source = 'src/kuku_test.cpp src/kuku_vec.cpp src/kuku_test_main.cpp',
        include = 'include /usr/local/include',
        lib = 'cppunit',
        libpath = '/usr/local/lib',
        target = 'kuku_test')
    bld(features = 'cxx cprogram',
        source = 'src/kuku_vec.cpp src/kuku.cpp',
        include = 'include /usr/local/include',
        lib = 'cppunit',
        libpath = '/usr/local/lib',
        target = 'kuku')
    pass

def shutdown(ctx):
    pass
    
