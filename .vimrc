syntax on
set number
set tabstop=4
set shiftwidth=0
set backspace=indent,eol,start
filetype plugin on

call plug#begin('~/.vim/plugged')

Plug 'davidhalter/jedi-vim'
Plug 'sheerun/vim-polyglot'
Plug 'nvie/vim-flake8'
Plug 'tpope/vim-commentary'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug '42Paris/42header'
Plug 'octol/vim-cpp-enhanced-highlight'
"Plug 'ycm-core/YouCompleteMe', {'do': 'python3 install.py --clangd-completer'}
"Plug 'valloric/youcompleteme'
Plug 'vim-syntastic/syntastic'
Plug 'preservim/nerdtree'
Plug 'pboettch/vim-cmake'
Plug 'ryanoasis/vim-devicons'
Plug 'tiagofumo/vim-devicons-colorschemes'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'


" Python development plugins

call plug#end()

let g:jedi#force_py_version = 3
let g:jedi#auto_complete = 1
let g:jedi#show_docstring = 1
let g:jedi#show_call_signatures = 1

let g:jedi#auto_completion_start_timeout = 0
let g:jedi#auto_complete_delay = 0
let g:jedi#auto_complete_trigger_length = 1


" Set the Airline theme
let g:airline_theme='onedark'


"Automatic nerdtree
map <C-n> :NERDTreeToggle<CR>
"
"colors devicons
"colorscheme murphy

"DEBUG HIGHLIGHT
highlight DEBUG ctermfg=black ctermbg=yellow guifg=black guibg=yellow

"vim no split
nnoremap <CR> :edit<Space>


"COC stuff
" Use the clangd language server for C and C++
let g:coc_global_extensions = ['coc-clangd']

" Enable completion for C and C++
"autocmd FileType c,cpp inoremap <silent><expr> <TAB>
"     \ pumvisible() ? "\<C-n>" :
"     \ <SID>check_back_space() ? "\<TAB>" :
"     \ coc#refresh()
"function! s:check_back_space()
" let col = col('.') - 1
" return !col || getline('.')[col - 1] =~ '\s'
"endfunction

" Enable diagnostics (errors and warnings)
let g:coc_global_extensions = ['coc-clangd', 'coc-diagnostic']

" Show diagnostics in the sign column
autocmd CursorHold * silent call CocActionAsync('diagnosticRefresh')
autocmd CursorHoldI * silent call CocActionAsync('diagnosticRefresh')


"Enter to select suggestion
inoremap <expr> <CR> pumvisible() ? "\<C-y>" : "\<CR>"


" Use a lighter sign column
highlight SignColumn ctermbg=NONE
highlight SignColumn guibg=NONE

" Configure coc-clangd
let g:coc_clangd_binary = 'clangd' " Path to clangd binary
let g:coc_clangd_args = ['-header-insertion=never'] " Arguments for clangd


" Define the color for C warnings
highlight cWarn ctermfg=red guifg=red

" Set the syntax highlighting for C warnings
autocmd Syntax c syn keyword cWarn contained warning

" Set the color of diagnostic error messages
highlight CocErrorSign ctermfg=white ctermbg=red guifg=#ffffff guibg=#ff0000







