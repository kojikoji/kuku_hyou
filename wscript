APPNAME = 'test-project'
VERSION = '1.0.0'

srcdir = '.'
blddir = 'build'

def set_options(opt):
    opt.tool_options('compiler_cxx')
    pass

def configure(conf):
    conf.check_tool('compiler_cxx')
    pass

def build(bld):
    bld(features = 'cxx cprogram',
        source = 'src/kuku.cpp',
        include = 'include',
        target = 'kuku')
    pass

def shutdown(ctx):
    pass
    
