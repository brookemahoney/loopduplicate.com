<?php
/**
 * @file
 * loopd_geshifilter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loopd_geshifilter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_available_languages_cache';
  $strongarm->value = array(
    '4cs' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'GADV 4CS',
    ),
    '6502acme' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'MOS 6502 (6510) ACME Cross Assembler format',
    ),
    '6502kickass' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'MOS 6502 (6510) Kick Assembler format',
    ),
    '6502tasm' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'MOS 6502 (6510) TASM/64TASS 1.46 Assembler format',
    ),
    '68000devpac' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Motorola 68000 - HiSoft Devpac ST 2 Assembler format',
    ),
    'abap' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ABAP',
    ),
    'actionscript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ActionScript',
    ),
    'actionscript3' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ActionScript 3',
    ),
    'ada' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Ada',
    ),
    'aimms' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'AIMMS3',
    ),
    'algol68' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ALGOL 68',
    ),
    'apache' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Apache configuration',
    ),
    'applescript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'AppleScript',
    ),
    'apt_sources' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Apt sources',
    ),
    'arm' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ARM ASSEMBLER',
    ),
    'asm' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ASM',
    ),
    'asp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ASP',
    ),
    'asymptote' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'asymptote',
    ),
    'autoconf' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Autoconf',
    ),
    'autohotkey' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Autohotkey',
    ),
    'autoit' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'AutoIt',
    ),
    'avisynth' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'AviSynth',
    ),
    'awk' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'awk',
    ),
    'bascomavr' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'BASCOM AVR',
    ),
    'bash' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Bash',
    ),
    'basic4gl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Basic4GL',
    ),
    'bf' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Brainfuck',
    ),
    'bibtex' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'BibTeX',
    ),
    'blitzbasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'BlitzBasic',
    ),
    'bnf' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'bnf',
    ),
    'boo' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Boo',
    ),
    'c' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'C',
    ),
    'c_loadrunner' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'C (LoadRunner)',
    ),
    'c_mac' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'C (Mac)',
    ),
    'c_winapi' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'C (WinAPI)',
    ),
    'caddcl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'CAD DCL',
    ),
    'cadlisp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'CAD Lisp',
    ),
    'cfdg' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'CFDG',
    ),
    'cfm' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ColdFusion',
    ),
    'chaiscript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ChaiScript',
    ),
    'chapel' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Chapel',
    ),
    'cil' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'CIL',
    ),
    'clojure' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Clojure',
    ),
    'cmake' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'CMake',
    ),
    'cobol' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'COBOL',
    ),
    'coffeescript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'CoffeeScript',
    ),
    'cpp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'C++',
    ),
    'cpp-qt' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'C++ (Qt)',
    ),
    'cpp-winapi' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'C++ (WinAPI)',
    ),
    'csharp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'C#',
    ),
    'css' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'CSS',
    ),
    'cuesheet' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Cuesheet',
    ),
    'd' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'D',
    ),
    'dart' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Dart',
    ),
    'dcl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'DCL',
    ),
    'dcpu16' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'DCPU-16 Assembly',
    ),
    'dcs' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'DCS',
    ),
    'delphi' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Delphi',
    ),
    'diff' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Diff',
    ),
    'div' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'DIV',
    ),
    'dos' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'DOS',
    ),
    'dot' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'dot',
    ),
    'drupal5' => array(
      'language_path' => 'sites/all/modules/contrib/geshifilter/geshi-extra',
      'fullname' => 'Drupal 5',
    ),
    'drupal6' => array(
      'language_path' => 'sites/all/modules/contrib/geshifilter/geshi-extra',
      'fullname' => 'Drupal 6',
    ),
    'e' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'E',
    ),
    'ecmascript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ECMAScript',
    ),
    'eiffel' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Eiffel',
    ),
    'email' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'eMail (mbox)',
    ),
    'epc' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'EPC',
    ),
    'erlang' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Erlang',
    ),
    'euphoria' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Euphoria',
    ),
    'ezt' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'EZT',
    ),
    'f1' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Formula One',
    ),
    'falcon' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Falcon',
    ),
    'fo' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'FO (abas-ERP)',
    ),
    'fortran' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Fortran',
    ),
    'freebasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'FreeBasic',
    ),
    'freeswitch' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'FreeSWITCH',
    ),
    'fsharp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'F#',
    ),
    'gambas' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'GAMBAS',
    ),
    'gdb' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'GDB',
    ),
    'genero' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'genero',
    ),
    'genie' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Genie',
    ),
    'gettext' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'GNU Gettext',
    ),
    'glsl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'glSlang',
    ),
    'gml' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'GML',
    ),
    'gnuplot' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Gnuplot',
    ),
    'go' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Go',
    ),
    'groovy' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Groovy',
    ),
    'gwbasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'GwBasic',
    ),
    'haskell' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Haskell',
    ),
    'haxe' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Haxe',
    ),
    'hicest' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'HicEst',
    ),
    'hq9plus' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'HQ9+',
    ),
    'html4strict' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'HTML',
    ),
    'html5' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'HTML5',
    ),
    'icon' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Icon',
    ),
    'idl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Uno Idl',
    ),
    'ini' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'INI',
    ),
    'inno' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Inno',
    ),
    'intercal' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'INTERCAL',
    ),
    'io' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Io',
    ),
    'ispfpanel' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ISPF Panel',
    ),
    'j' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'J',
    ),
    'java' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Java',
    ),
    'java5' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Java(TM) 2 Platform Standard Edition 5.0',
    ),
    'javascript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Javascript',
    ),
    'jcl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'JCL',
    ),
    'jquery' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'jQuery',
    ),
    'kixtart' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'KiXtart',
    ),
    'klonec' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'KLone C',
    ),
    'klonecpp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'KLone C++',
    ),
    'latex' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'LaTeX',
    ),
    'lb' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Liberty BASIC',
    ),
    'ldif' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'LDIF',
    ),
    'lisp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Lisp',
    ),
    'llvm' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'LLVM Intermediate Representation',
    ),
    'locobasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Locomotive Basic',
    ),
    'logtalk' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Logtalk',
    ),
    'lolcode' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'LOLcode',
    ),
    'lotusformulas' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Lotus Notes @Formulas',
    ),
    'lotusscript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'LotusScript',
    ),
    'lscript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'LScript',
    ),
    'lsl2' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'LSL2',
    ),
    'lua' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Lua',
    ),
    'm68k' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Motorola 68000 Assembler',
    ),
    'magiksf' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'MagikSF',
    ),
    'make' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'GNU make',
    ),
    'mapbasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'MapBasic',
    ),
    'matlab' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Matlab M',
    ),
    'mirc' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'mIRC Scripting',
    ),
    'mmix' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'MMIX',
    ),
    'modula2' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Modula-2',
    ),
    'modula3' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Modula-3',
    ),
    'mpasm' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Microchip Assembler',
    ),
    'mxml' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'MXML',
    ),
    'mysql' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'MySQL',
    ),
    'nagios' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Nagios',
    ),
    'netrexx' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'NetRexx',
    ),
    'newlisp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'newlisp',
    ),
    'nginx' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'nginx',
    ),
    'nsis' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'NSIS',
    ),
    'oberon2' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Oberon-2',
    ),
    'objc' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Objective-C',
    ),
    'objeck' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Objeck Programming Language',
    ),
    'ocaml' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'OCaml',
    ),
    'ocaml-brief' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'OCaml (brief)',
    ),
    'octave' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'GNU Octave',
    ),
    'oobas' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'OpenOffice.org Basic',
    ),
    'oorexx' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ooRexx',
    ),
    'oracle11' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Oracle 11 SQL',
    ),
    'oracle8' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Oracle 8 SQL',
    ),
    'oxygene' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Oxygene (Delphi Prism)',
    ),
    'oz' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'OZ',
    ),
    'parasail' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ParaSail',
    ),
    'parigp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PARI/GP',
    ),
    'pascal' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Pascal',
    ),
    'pcre' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PCRE',
    ),
    'per' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'per',
    ),
    'perl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Perl',
    ),
    'perl6' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Perl 6',
    ),
    'pf' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'OpenBSD Packet Filter',
    ),
    'php' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PHP',
    ),
    'php-brief' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PHP (brief)',
    ),
    'pic16' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PIC16',
    ),
    'pike' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Pike',
    ),
    'pixelbender' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Pixel Bender 1.0',
    ),
    'pli' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PL/I',
    ),
    'plsql' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PL/SQL',
    ),
    'postgresql' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PostgreSQL',
    ),
    'povray' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'POVRAY',
    ),
    'powerbuilder' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PowerBuilder',
    ),
    'powershell' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PowerShell',
    ),
    'proftpd' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ProFTPd configuration',
    ),
    'progress' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Progress',
    ),
    'prolog' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Prolog',
    ),
    'properties' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PROPERTIES',
    ),
    'providex' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ProvideX',
    ),
    'purebasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'PureBasic',
    ),
    'pycon' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Python (console mode)',
    ),
    'pys60' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Python for S60',
    ),
    'python' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Python',
    ),
    'q' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'q/kdb+',
    ),
    'qbasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'QBasic/QuickBASIC',
    ),
    'racket' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Racket',
    ),
    'rails' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Rails',
    ),
    'rbs' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'RBScript',
    ),
    'rebol' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'REBOL',
    ),
    'reg' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Microsoft Registry',
    ),
    'rexx' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'rexx',
    ),
    'robots' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'robots.txt',
    ),
    'rpmspec' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'RPM Specification File',
    ),
    'rsplus' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'R / S+',
    ),
    'ruby' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Ruby',
    ),
    'rust' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Rust',
    ),
    'sas' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'SAS',
    ),
    'sass' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Sass',
    ),
    'scala' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Scala',
    ),
    'scheme' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Scheme',
    ),
    'scilab' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'SciLab',
    ),
    'scl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'SCL',
    ),
    'sdlbasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'sdlBasic',
    ),
    'smalltalk' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Smalltalk',
    ),
    'smarty' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Smarty',
    ),
    'spark' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'SPARK',
    ),
    'sparql' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'SPARQL',
    ),
    'sql' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'SQL',
    ),
    'stonescript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'StoneScript',
    ),
    'systemverilog' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'SystemVerilog',
    ),
    'tcl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'TCL',
    ),
    'teraterm' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Tera Term Macro',
    ),
    'text' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Text',
    ),
    'thinbasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'thinBasic',
    ),
    'tsql' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'T-SQL',
    ),
    'twig' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Twig',
    ),
    'typoscript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'TypoScript',
    ),
    'unicon' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Unicon (Unified Extended Dialect of Icon)',
    ),
    'upc' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'UPC',
    ),
    'urbi' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Urbi',
    ),
    'uscript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Unreal Script',
    ),
    'vala' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Vala',
    ),
    'vb' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Visual Basic',
    ),
    'vbnet' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'vb.net',
    ),
    'vbscript' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'VBScript',
    ),
    'vedit' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Vedit macro language',
    ),
    'verilog' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Verilog',
    ),
    'vhdl' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'VHDL',
    ),
    'vim' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Vim Script',
    ),
    'visualfoxpro' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Visual Fox Pro',
    ),
    'visualprolog' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Visual Prolog',
    ),
    'whitespace' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Whitespace',
    ),
    'whois' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Whois (RPSL format)',
    ),
    'winbatch' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Winbatch',
    ),
    'xbasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'XBasic',
    ),
    'xml' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'XML',
    ),
    'xorg_conf' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'Xorg configuration',
    ),
    'xpp' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'X++',
    ),
    'yaml' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'YAML',
    ),
    'z80' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ZiLOG Z80 Assembler',
    ),
    'zxbasic' => array(
      'language_path' => 'sites/all/libraries/geshi/geshi',
      'fullname' => 'ZXBasic',
    ),
  );
  $export['geshifilter_available_languages_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_bash';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_bash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_c';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_c'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_cpp';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_cpp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_css';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_drupal5';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_drupal5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_drupal6';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_drupal6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_html5';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_html5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_java';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_java'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_javascript';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_mysql';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_mysql'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_php';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_python';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_python'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_rails';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_rails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_ruby';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_ruby'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_sass';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_sass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_twig';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_twig'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_bash';
  $strongarm->value = '<bash>';
  $export['geshifilter_language_tags_bash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_css';
  $strongarm->value = '<css>';
  $export['geshifilter_language_tags_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_html5';
  $strongarm->value = '<html5>';
  $export['geshifilter_language_tags_html5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_javascript';
  $strongarm->value = '<javascript>';
  $export['geshifilter_language_tags_javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_mysql';
  $strongarm->value = '<mysql>';
  $export['geshifilter_language_tags_mysql'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_php';
  $strongarm->value = '<php>';
  $export['geshifilter_language_tags_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_sass';
  $strongarm->value = '<sass>';
  $export['geshifilter_language_tags_sass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_twig';
  $strongarm->value = '<twig>';
  $export['geshifilter_language_tags_twig'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_tag_styles';
  $strongarm->value = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
  );
  $export['geshifilter_tag_styles'] = $strongarm;

  return $export;
}
