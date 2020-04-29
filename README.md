# GEF_variable_box
GEF - GDB tool with variable printing in context new monitor box enhancement.

### gdb file with binary debugging info
<p align="center">
  <img src="https://github.com/xinwenli/GEF_variable_box/blob/master/symbol_change_highlight.jpg" alt="logo"/>
</p>

### gdb file with user defined symbol file debugging info
<p align="center">
  <img src="https://github.com/xinwenli/GEF_variable_box/blob/master/no_symbol_monitor.jpg" alt="logo"/>
</p>

### user defined variable symbol rule
  rule defined:<br>
  This app do not use operating system's native debugging format such as stabs, DWARF because it's more universally applied with user defined.<br>
  \# + block function name<br>
  variable name under this block + " " + (p if this is a pointer)+variable length + " " + hex offset from \$rbp<br>
  \# + new block function name<br>
  new variable name + ...<br>

### quick test:
gdb -x PATH/gef.py test_app
