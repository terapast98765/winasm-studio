.CONST

StyleDef		DWORD WS_POPUPWINDOW			;EQU WS_POPUP OR WS_BORDER OR WS_SYSMENU
				DB 'WS_POPUPWINDOW',0
				
				DWORD WS_POPUP					;EQU 80000000h
				DB 'WS_POPUP',0
				DWORD WS_CHILD					;EQU 40000000h
				DB 'WS_CHILD',0
				DWORD WS_CHILDWINDOW			;EQU WS_CHILD
				DB 'WS_CHILDWINDOW',0
				DWORD WS_MINIMIZE				;EQU 20000000h
				DB 'WS_MINIMIZE',0
				DWORD WS_ICONIC					;EQU WS_MINIMIZE
				DB 'WS_ICONIC',0
				DWORD WS_VISIBLE				;EQU 10000000h
				DB 'WS_VISIBLE',0
				DWORD WS_DISABLED				;EQU 08000000h
				DB 'WS_DISABLED',0
				DWORD WS_CLIPSIBLINGS			;EQU 04000000h
				DB 'WS_CLIPSIBLINGS',0
				DWORD WS_CLIPCHILDREN			;EQU 02000000h
				DB 'WS_CLIPCHILDREN',0
				DWORD WS_MAXIMIZE				;EQU 01000000h
				DB 'WS_MAXIMIZE',0
				
				DWORD WS_OVERLAPPEDWINDOW		;EQU WS_OVERLAPPED OR WS_CAPTION OR WS_SYSMENU OR WS_THICKFRAME OR WS_MINIMIZEBOX OR WS_MAXIMIZEBOX
				DB 'WS_OVERLAPPEDWINDOW',0
				DWORD WS_TILEDWINDOW			;EQU WS_OVERLAPPEDWINDOW
				DB 'WS_TILEDWINDOW',0
				
				DWORD WS_CAPTION				;EQU 00C00000h
				DB 'WS_CAPTION',0
				
				;*****************
				;DWORD LBS_STANDARD				;EQU LBS_NOTIFY OR LBS_SORT OR WS_VSCROLL OR WS_BORDER=A00003
				;DB 'LBS_STANDARD',0
				;******************
				
				DWORD WS_BORDER					;EQU 00800000h
				DB 'WS_BORDER',0
				DWORD WS_DLGFRAME				;EQU 00400000h
				DB 'WS_DLGFRAME',0
				DWORD WS_VSCROLL				;EQU 00200000h
				DB 'WS_VSCROLL',0
				DWORD WS_HSCROLL				;EQU 00100000h
				DB 'WS_HSCROLL',0
				DWORD WS_SYSMENU				;EQU 00080000h
				DB 'WS_SYSMENU',0
				DWORD WS_THICKFRAME				;EQU 00040000h
				DB 'WS_THICKFRAME',0
				DWORD WS_SIZEBOX				;EQU WS_THICKFRAME
				DB 'WS_SIZEBOX',0
				DWORD WS_MINIMIZEBOX			;EQU 00020000h
				DB 'WS_MINIMIZEBOX',0
				DWORD WS_GROUP					;EQU 00020000h
				DB 'WS_GROUP',0
				DWORD WS_TABSTOP				;EQU 00010000h
				DB 'WS_TABSTOP',0
				DWORD WS_MAXIMIZEBOX			;EQU 00010000h
				DB 'WS_MAXIMIZEBOX',0
				DWORD WS_OVERLAPPED				;EQU 00000000h
				DB 'WS_OVERLAPPED',0
				DWORD WS_TILED					;EQU WS_OVERLAPPED i.e.==0
				DB 'WS_TILED',0
				
				
				;Button Styles
				DWORD BS_FLAT					;EQU 00008000h
				DB 'BS_FLAT',0
				DWORD BS_NOTIFY					;EQU 00004000h
				DB 'BS_NOTIFY',0
				DWORD BS_MULTILINE				;EQU 00002000h
				DB 'BS_MULTILINE',0
				DWORD BS_PUSHLIKE				;EQU 00001000h
				DB 'BS_PUSHLIKE',0
				DWORD BS_VCENTER				;EQU 00000C00h
				DB 'BS_VCENTER',0
				DWORD BS_BOTTOM					;EQU 00000800h
				DB 'BS_BOTTOM',0
				DWORD BS_TOP					;EQU 00000400h
				DB 'BS_TOP',0
				DWORD BS_CENTER					;EQU 00000300h
				DB 'BS_CENTER',0
				DWORD BS_RIGHT					;EQU 00000200h
				DB 'BS_RIGHT',0
				DWORD BS_LEFT					;EQU 00000100h
				DB 'BS_LEFT',0
				DWORD BS_BITMAP					;EQU 00000080h
				DB 'BS_BITMAP',0
				DWORD BS_ICON					;EQU 00000040h
				DB 'BS_ICON',0
				DWORD BS_LEFTTEXT				;EQU 00000020h
				DB 'BS_LEFTTEXT',0
				DWORD BS_RIGHTBUTTON			;EQU BS_LEFTTEXT
				DB 'BS_RIGHTBUTTON',0
				DWORD BS_OWNERDRAW				;EQU 0000000Bh
				DB 'BS_OWNERDRAW',0
				DWORD BS_AUTORADIOBUTTON		;EQU 00000009h
				DB 'BS_AUTORADIOBUTTON',0
				DWORD BS_USERBUTTON				;EQU 00000008h
				DB 'BS_USERBUTTON',0
				DWORD BS_GROUPBOX				;EQU 00000007h
				DB 'BS_GROUPBOX',0
				DWORD BS_AUTO3STATE				;EQU 00000006h
				DB 'BS_AUTO3STATE',0
				DWORD BS_3STATE					;EQU 00000005h
				DB 'BS_3STATE',0
				DWORD BS_RADIOBUTTON			;EQU 00000004h
				DB 'BS_RADIOBUTTON',0
				DWORD BS_AUTOCHECKBOX			;EQU 00000003h
				DB 'BS_AUTOCHECKBOX',0
				DWORD BS_CHECKBOX				;EQU 00000002h
				DB 'BS_CHECKBOX',0
				DWORD BS_DEFPUSHBUTTON			;EQU 00000001h
				DB 'BS_DEFPUSHBUTTON',0
				DWORD BS_PUSHBUTTON				;EQU 0h
				DB 'BS_PUSHBUTTON',0
				DWORD BS_TEXT					;EQU 0h
				DB 'BS_TEXT',0
				
				
				;Combo Box Styles
				;----------------
				DWORD CBS_LOWERCASE				;EQU 00004000h
				DB 'CBS_LOWERCASE',0
				DWORD CBS_UPPERCASE				;EQU 00002000h
				DB 'CBS_UPPERCASE',0
				DWORD CBS_DISABLENOSCROLL		;EQU 00000800h
				DB 'CBS_DISABLENOSCROLL',0
				DWORD CBS_NOINTEGRALHEIGHT		;EQU 00000400h
				DB 'CBS_NOINTEGRALHEIGHT',0
				DWORD CBS_HASSTRINGS			;EQU 00000200h
				DB 'CBS_HASSTRINGS',0
				DWORD CBS_SORT					;EQU 00000100h
				DB 'CBS_SORT',0
				DWORD CBS_OEMCONVERT			;EQU 00000080h
				DB 'CBS_OEMCONVERT',0
				DWORD CBS_AUTOHSCROLL			;EQU 00000040h
				DB 'CBS_AUTOHSCROLL',0
				DWORD CBS_OWNERDRAWVARIABLE		;EQU 00000020h
				DB 'CBS_OWNERDRAWVARIABLE',0
				DWORD CBS_OWNERDRAWFIXED		;EQU 00000010h
				DB 'CBS_OWNERDRAWFIXED',0
				DWORD CBS_DROPDOWNLIST			;EQU 00000003h
				DB 'CBS_DROPDOWNLIST',0
				DWORD CBS_DROPDOWN				;EQU 00000002h
				DB 'CBS_DROPDOWN',0
				DWORD CBS_SIMPLE				;EQU 00000001h
				DB 'CBS_SIMPLE',0
				
				;Dialog Styles
				;-------------
				DWORD DS_CONTEXTHELP			;EQU 00002000h
				DB 'DS_CONTEXTHELP',0
				DWORD DS_CENTERMOUSE			;EQU 00001000h
				DB 'DS_CENTERMOUSE',0
				DWORD DS_CENTER					;EQU 00000800h
				DB 'DS_CENTER',0
				DWORD DS_CONTROL				;EQU 00000400h
				DB 'DS_CONTROL',0
				DWORD DS_SETFOREGROUND			;EQU 00000200h
				DB 'DS_SETFOREGROUND',0
				DWORD DS_NOIDLEMSG				;EQU 00000100h
				DB 'DS_NOIDLEMSG',0
				DWORD DS_MODALFRAME				;EQU 00000080h
				DB 'DS_MODALFRAME',0
				DWORD DS_SETFONT				;EQU 00000040h
				DB 'DS_SETFONT',0
				DWORD DS_LOCALEDIT				;EQU 00000020h
				DB 'DS_LOCALEDIT',0
				DWORD DS_NOFAILCREATE			;EQU 00000010h
				DB 'DS_NOFAILCREATE',0
				DWORD DS_FIXEDSYS				;EQU 00000008h
				DB 'DS_FIXEDSYS',0
				DWORD DS_3DLOOK					;EQU 00000004h
				DB 'DS_3DLOOK',0
				DWORD DS_SYSMODAL				;EQU 00000002h
				DB 'DS_SYSMODAL',0
				DWORD DS_ABSALIGN				;EQU 00000001h
				DB 'DS_ABSALIGN',0
				
				
				;Edit & RichEdit Controls
				;------------------------
				DWORD ES_SELECTIONBAR			;equ 01000000h	:Rich Edit only
				DB 'ES_SELECTIONBAR',0
				DWORD ES_EX_NOCALLOLEINIT		;EQU 01000000h	:Rich Edit only
				DB 'ES_EX_NOCALLOLEINIT',0
				DWORD ES_VERTICAL				;equ 00400000h	:Rich Edit only
				DB 'ES_VERTICAL',0
				DWORD ES_NOIME					;EQU 00080000h	:Rich Edit only
				DB 'ES_NOIME',0
				DWORD ES_SELFIME				;EQU 00040000h	:Rich Edit only
				DB 'ES_SELFIME',0
				DWORD ES_SAVESEL				;equ 00008000h	:Rich Edit only
				DB 'ES_SAVESEL',0
				DWORD ES_SUNKEN					;equ 00004000h	:Rich Edit only
				DB 'ES_SUNKEN',0
				DWORD ES_DISABLENOSCROLL		;equ 00002000h	:Rich Edit only
				DB 'ES_DISABLENOSCROLL',0
				DWORD ES_NUMBER					;EQU 00002000h	:Edit & RichEdit Controls
				DB 'ES_NUMBER',0
				DWORD ES_WANTRETURN				;EQU 00001000h	:Edit & RichEdit Controls
				DB 'ES_WANTRETURN',0
				DWORD ES_READONLY				;EQU 00000800h	:Edit & RichEdit Controls
				DB 'ES_READONLY',0
				DWORD ES_OEMCONVERT				;EQU 00000400h	:Edit only
				DB 'ES_OEMCONVERT',0
				DWORD ES_NOHIDESEL				;EQU 00000100h	:Edit & RichEdit Controls
				DB 'ES_NOHIDESEL',0
				DWORD ES_AUTOHSCROLL			;EQU 00000080h	:Edit & RichEdit Controls
				DB 'ES_AUTOHSCROLL',0
				DWORD ES_AUTOVSCROLL			;EQU 00000040h	:Edit & RichEdit Controls
				DB 'ES_AUTOVSCROLL',0
				DWORD ES_PASSWORD				;EQU 00000020h	:Edit & RichEdit Controls
				DB 'ES_PASSWORD',0
				DWORD ES_LOWERCASE				;EQU 00000010h	:Edit only
				DB 'ES_LOWERCASE',0
				DWORD ES_UPPERCASE				;EQU 00000008h	:Edit only
				DB 'ES_UPPERCASE',0
				DWORD ES_MULTILINE				;EQU 00000004h	:Edit & RichEdit Controls
				DB 'ES_MULTILINE',0
				DWORD ES_RIGHT					;EQU 00000002h	:Edit & RichEdit Controls
				DB 'ES_RIGHT',0
				DWORD ES_CENTER					;EQU 00000001h	:Edit & RichEdit Controls
				DB 'ES_CENTER',0
				DWORD ES_LEFT					;EQU 00000000h	:Edit & RichEdit Controls
				DB 'ES_LEFT',0
				
				;ListBox Styles
				;--------------
				;*****************
				DWORD LBS_STANDARD				;EQU LBS_NOTIFY OR LBS_SORT OR WS_VSCROLL OR WS_BORDER=A00003
				DB 'LBS_STANDARD',0
				;******************
				
				DWORD LBS_NOSEL					;EQU 00004000h
				DB 'LBS_NOSEL',0
				DWORD LBS_NODATA				;EQU 00002000h
				DB 'LBS_NODATA',0
				DWORD LBS_DISABLENOSCROLL		;EQU 00001000h
				DB 'LBS_DISABLENOSCROLL',0
				DWORD LBS_EXTENDEDSEL			;EQU 00000800h
				DB 'LBS_EXTENDEDSEL',0
				DWORD LBS_WANTKEYBOARDINPUT		;EQU 00000400h
				DB 'LBS_WANTKEYBOARDINPUT',0
				DWORD LBS_MULTICOLUMN			;EQU 00000200h
				DB 'LBS_MULTICOLUMN',0
				DWORD LBS_NOINTEGRALHEIGHT		;EQU 00000100h
				DB 'LBS_NOINTEGRALHEIGHT',0
				DWORD LBS_USETABSTOPS			;EQU 00000080h
				DB 'LBS_USETABSTOPS',0
				DWORD LBS_HASSTRINGS			;EQU 00000040h
				DB 'LBS_HASSTRINGS',0
				DWORD LBS_OWNERDRAWVARIABLE		;EQU 00000020h
				DB 'LBS_OWNERDRAWVARIABLE',0
				DWORD LBS_OWNERDRAWFIXED		;EQU 00000010h
				DB 'LBS_OWNERDRAWFIXED',0
				DWORD LBS_MULTIPLESEL			;EQU 00000008h
				DB 'LBS_MULTIPLESEL',0
				DWORD LBS_NOREDRAW				;EQU 00000004h
				DB 'LBS_NOREDRAW',0
				DWORD LBS_SORT					;EQU 00000002h
				DB 'LBS_SORT',0
				DWORD LBS_NOTIFY				;EQU 00000001h
				DB 'LBS_NOTIFY',0
				
				
				
				;Scrollbar Styles
				DWORD SBS_SIZEGRIP					;equ 00000010h
				DB 'SBS_SIZEGRIP',0
				DWORD SBS_SIZEBOX					;equ 00000008h
				DB 'SBS_SIZEBOX',0
				DWORD SBS_BOTTOMALIGN				;equ 00000004h
				DB 'SBS_BOTTOMALIGN',0
				DWORD SBS_RIGHTALIGN				;equ 00000004h
				DB 'SBS_RIGHTALIGN',0
				DWORD SBS_SIZEBOXBOTTOMRIGHTALIGN	;equ 00000004h
				DB 'SBS_SIZEBOXBOTTOMRIGHTALIGN',0
				DWORD SBS_LEFTALIGN					;equ 00000002h
				DB 'SBS_LEFTALIGN',0
				DWORD SBS_SIZEBOXTOPLEFTALIGN		;equ 00000002h
				DB 'SBS_SIZEBOXTOPLEFTALIGN',0
				DWORD SBS_TOPALIGN					;equ 00000002h
				DB 'SBS_TOPALIGN',0
				DWORD SBS_VERT						;equ 00000001h
				DB 'SBS_VERT',0
				DWORD SBS_HORZ						;equ 00000000h
				DB 'SBS_HORZ',0
				
				
				;Static Controls
				;***************
				DWORD SS_SUNKEN					;Image controls:	equ 00001000h
				DB 'SS_SUNKEN',0
				DWORD SS_REALSIZEIMAGE			;Image controls:	equ 00000800h
				DB 'SS_REALSIZEIMAGE',0
				DWORD SS_CENTERIMAGE			;Image controls:	equ 00000200h
				DB 'SS_CENTERIMAGE',0
				DWORD SS_NOTIFY					;Image controls:	equ 00000100h
				DB 'SS_NOTIFY',0
				DWORD SS_NOPREFIX				;equ 00000080h
				DB 'SS_NOPREFIX',0
				DWORD SS_ETCHEDFRAME			;Used for Shapes:	equ 00000012h
				DB 'SS_ETCHEDFRAME',0
				DWORD SS_ETCHEDVERT				;Used for Shapes:	equ 00000011h
				DB 'SS_ETCHEDVERT',0
				DWORD SS_ETCHEDHORZ				;Used for Shapes:	equ 00000010h
				DB 'SS_ETCHEDHORZ',0
				DWORD SS_BITMAP					;Image controls:	equ 0000000Eh
				DB 'SS_BITMAP',0
				DWORD SS_LEFTNOWORDWRAP			;equ 0000000Ch
				DB 'SS_LEFTNOWORDWRAP',0
				DWORD SS_SIMPLE					;equ 0000000Bh
				DB 'SS_SIMPLE',0
				DWORD SS_USERITEM				;equ 0000000Ah
				DB 'SS_USERITEM',0
				DWORD SS_WHITEFRAME				;Used for Shapes:	equ 00000009h
				DB 'SS_WHITEFRAME',0
				DWORD SS_GRAYFRAME				;Used for Shapes:	equ 00000008h
				DB 'SS_GRAYFRAME',0
				DWORD SS_BLACKFRAME				;Used for Shapes:	equ 00000007h
				DB 'SS_BLACKFRAME',0
				DWORD SS_WHITERECT				;Used for Shapes:	equ 00000006h
				DB 'SS_WHITERECT',0
				DWORD SS_GRAYRECT				;Used for Shapes:	equ 00000005h
				DB 'SS_GRAYRECT',0
				DWORD SS_BLACKRECT				;Used for Shapes:	equ 00000004h
				DB 'SS_BLACKRECT',0
				DWORD SS_ICON					;Image controls:	equ 00000003h
				DB 'SS_ICON',0
				DWORD SS_RIGHT					;equ 00000002h
				DB 'SS_RIGHT',0
				DWORD SS_CENTER					;Image controls:	equ 00000001h
				DB 'SS_CENTER',0
				DWORD SS_LEFT					;equ 00000000h
				DB 'SS_LEFT',0
				;SS_OWNERDRAW 					equ 0Dh
				;SS_ENHMETAFILE 				equ 0Fh
				;SS_TYPEMASK 					equ 1Fh
				;SS_RIGHTJUST 					equ 400h
				;SS_ENDELLIPSIS 				equ 4000h
				;SS_PATHELLIPSIS 				equ 8000h
				;SS_WORDELLIPSIS 				equ 0C000h
				;SS_ELLIPSISMASK 				equ 0C000h
				
				
				
				;ListView Styles
				;***************
				;LVS_TYPESTYLEMASK				;equ 0000fc00h
				DWORD LVS_NOSORTHEADER			;equ 00008000h
				DB 'LVS_NOSORTHEADER',0
				DWORD LVS_NOCOLUMNHEADER		;equ 00004000h
				DB 'LVS_NOCOLUMNHEADER',0
				DWORD LVS_NOSCROLL				;equ 00002000h
				DB 'LVS_NOSCROLL',0
				;LVS_ALIGNMASK					;equ 00000c00h
				DWORD LVS_ALIGNLEFT				;equ 00000800h
				DB 'LVS_ALIGNLEFT',0
				DWORD LVS_OWNERDRAWFIXED		;equ 00000400h
				DB 'LVS_OWNERDRAWFIXED',0
				DWORD LVS_EDITLABELS			;equ 00000200h
				DB 'LVS_EDITLABELS',0
				DWORD LVS_AUTOARRANGE			;equ 00000100h
				DB 'LVS_AUTOARRANGE',0
				DWORD LVS_NOLABELWRAP			;equ 00000080h
				DB 'LVS_NOLABELWRAP',0
				DWORD LVS_SHAREIMAGELISTS		;equ 00000040h
				DB 'LVS_SHAREIMAGELISTS',0
				DWORD LVS_SORTDESCENDING		;equ 00000020h
				DB 'LVS_SORTDESCENDING',0
				DWORD LVS_SORTASCENDING			;equ 00000010h
				DB 'LVS_SORTASCENDING',0
				DWORD LVS_SHOWSELALWAYS			;equ 00000008h
				DB 'LVS_SHOWSELALWAYS',0
				DWORD LVS_SINGLESEL				;equ 00000004h
				DB 'LVS_SINGLESEL',0
				;LVS_TYPEMASK  					;equ 00000003h
				DWORD LVS_LIST					;equ 00000003h
				DB 'LVS_LIST',0
				DWORD LVS_SMALLICON				;equ 00000002h
				DB 'LVS_SMALLICON',0
				DWORD LVS_REPORT				;equ 00000001h
				DB 'LVS_REPORT',0
				DWORD LVS_ICON					;equ 00000000h
				DB 'LVS_ICON',0
				DWORD LVS_ALIGNTOP				;equ 00000000h
				DB 'LVS_ALIGNTOP',0
				
				;TreeView
				DWORD TVS_NOHSCROLL			;EQU 00008000h
				DB 'TVS_NOHSCROLL',0
				DWORD TVS_NONEVENHEIGHT		;EQU 00004000h
				DB 'TVS_NONEVENHEIGHT',0
				DWORD TVS_NOSCROLL			;EQU 00002000h
				DB 'TVS_NOSCROLL',0
				DWORD TVS_FULLROWSELECT		;EQU 00001000h
				DB 'TVS_FULLROWSELECT',0
				DWORD TVS_INFOTIP			;EQU 00000800h
				DB 'TVS_INFOTIP',0
				DWORD TVS_SINGLEEXPAND		;EQU 00000400h
				DB 'TVS_SINGLEEXPAND',0
				DWORD TVS_TRACKSELECT		;EQU 00000200h
				DB 'TVS_TRACKSELECT',0
				DWORD TVS_CHECKBOXES		;EQU 00000100h
				DB 'TVS_CHECKBOXES',0
				DWORD TVS_NOTOOLTIPS		;EQU 00000080h
				DB 'TVS_NOTOOLTIPS',0
				DWORD TVS_RTLREADING		;EQU 00000040h
				DB 'TVS_RTLREADING',0
				DWORD TVS_SHOWSELALWAYS		;EQU 00000020h
				DB 'TVS_SHOWSELALWAYS',0
				DWORD TVS_DISABLEDRAGDROP	;EQU 00000010h
				DB 'TVS_DISABLEDRAGDROP',0
				DWORD TVS_EDITLABELS		;EQU 00000008h
				DB 'TVS_EDITLABELS',0
				DWORD TVS_LINESATROOT		;EQU 00000004h
				DB 'TVS_LINESATROOT',0
				DWORD TVS_HASLINES			;EQU 00000002h
				DB 'TVS_HASLINES',0
				DWORD TVS_HASBUTTONS		;EQU 00000001h
				DB 'TVS_HASBUTTONS',0
				
				
				;Trackbar
								DWORD TBS_NOTHUMB			;equ 0080h
				DB 'TBS_NOTHUMB',0
				DWORD TBS_FIXEDLENGTH		;equ 0040h
				DB 'TBS_FIXEDLENGTH',0
				DWORD TBS_ENABLESELRANGE	;equ 0020h
				DB 'TBS_ENABLESELRANGE',0
				DWORD TBS_NOTICKS			;equ 0010h
				DB 'TBS_NOTICKS',0
				DWORD TBS_BOTH				;equ 0008h
				DB 'TBS_BOTH',0
				DWORD TBS_TOP				;equ 0004h
				DB 'TBS_TOP',0
				DWORD TBS_LEFT				;equ 0004h
				DB 'TBS_LEFT',0
				DWORD TBS_VERT				;equ 0002h
				DB 'TBS_VERT',0
				DWORD TBS_AUTOTICKS			;equ 0001h
				DB 'TBS_AUTOTICKS',0
				DWORD TBS_BOTTOM			;equ 0000h
				DB 'TBS_BOTTOM',0
				DWORD TBS_RIGHT				;equ 0000h
				DB 'TBS_RIGHT',0
				DWORD TBS_HORZ				;equ 0000h
				DB 'TBS_HORZ',0				

				;ToolBar Styles
				DWORD TBSTYLE_TRANSPARENT		;EQU 00008000h
				DB 'TBSTYLE_TRANSPARENT',0
				DWORD TBSTYLE_REGISTERDROP		;EQU 00004000h
				DB 'TBSTYLE_REGISTERDROP',0
				DWORD TBSTYLE_CUSTOMERASE		;EQU 00002000h
				DB 'TBSTYLE_CUSTOMERASE',0
				DWORD TBSTYLE_LIST				;EQU 00001000h
				DB 'TBSTYLE_LIST',0
				DWORD TBSTYLE_FLAT				;EQU 00000800h
				DB 'TBSTYLE_FLAT',0
				DWORD TBSTYLE_ALTDRAG			;EQU 00000400h
				DB 'TBSTYLE_ALTDRAG',0
				DWORD TBSTYLE_WRAPABLE			;EQU 00000200h
				DB 'TBSTYLE_WRAPABLE',0
				DWORD TBSTYLE_TOOLTIPS			;EQU 00000100h
				DB 'TBSTYLE_TOOLTIPS',0
				
				;Status Bar Styles
				DWORD SBARS_TOOLTIPS			;EQU 00000800h
				DB 'SBARS_TOOLTIPS',0
				DWORD SBARS_SIZEGRIP			;EQU 00000100h
				DB 'SBARS_SIZEGRIP',0
				
				;Common Control Styles
				DWORD CCS_RIGHT					;EQU CCS_VERT OR CCS_BOTTOM
				DB 'CCS_RIGHT',0
				DWORD CCS_NOMOVEX				;EQU CCS_VERT OR CCS_NOMOVEY
				DB 'CCS_NOMOVEX',0
				DWORD CCS_LEFT					;EQU CCS_VERT OR CCS_TOP
				DB 'CCS_LEFT',0
				DWORD CCS_VERT					;EQU 00000080h
				DB 'CCS_VERT',0
				DWORD CCS_NODIVIDER				;EQU 00000040h
				DB 'CCS_NODIVIDER',0
				DWORD CCS_ADJUSTABLE			;EQU 00000020h
				DB 'CCS_ADJUSTABLE',0
				;DWORD CCS_NOHILITE				;EQU 00000010h	Prevents a 1-pixel highlight from being drawn at the top of the control
				;DB 'CCS_NOHILITE',0
				DWORD CCS_NOPARENTALIGN			;EQU 00000008h
				DB 'CCS_NOPARENTALIGN',0
				DWORD CCS_NORESIZE				;EQU 00000004h
				DB 'CCS_NORESIZE',0
				DWORD CCS_BOTTOM				;EQU 00000003h
				DB 'CCS_BOTTOM',0
				DWORD CCS_NOMOVEY				;EQU 00000002h
				DB 'CCS_NOMOVEY',0
				DWORD CCS_TOP					;EQU 00000001h
				DB 'CCS_TOP',0
				
				
				;Tab Control
				DWORD TCS_FOCUSNEVER			;equ 00008000h
				DB 'TCS_FOCUSNEVER',0
				DWORD TCS_TOOLTIPS				;equ 00004000h
				DB 'TCS_TOOLTIPS',0
				DWORD TCS_OWNERDRAWFIXED		;equ 00002000h
				DB 'TCS_OWNERDRAWFIXED',0
				DWORD TCS_FOCUSONBUTTONDOWN		;equ 00001000h
				DB 'TCS_FOCUSONBUTTONDOWN',0
				DWORD TCS_RAGGEDRIGHT			;equ 00000800h
				DB 'TCS_RAGGEDRIGHT',0
				DWORD TCS_FIXEDWIDTH			;equ 00000400h
				DB 'TCS_FIXEDWIDTH',0
				DWORD TCS_MULTILINE				;equ 00000200h
				DB 'TCS_MULTILINE',0
				DWORD TCS_BUTTONS				;equ 00000100h
				DB 'TCS_BUTTONS',0
				DWORD TCS_VERTICAL				;equ 00000080h
				DB 'TCS_VERTICAL',0
				DWORD TCS_HOTTRACK				;equ 00000040h
				DB 'TCS_HOTTRACK',0
				DWORD TCS_FORCELABELLEFT		;equ 00000020h
				DB 'TCS_FORCELABELLEFT',0
				DWORD TCS_FORCEICONLEFT			;equ 00000010h
				DB 'TCS_FORCEICONLEFT',0
				DWORD TCS_FLATBUTTONS			;equ 00000008h
				DB 'TCS_FLATBUTTONS',0
				DWORD TCS_MULTISELECT			;equ 00000004h
				DB 'TCS_MULTISELECT',0
				DWORD TCS_BOTTOM				;equ 00000002h
				DB 'TCS_BOTTOM',0
				DWORD TCS_SCROLLOPPOSITE		;equ 00000001h
				DB 'TCS_SCROLLOPPOSITE',0
				DWORD TCS_TABS					;equ 00000000h
				DB 'TCS_TABS',0
				DWORD TCS_SINGLELINE			;equ 00000000h
				DB 'TCS_SINGLELINE',0
				DWORD TCS_RIGHTJUSTIFY			;equ 00000000h
				DB 'TCS_RIGHTJUSTIFY',0
				
				
				;Up-Down Controls
				DWORD UDS_HOTTRACK				;equ 0100h
				DB 'UDS_HOTTRACK',0
				DWORD UDS_NOTHOUSANDS			;equ 0080h
				DB 'UDS_NOTHOUSANDS',0
				DWORD UDS_HORZ					;equ 0040h
				DB 'UDS_HORZ',0
				DWORD UDS_ARROWKEYS				;equ 0020h
				DB 'UDS_ARROWKEYS',0
				DWORD UDS_AUTOBUDDY				;equ 0010h
				DB 'UDS_AUTOBUDDY',0
				DWORD UDS_ALIGNLEFT				;equ 0008h
				DB 'UDS_ALIGNLEFT',0
				DWORD UDS_ALIGNRIGHT			;equ 0004h
				DB 'UDS_ALIGNRIGHT',0
				DWORD UDS_SETBUDDYINT			;equ 0002h
				DB 'UDS_SETBUDDYINT',0
				DWORD UDS_WRAP					;equ 0001h
				DB 'UDS_WRAP',0
				
				;Progress bar styles
				DWORD 00000008h			;PBS_MARQUEE		;EQU 00000008h
				DB 'PBS_MARQUEE',0
				DWORD PBS_VERTICAL		;EQU 00000004h
				DB 'PBS_VERTICAL',0
				DWORD PBS_SMOOTH		;EQU 00000001h
				DB 'PBS_SMOOTH',0
				
				DWORD 0,0


ExStyleDef		DWORD WS_EX_ACCEPTFILES
				DB 'WS_EX_ACCEPTFILES',0
				DWORD WS_EX_APPWINDOW
				DB 'WS_EX_APPWINDOW',0
				DWORD WS_EX_CLIENTEDGE
				DB 'WS_EX_CLIENTEDGE',0
				DWORD WS_EX_CONTEXTHELP
				DB 'WS_EX_CONTEXTHELP',0
				DWORD WS_EX_CONTROLPARENT
				DB 'WS_EX_CONTROLPARENT',0
				DWORD WS_EX_DLGMODALFRAME
				DB 'WS_EX_DLGMODALFRAME',0
				DWORD WS_EX_MDICHILD
				DB 'WS_EX_MDICHILD',0
				DWORD WS_EX_NOPARENTNOTIFY
				DB 'WS_EX_NOPARENTNOTIFY',0
				DWORD WS_EX_OVERLAPPEDWINDOW
				DB 'WS_EX_OVERLAPPEDWINDOW',0
				DWORD WS_EX_PALETTEWINDOW
				DB 'WS_EX_PALETTEWINDOW',0
				DWORD WS_EX_STATICEDGE
				DB 'WS_EX_STATICEDGE',0
				DWORD WS_EX_TOOLWINDOW
				DB 'WS_EX_TOOLWINDOW',0
				DWORD WS_EX_TOPMOST
				DB 'WS_EX_TOPMOST',0
				DWORD WS_EX_TRANSPARENT
				DB 'WS_EX_TRANSPARENT',0
				DWORD WS_EX_WINDOWEDGE
				DB 'WS_EX_WINDOWEDGE',0
				DWORD WS_EX_RIGHT
				DB 'WS_EX_RIGHT',0
				DWORD WS_EX_LEFT
				DB 'WS_EX_LEFT',0
				DWORD WS_EX_RTLREADING
				DB 'WS_EX_RTLREADING',0
				DWORD WS_EX_LTRREADING
				DB 'WS_EX_LTRREADING',0
				DWORD WS_EX_LEFTSCROLLBAR
				DB 'WS_EX_LEFTSCROLLBAR',0
				DWORD WS_EX_RIGHTSCROLLBAR
				DB 'WS_EX_RIGHTSCROLLBAR',0
				DWORD 0,0