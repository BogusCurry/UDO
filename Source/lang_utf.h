/**(TAB=0)**********************************************************************
*
*  Project name : UDO
*  Module name  : lang_utf.h
*  Symbol prefix: lang
*
*  Description  : This file handles all language-specific, localizable strings 
*                 used by UDO. Keep in mind that the localizable strings are 
*                 UTF-8 encoded since UDO v7. - Again:
*
*         --->    THIS FILE IS UTF-8 ENCODED !!!   <---
*         --->    THIS FILE IS UTF-8 ENCODED !!!   <---
*         --->    THIS FILE IS UTF-8 ENCODED !!!   <---
*
*  Copyright    : 1995-2001 Dirk Hagedorn
*  Open Source  : since 2001
*
*                 This program is free software; you can redistribute it and/or
*                 modify it under the terms of the GNU General Public License
*                 as published by the Free Software Foundation; either version 2
*                 of the License, or (at your option) any later version.
*                 
*                 This program is distributed in the hope that it will be useful,
*                 but WITHOUT ANY WARRANTY; without even the implied warranty of
*                 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*                 GNU General Public License for more details.
*                 
*                 You should have received a copy of the GNU General Public License
*                 along with this program; if not, write to the Free Software
*                 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
*  Localizators : cs:  Petr Jandík, CZ-PRAHA
*                 da:  Henning Nymand, DK-NORRE ALSLEV
*                 de:  <various UDO developers>
*                 en:  <various UDO developers>
*                 es:  Manuel Angel Amaro Carmona, Venezuela (dassault.sis@gmail.com)
*                 fr:  corrections by Didier Briel (ddc@imaginet.fr)
*                 it:  - g.morando@agora.stm.it
*                      - Sergio Febo, IT
*                 ja:  Koichi MATSUMOTO
*                 lv:  Mārtiņš Zemzaris, LV
*                 nl:  - Rogier Cobben (rogier_cobben@nextjk.stuyts.nl)
*                      - Paul Pasveer, NL-LEEUWARDEN
*                      - Alexander Henket, NL-ROTTERDAM
*                 pl:  Dominik Siecinski, PL-LESZNO
*                 sv:  Karl-Johan Norén, SE-VÄRNAMO
*
*-------------------------------------------------------------------------------
*
*  Author       : Dirk Hagedorn (udo@dirk-hagedorn.de)
*  Co-Authors   : Ulf Dunkel (fd)
*  Write access : fd
*
*  Notes        : Please add yourself as co-author when you change this file.
*
*-------------------------------------------------------------------------------
*  Things to do : -
*
*-------------------------------------------------------------------------------
*  History:
*
*  2010:
*    fd  Feb 19: file introduced (extracted from LANG.C)
*    fd  May 19: new: LANG.degree
*    fd  Sep 11: tiny adjustments to esp. better reflect multiple translators
*  2011:
*    fd  Aug 09: more nl strings adjusted
*    fd  Aug 29: more es strings adjusted by Angel Carmona
*  2012:
*    fd  Feb 01: html_home localized to Spanish
*  2013:
*    fd  Feb 15: Japanese added (Microsoft Translator; not verified yet)
*    fd  May 02: UDOSTRINGS resorted
*    fd  Jun 03: some Japanese strings updated (by Koichi MATSUMOTO)
*    fd  Jun 03: lang.html_up removed (unused so far)
*  2015:
*    fd  Feb 03: more Portuguese words added
*  2017:
*    fd  Feb 07: Russian added
*    fd  Feb 08: localized copyright string added
*
******************************************|************************************/

/*******************************************************************************
*
*     DEFINES
*
******************************************|************************************/

#ifndef ID_LANG_C
#define ID_LANG_C
const char *id_lang_c= "@(#) lang.c       $Date: 2010-02-19 13:24:41 +0100 (Fr, 19 Feb 2010) $";
#endif





/*******************************************************************************
*
*     INCLUDE FILES
*
******************************************|************************************/

#include "constant.h"                     /* TOGER, etc. */
#include "udo_type.h"                     /* LANG */




/*******************************************************************************
*
*     MACRO DEFINITIONS
*
******************************************|************************************/

#define MONTH_LEN  50                     /* Byte (!) length of localized month name */





/*******************************************************************************
*
*     TYPE DEFINITIONS
*
******************************************|************************************/

typedef struct _months
{
   int    lan;                            /* TOGER, etc. */
   char   month[12][MONTH_LEN];           /* 12, of course ;-)) */
}  _MONTHS;


typedef struct _udostrings
{
   int          lan;                      /* TOGER, etc. */
   const LANG   udostring;                /* localized UDO strings (UDO_TYPE.H) */
}  _UDOSTRINGS;





/*******************************************************************************
*
*     GLOBAL INITIALIZED CONSTANTS
*
******************************************|************************************/

_MONTHS   MONTHS[] =                      /* localized months names */
{
   {TOCZE, {"ledna",    "února",     "března", "dubna",    "kvítna", "června",   "července", "srpna",    "září",       "října",       "listopadu", "prosince" }},
   {TODAN, {"Januar",   "Februar",   "Marts",  "April",    "Maj",    "Juni",     "Juli",     "August",   "September",  "Oktober",     "November",  "December" }},
   {TODUT, {"januari",  "februari",  "maart",  "april",    "mei",    "juni",     "juli",     "augustus", "september",  "oktober",     "november",  "december" }},
   {TOENG, {"January",  "February",  "March",  "April",    "May",    "June",     "July",     "August",   "September",  "October",     "November",  "December" }},
   {TOFIN, {"January",  "February",  "March",  "April",    "May",    "June",     "July",     "August",   "September",  "October",     "November",  "December" }},
   {TOFRA, {"janvier",  "février",   "mars",   "avril",    "mai",    "juin",     "juillet",  "août",     "septembre",  "octobre",     "novembre",  "décembre" }},
   {TOGER, {"Januar",   "Februar",   "März",   "April",    "Mai",    "Juni",     "Juli",     "August",   "September",  "Oktober",     "November",  "Dezember" }},
   {TOITA, {"Gennaio",  "Febbraio",  "Marzo",  "Aprile",   "Maggio", "Giugno",   "Luglio",   "Agosto",   "Settembre",  "Ottobre",     "Novembre",  "Dicembre" }},
   {TOJAP, {"1 月",     "2 月",      "3 月",   "4 月",     "5 月",   "6 月",     "7 月",     "8 月",     "9 月",       "10 月",       "11 月",     "12 月" }},
   {TOLVA, {"Janvāris", "Februāris", "Marts",  "Aprīlis",  "Maijs",  "Jūnijs",   "Jūlijs",   "Augusts",  "Septembris", "Oktobris",    "Novembris", "Decembris" }},
   {TONOR, {"January",  "February",  "March",  "April",    "May",    "June",     "July",     "August",   "September",  "October",     "November",  "December" }},
   {TOPOL, {"styczeń",  "luty",      "marzec", "kwiecień", "maj",    "czerwiec", "lipiec",   "sierpień", "wrzesień",   "październik", "listopad",  "grudzień" }},
   {TOPOR, {"Janeiro",  "Fevereiro", "Março",  "Abril",    "Maio",   "Junho",    "Julho",    "Agosto",   "Setembro",   "Outubro",     "Novembro",  "Dezembro" }},
   {TOSPA, {"Enero",    "Febrero",   "Marzo",  "Abril",    "Mayo",   "Junio",    "Julio",    "Agosto",   "Septiembre", "Octubre",     "Noviembre", "Diciembre" }},
   {TOSWE, {"januari",  "februari",  "mars",   "april",    "maj",    "juni",     "juli",     "augusti",  "september",  "oktober",     "november",  "december" }},
   {TORUS, {"Январь",   "Февраль",   "Март",   "Апрель",   "Май",    "Июнь",     "Июль",     "Август",   "Сентябрь",   "Октябрь",     "Ноябрь",    "Декабрь" }},
   
   {  NIL, {"", "", "", "", "", "", "", "", "", "", "", ""} }
};





_UDOSTRINGS   UDOSTRINGS[] =              /* localized UDO strings */
{
   /*
    * Note: The comments here are LEFT to the values, because you may 
    * ----- want to see and edit this file in a 1-byte C sourcecode editor,
    *       which shows Unicode characters as various numbers of bytes
    */
    
   {
      TOCZE,                              /* Czech */
      {
         /* preface     */    "Předmluva",
         /* chapter     */    "Kapitola",
         /* title       */    "Titul",
         /* appendix    */    "Příloha",
         /* contents    */    "Obsah",
         /* listfigure  */    "Seznam obrázků",
         /* listtable   */    "Seznam tabulek",
         /* figure      */    "Obrázek",
         /* table       */    "Tabulka",
         /* index       */    "Rejstřík",
         /* page        */    "strana",
         /* see         */    "viz",
         /* also        */    "viz též",
         /* by          */    "",
         /* fur         */    "pro",
         /* up          */    "Nahoru",
         /* exit        */    "Odchod",
         /* unknown     */    "Není známo",
         /* update      */    "Poslední aktualizace",
         /* lcid        */    "LCID=0x405 0x0 0x0 ;Czech",
         /* html_home   */    "Domů",
         /* html_prev   */    "Předchozí",
         /* html_next   */    "Následující",
         /* html_lang   */    "cs",
         /* html_start  */    "Začátek dokumentu",
         /* translator  */    "Překládání:",
         /* distributor */    "Distributor:",
         /* degree      */    "stupeň",
         /* copyright   */    "Autorská práva",
         "",""
      }
   },
   {
      TODAN,                              /* Danish */
      {
         /* preface     */    "Forord",
         /* chapter     */    "Kapitel",
         /* title       */    "Titel",
         /* appendix    */    "Tillæg",
         /* contents    */    "Indhold",
         /* listfigure  */    "Figur liste",
         /* listtable   */    "Tabel liste",
         /* figure      */    "Figur",
         /* table       */    "Tabel",
         /* index       */    "Indeks",
         /* page        */    "Side",
         /* see         */    "se",
         /* also        */    "se også",
         /* by          */    "af",
         /* fur         */    "for",
         /* up          */    "Op",
         /* exit        */    "Udgang",
         /* unknown     */    "ukendt",
         /* update      */    "sidst opdateret den",
         /* lcid        */    "LCID=0x406 0x0 0x0 ;Danish",
         /* html_home   */    "Hjem",
         /* html_prev   */    "Tidligere",
         /* html_next   */    "næste",
         /* html_lang   */    "da",
         /* html_start  */    "start af dokument",
         /* translator  */    "Oversættelse:",
         /* distributor */    "Distributor:",
         /* degree      */    "grad",
         /* copyright   */    "Ophavsret",
         "",""
      }
   },
   {
      TODUT,                              /* Dutch */
      {
         /* preface     */    "Voorwoord",
         /* chapter     */    "Hoofdstuk",
         /* title       */    "Titel",
         /* appendix    */    "Bijlage",
         /* contents    */    "Inhoud",
         /* listfigure  */    "Afbeeldingenlijst",
         /* listtable   */    "Tabellenlijst",
         /* figure      */    "Afbeelding",
         /* table       */    "Tabel",
         /* index       */    "Index",
         /* page        */    "bladzijde",
         /* see         */    "zie",
         /* also        */    "ook",
         /* by          */    "door",
         /* fur         */    "voor",
         /* up          */    "Omhoog",
         /* exit        */    "Beëindigen",
         /* unknown     */    "Onbekend",
         /* update      */    "Laatst gewijzigd op",
         /* lcid        */    "LCID=0x413 0x0 0x0 ;Dutch",
         /* html_home   */    "Start",
         /* html_prev   */    "Vorige",
         /* html_next   */    "Volgende",
         /* html_lang   */    "nl",
         /* html_start  */    "Begin van het document",
         /* translator  */    "Vertaling:",
         /* distributor */    "Distributeur:",
         /* degree      */    "graad",
         /* copyright   */    "Auteursrechten",
         "",""
      }
   },
   {
      TOENG,                              /* English */
      {
         /* preface     */    "Preface",
         /* chapter     */    "Chapter",
         /* title       */    "Title",
         /* appendix    */    "Appendix",
         /* contents    */    "Contents",
         /* listfigure  */    "List of Figures",
         /* listtable   */    "List of Tables",
         /* figure      */    "Figure",
         /* table       */    "Table",
         /* index       */    "Index",
         /* page        */    "page",
         /* see         */    "see",
         /* also        */    "see also",
         /* by          */    "by",
         /* fur         */    "for",
         /* up          */    "Up",
         /* exit        */    "Exit",
         /* unknown     */    "Unknown",
         /* update      */    "Last updated on",
         /* lcid        */    "LCID=0x409 0x0 0x0 ;English (USA)",
         /* html_home   */    "Home",
         /* html_prev   */    "Prev",
         /* html_next   */    "Next",
         /* html_lang   */    "en",
         /* html_start  */    "Begin of the document",
         /* translator  */    "Translation:",
         /* distributor */    "Distributor:",
         /* degree      */    "degree",
         /* copyright   */    "Copyright",
         "",""
      }
   },
   {
      TOFIN,                              /* Finnish */
      {
         /* preface     */    "Preface",
         /* chapter     */    "Chapter",
         /* title       */    "Title",
         /* appendix    */    "Appendix",
         /* contents    */    "Contents",
         /* listfigure  */    "List of Figures",
         /* listtable   */    "List of Tables",
         /* figure      */    "Figure",
         /* table       */    "Table",
         /* index       */    "Index",
         /* page        */    "page",
         /* see         */    "see",
         /* also        */    "see also",
         /* by          */    "by",
         /* fur         */    "for",
         /* up          */    "Up",
         /* exit        */    "Exit",
         /* unknown     */    "Unknown",
         /* update      */    "Last updated on",
         /* lcid        */    "LCID=0x409 0x0 0x0 ;English (USA)",
         /* html_home   */    "Home",
         /* html_prev   */    "Prev",
         /* html_next   */    "Next",
         /* html_lang   */    "fi",
         /* html_start  */    "Begin of the document",
         /* translator  */    "Kääntäminen:",
         /* distributor */    "Distributor:",
         /* degree      */    "aste",
         /* copyright   */    "Tekijänoikeus",
         "",""
      }
   },
   {
      TOFRA,                              /* French */
      {
         /* preface     */    "Préface",
         /* chapter     */    "Chapitre",
         /* title       */    "Titre",
         /* appendix    */    "Annexe",
         /* contents    */    "Sommaire",
         /* listfigure  */    "Table des figures",
         /* listtable   */    "Liste des tableaux",
         /* figure      */    "Figure",
         /* table       */    "Tableau",
         /* index       */    "Index",
         /* page        */    "page",
         /* see         */    "voir",
         /* also        */    "voir aussi",
         /* by          */    "de",
         /* fur         */    "pour",
         /* up          */    "Haut",
         /* exit        */    "Fin",
         /* unknown     */    "Inconnu",
         /* update      */    "Dernière mise à jour le",
         /* lcid        */    "LCID=0x40c 0x0 0x0 ;French (France)",
         /* html_home   */    "Home",
         /* html_prev   */    "Prev",
         /* html_next   */    "Next",
         /* html_lang   */    "fr",
         /* html_start  */    "Begin of the document",
         /* translator  */    "Traduction :",
         /* distributor */    "Distribution :",
         /* degree      */    "degré",
         /* copyright   */    "Droit d’auteur",
         "",""
      }
   },
   {
      TOGER,                              /* German */
      {
         /* preface     */    "Vorwort",
         /* chapter     */    "Kapitel",
         /* title       */    "Titel",
         /* appendix    */    "Anhang",
         /* contents    */    "Inhaltsverzeichnis",
         /* listfigure  */    "Abbildungsverzeichnis",
         /* listtable   */    "Tabellenverzeichnis",
         /* figure      */    "Abbildung",
         /* table       */    "Tabelle",
         /* index       */    "Index",
         /* page        */    "Seite",
         /* see         */    "siehe",
         /* also        */    "siehe auch",
         /* by          */    "von",
         /* fur         */    "für",
         /* up          */    "Hoch",
         /* exit        */    "Beenden",
         /* unknown     */    "Unbekannt",
         /* update      */    "Letzte Aktualisierung am",
         /* lcid        */    "LCID=0x407 0x0 0x0 ;German (Germany)",
         /* html_home   */    "Home",
         /* html_prev   */    "Prev",
         /* html_next   */    "Next",
         /* html_lang   */    "de",
         /* html_start  */    "Beginn des Dokumentes",
         /* translator  */    "Übersetzung:",
         /* distributor */    "Vertrieb:",
         /* degree      */    "Grad",
         /* copyright   */    "Copyright",
         "",""
      }
   },
   {
      TOITA,                              /* Italian */
      {
         /* preface     */    "Prefazione",
         /* chapter     */    "Capitolo",
         /* title       */    "Titolo",
         /* appendix    */    "Appendice",
         /* contents    */    "Contenuto",
         /* listfigure  */    "Lista di Figure",
         /* listtable   */    "Lista di Tabelle",
         /* figure      */    "Figura",
         /* table       */    "Tabella",
         /* index       */    "Indice",
         /* page        */    "pagina",
         /* see         */    "vedere",
         /* also        */    "vedere anche",
         /* by          */    "da",
         /* fur         */    "pro",
         /* up          */    "Su",
         /* exit        */    "Uscita",
         /* unknown     */    "Ignoto",
         /* update      */    "Ultimo aggiornamento",
         /* lcid        */    "LCID=0x410 0x0 0x0 ;Italian (Italy)",
         /* html_home   */    "Home",
         /* html_prev   */    "Prev",
         /* html_next   */    "Next",
         /* html_lang   */    "it",
         /* html_start  */    "Begin of the document",
         /* translator  */    "Traduzione:",
         /* distributor */    "Distribuzione:",
         /* degree      */    "grado",
         /* copyright   */    "Diritto d'autore",
         "",""
      }
   },
   {
      TOJAP,                              /* Japanese */
      {
         /* preface     */    "序文",
         /* chapter     */    "章",
         /* title       */    "タイトル",
         /* appendix    */    "付録",
         /* contents    */    "目次",
         /* listfigure  */    "図一覧",
         /* listtable   */    "表の一覧",
         /* figure      */    "図",
         /* table       */    "表",
         /* index       */    "索引",
         /* page        */    "ページ",
         /* see         */    "参照してください",
         /* also        */    "参照してください",
         /* by          */    "作者",
         /* fur         */    "所属",
         /* up          */    "上へ",
         /* exit        */    "終了",
         /* unknown     */    "不明",
         /* update      */    "最終更新日",
         /* lcid        */    "LCID=0x411 0x0 0x0 ;Japanese (Japan)",
         /* html_home   */    "ホーム",
         /* html_prev   */    "戻る",
         /* html_next   */    "進む",
         /* html_lang   */    "ja",
         /* html_start  */    "ドキュメントの開始",
         /* translator  */    "翻訳：",
         /* distributor */    "販売元：",
         /* degree      */    "度",
         /* copyright   */    "著作権",
         "",""
      }
   },
   {
      TOLVA,                              /* Latvian */
      {
         /* preface     */    "Priekšvārds",
         /* chapter     */    "Nodaļa",
         /* title       */    "Nosaukums",
         /* appendix    */    "Pielikums",
         /* contents    */    "Saturs",
         /* listfigure  */    "Attēlu saraksts",
         /* listtable   */    "Tabulu saraksts",
         /* figure      */    "Attēls",
         /* table       */    "Tabula",
         /* index       */    "Alfabētiskais rādītājs",
         /* page        */    "lappuse",
         /* see         */    "skatīt",
         /* also        */    "skatīt arī",
         /* by          */    "pēc",
         /* fur         */    "",
         /* up          */    "Augšup",
         /* exit        */    "Iziet",
         /* unknown     */    "Nezināms",
         /* update      */    "Pēdējoreiz atjaunots",
         /* lcid        */    "LCID=0x426 0x0 0x0 ;Latvian",
         /* html_home   */    "Sākums",
         /* html_prev   */    "Iepriekšējais",
         /* html_next   */    "Nākamais",
         /* html_lang   */    "lv",
         /* html_start  */    "Dokumenta sākums",
         /* translator  */    "Translation:",
         /* distributor */    "Izplatītājs:",
         /* degree      */    "degree",
         /* copyright   */    "Autortiesības",
         "",""
      }
   },
   {
      TONOR,                              /* Norwegian (Nynorsk)*/
      {
         /* preface     */    "Preface",
         /* chapter     */    "Chapter",
         /* title       */    "Title",
         /* appendix    */    "Appendix",
         /* contents    */    "Contents",
         /* listfigure  */    "List of Figures",
         /* listtable   */    "List of Tables",
         /* figure      */    "Figure",
         /* table       */    "Table",
         /* index       */    "Index",
         /* page        */    "page",
         /* see         */    "see",
         /* also        */    "see also",
         /* by          */    "by",
         /* fur         */    "for",
         /* up          */    "Up",
         /* exit        */    "Exit",
         /* unknown     */    "Unknown",
         /* update      */    "Last updated on",
         /* lcid        */    "LCID=0x409 0x0 0x0 ;English (USA)",
         /* html_home   */    "Home",
         /* html_prev   */    "Prev",
         /* html_next   */    "Next",
         /* html_lang   */    "en",
         /* html_start  */    "Begin of the document",
         /* translator  */    "Omsetjing:",
         /* distributor */    "Distributor:",
         /* degree      */    "grad",
         /* copyright   */    "Opphavsrett",
         "",""
      }
   },
   {
      TOPOL,                              /* Polish */
      {
         /* preface     */    "Preface",
         /* chapter     */    "Chapter",
         /* title       */    "Title",
         /* appendix    */    "Aneks",
         /* contents    */    "Zawartość",
         /* listfigure  */    "List of Figures",
         /* listtable   */    "List of Tables",
         /* figure      */    "Figure",
         /* table       */    "Table",
         /* index       */    "Indeks",
         /* page        */    "page",
         /* see         */    "see",
         /* also        */    "see also",
         /* by          */    "by",
         /* fur         */    "for",
         /* up          */    "Up",
         /* exit        */    "Exit",
         /* unknown     */    "Unknown",
         /* update      */    "Ostatnie zmiany",
         /* lcid        */    "LCID=0x415 0x0 0x0 ;Polish",
         /* html_home   */    "Główna",
         /* html_prev   */    "Prev",
         /* html_next   */    "Next",
         /* html_lang   */    "pl",
         /* html_start  */    "Begin of the document",
         /* translator  */    "Tłumaczenie:",
         /* distributor */    "Distributor:",
         /* degree      */    "stopień",
         /* copyright   */    "Prawo autorskie",
         "",""
      }
   },
   {
      TOPOR,                              /* Portuguese */
      {
         /* preface     */    "Prefácio",
         /* chapter     */    "Capítulo",
         /* title       */    "Título",
         /* appendix    */    "Apêndice",
         /* contents    */    "Conteúdo",
         /* listfigure  */    "Lista de figuras",
         /* listtable   */    "Lista de tabelas",
         /* figure      */    "Figura",
         /* table       */    "Tabela",
         /* index       */    "Índice",
         /* page        */    "página",
         /* see         */    "ver",
         /* also        */    "ver também",
         /* by          */    "por",
         /* fur         */    "para",
         /* up          */    "Para cima",
         /* exit        */    "Sair",
         /* unknown     */    "Desconhecido",
         /* update      */    "Actualizada em",
         /* lcid        */    "LCID=0x0816 0x0 0x0 ;Portuguese (Portugal)",
         /* html_home   */    "Casa",
         /* html_prev   */    "Anterior",
         /* html_next   */    "Próximo",
         /* html_lang   */    "pt",
         /* html_start  */    "Início do documento",
         /* translator  */    "Tradução:",
         /* distributor */    "Distribuidor:",
         /* degree      */    "grau",
         /* copyright   */    "Direito autoral",
         "",""
      }
   },
   {
      TORUS,                              /* Russian */
      {
         /* preface     */    "Предисловие",
         /* chapter     */    "Глава",
         /* title       */    "Название",
         /* appendix    */    "Приложение",
         /* contents    */    "Содержание",
         /* listfigure  */    "Список рисунков",
         /* listtable   */    "Список таблиц",
         /* figure      */    "Рисунок",
         /* table       */    "Таблица",
         /* index       */    "Индекс",
         /* page        */    "страница",
         /* see         */    "см.",
         /* also        */    "cмотрите также",
         /* by          */    "по",
         /* fur         */    "для",
         /* up          */    "Вверх",
         /* exit        */    "Выход",
         /* unknown     */    "Неизвестно",
         /* update      */    "Последнее обновление:",
         /* lcid        */    "LCID=0x419 0x0 0x0 ;Russian",
         /* html_home   */    "Главная",
         /* html_prev   */    "Предыдущий",
         /* html_next   */    "Следующая",
         /* html_lang   */    "ru",
         /* html_start  */    "Начало документа",
         /* translator  */    "Перевод:",
         /* distributor */    "Дистрибьютор:",
         /* degree      */    "степень",
         /* copyright   */    "Авторские права",
         "",""
      }
   },
   {
      TOSPA,                              /* Spanish */
      {
         /* preface     */    "Prefacio",
         /* chapter     */    "Capìtulo",
         /* title       */    "Tìtulo",
         /* appendix    */    "Apéndice",
         /* contents    */    "Contenido",
         /* listfigure  */    "Lista de figuras",
         /* listtable   */    "Lista de tablas",
         /* figure      */    "Figura",
         /* table       */    "Tabla",
         /* index       */    "Índice",
         /* page        */    "Página",
         /* see         */    "Ver",
         /* also        */    "Además",
         /* by          */    "Por",
         /* fur         */    "Para",
         /* up          */    "Arriba",
         /* exit        */    "Salida",
         /* unknown     */    "desconocido",
         /* update      */    "Última actualización el",
         /* lcid        */    "LCID=0x40a 0x0 0x0 ;Spanish (Traditional)",
         /* html_home   */    "Inicio",
         /* html_prev   */    "Anterior",
         /* html_next   */    "Siguiente",
         /* html_lang   */    "es",
         /* html_start  */    "Comienzo del documento",
         /* translator  */    "Traducción:",
         /* distributor */    "Distribuidor:",
         /* degree      */    "grado",
         /* copyright   */    "Derechos de autor",
         "",""
      }
   },
   {
      TOSWE,                              /* Swedish */
      {
         /* preface     */    "Förord",
         /* chapter     */    "Kapitel",
         /* title       */    "Titel",
         /* appendix    */    "Appendix",
         /* contents    */    "Innehållsförteckning",
         /* listfigure  */    "Figurer",
         /* listtable   */    "Tabeller",
         /* figure      */    "Figur",
         /* table       */    "Tabell",
         /* index       */    "Index",
         /* page        */    "Sida",
         /* see         */    "se",
         /* also        */    "se även",
         /* by          */    "av",
         /* fur         */    "för",
         /* up          */    "Upp",
         /* exit        */    "Avsluta",
         /* unknown     */    "Okänd",
         /* update      */    "Senast uppdaterad",
         /* lcid        */    "LCID=0x41d 0x0 0x0 ;Swedish (Sweden)",
         /* html_home   */    "Home",
         /* html_prev   */    "Prev",
         /* html_next   */    "Next",
         /* html_lang   */    "sv",
         /* html_start  */    "Dokumentets början",
         /* translator  */    "Översättning:",
         /* distributor */    "Distributör:",
         /* degree      */    "grad",
         /* copyright   */    "Upphovsrätt",
         "",""
      }
   },

   {  NIL, { "" }}                       /* list terminator */
};


/* +++ EOF +++ */
